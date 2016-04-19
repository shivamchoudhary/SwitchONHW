// Copyright (C) 1991-2013 Altera Corporation
// Your use of Altera Corporation's design tools, logic functions 
// and other software and tools, and its AMPP partner logic 
// functions, and any output files from any of the foregoing 
// (including device programming or simulation files), and any 
// associated documentation or information are expressly subject 
// to the terms and conditions of the Altera Program License 
// Subscription Agreement, Altera MegaCore Function License 
// Agreement, or other applicable license agreement, including, 
// without limitation, that your use is for the sole purpose of 
// programming logic devices manufactured by Altera and sold by 
// Altera or its authorized distributors.  Please refer to the 
// applicable agreement for further details.
// Quartus II 13.1.1 Build 166 11/26/2013

//START_MODULE_NAME------------------------------------------------------------
//
// Module Name     :  ALTERA_MF_MEMORY_INITIALIZATION
//
// Description     :  Common function to read intel-hex format data file with
//                    extension .hex and creates the equivalent verilog format
//                    data file with extension .ver.
//
// Limitation      :  Supports only record type '00'(data record), '01'(end of
//                     file record) and '02'(extended segment address record).
//
// Results expected:  Creates the verilog format data file with extension .ver
//                     and return the name of the file.
//
//END_MODULE_NAME--------------------------------------------------------------


`timescale 1 ps / 1 ps
module lcell (in, out);
    input in;
    output out;

    assign out = in;
endmodule

// BEGINNING OF MODULE
`timescale 1 ps / 1 ps

`define TRUE 1 
`define FALSE 0 
`define NULL 0
`define EOF -1
`define MAX_BUFFER_SZ   2048
`define MAX_NAME_SZ     256
`define MAX_WIDTH       1024
`define COLON           ":"
`define DOT             "."
`define NEWLINE         "\n"
`define CARRIAGE_RETURN  8'h0D
`define SPACE           " "
`define TAB             "\t"
`define OPEN_BRACKET    "["
`define CLOSE_BRACKET   "]"
`define OFFSET          9
`define H10             8'h10
`define H10000          20'h10000
`define AWORD           8
`define MASK15          32'h000000FF
`define EXT_STR         "ver"
`define PERCENT         "%"
`define MINUS           "-"
`define SEMICOLON       ";"
`define EQUAL           "="

// MODULE DECLARATION
module ALTERA_MF_MEMORY_INITIALIZATION;

/****************************************************************/
/* convert uppercase character values to lowercase.             */
/****************************************************************/
function [8:1] tolower;
    input [8:1] given_character;
    reg [8:1] conv_char;

begin
    if ((given_character >= 65) && (given_character <= 90)) // ASCII number of 'A' is 65, 'Z' is 90
    begin
        conv_char = given_character + 32; // 32 is the difference in the position of 'A' and 'a' in the ASCII char set
        tolower = conv_char;
    end
    else
        tolower = given_character;    
end
endfunction
    
/****************************************************************/
/* Read in Altera-mif format data to verilog format data.       */
/****************************************************************/
task convert_mif2ver;
    input[`MAX_NAME_SZ*8 : 1] in_file;
    input width;
    output [`MAX_NAME_SZ*8 : 1] out_file;
    reg [`MAX_NAME_SZ*8 : 1] in_file;
    reg [`MAX_NAME_SZ*8 : 1] out_file;
    reg [`MAX_NAME_SZ*8 : 1] buffer;
    reg [`MAX_WIDTH : 0] memory_data1, memory_data2;
    reg [8 : 1] c;
    reg [3 : 0] hex, tmp_char;
    reg [24 : 1] address_radix, data_radix;
    reg get_width;
    reg get_depth;
    reg get_data_radix;
    reg get_address_radix;
    reg width_found;
    reg depth_found;
    reg data_radix_found;
    reg address_radix_found;
    reg get_address_data_pairs;
    reg get_address;
    reg get_data;
    reg display_address;
    reg invalid_address;
    reg get_start_address;
    reg get_end_address;
    reg done;
    reg error_status;
    reg first_rec;
    reg last_rec;

    integer width;
    integer memory_width, memory_depth;
    integer value;
    integer ifp, ofp, r, r2;
    integer i, j, k, m, n;
    
    integer off_addr, nn, address, tt, cc, aah, aal, dd, sum ;
    integer start_address, end_address;
    integer line_no;
    integer character_count;
    integer comment_with_percent_found;
    integer comment_with_double_minus_found;

begin
        done = `FALSE;
        error_status = `FALSE;
        first_rec = `FALSE;
        last_rec = `FALSE;
        comment_with_percent_found = `FALSE;
        comment_with_double_minus_found = `FALSE;

        off_addr= 0;
        nn= 0;
        address = 0;
        start_address = 0;
        end_address = 0;
        tt= 0;
        cc= 0;
        aah= 0;
        aal= 0;
        dd= 0;
        sum = 0;
        line_no = 1;
        c = 0;
        hex = 0;
        value = 0;
        buffer = "";
        character_count = 0;
        memory_width = 0;
        memory_depth = 0;
        memory_data1 = {(`MAX_WIDTH+1) {1'b0}};
        memory_data2 = {(`MAX_WIDTH+1) {1'b0}};
        address_radix = "hex";
        data_radix = "hex";
        get_width = `FALSE;
        get_depth = `FALSE;
        get_data_radix = `FALSE;
        get_address_radix = `FALSE;
        width_found = `FALSE;
        depth_found = `FALSE;
        data_radix_found = `FALSE;
        address_radix_found = `FALSE;
        get_address_data_pairs = `FALSE;
        display_address = `FALSE;
        invalid_address = `FALSE;
        get_start_address = `FALSE;
        get_end_address = `FALSE;

        if((in_file[4*8 : 1] == ".dat") || (in_file[4*8 : 1] == ".DAT"))
            out_file = in_file;
        else
        begin
            ifp = $fopen(in_file, "r");

            if (ifp == `NULL)
            begin
                $display("ERROR: cannot read %0s.", in_file);
                done = `TRUE;
            end
        
            out_file = in_file;
            
            if((out_file[4*8 : 1] == ".mif") || (out_file[4*8 : 1] == ".MIF"))
                out_file[3*8 : 1] = `EXT_STR;
            else
            begin
                $display("ERROR: Invalid input file name %0s. Expecting file with .mif extension and Altera-mif data format.", in_file);
                done = `TRUE;
            end

            if (!done)
            begin            
                ofp = $fopen(out_file, "w");

                if (ofp == `NULL)
                begin
                    $display("ERROR : cannot write %0s.", out_file);
                    done = `TRUE;
                end
            end
            
            while((!done) && (!error_status))
            begin : READER
 
                r = $fgetc(ifp);

                if (r == `EOF)
                begin
                // to do : add more checking on whether a particular assigment(width, depth, memory/address) are mising
                    if(!first_rec)
                    begin
                        error_status = `TRUE;
                        $display("WARNING: %0s, Intel-hex data file is empty.", in_file);
                        $display ("Time: %0t  Instance: %m", $time);
                    end
                    else if (!get_address_data_pairs)
                    begin
                        error_status = `TRUE;
                        $display("ERROR: %0s, line %0d, Missing `content begin` statement.", in_file, line_no);
                    end
                    else if(!last_rec)
                    begin
                        error_status = `TRUE;
                        $display("ERROR: %0s, line %0d, Missing `end` statement.", in_file, line_no);
                    end
                    done = `TRUE;
                end
                else if ((r == `NEWLINE) || (r == `CARRIAGE_RETURN))
                begin                    
                    if ((buffer == "contentbegin") && (get_address_data_pairs == `FALSE))
                    begin
                        get_address_data_pairs = `TRUE;
                        get_address = `TRUE;
                        buffer = "";
                    end
                    else if (buffer == "content")
                    begin
                        // continue to next character
                    end
                    else
                    if (buffer != "")
                    begin
                        // found invalid syntax in the particular line.
                        error_status = `TRUE;
                        $display("ERROR: %0s, line %0d, Invalid Altera-mif record.", in_file, line_no);
                        disable READER;
                    end
                    line_no = line_no +1;
                    
                end
                else if ((r == `SPACE) || (r == `TAB))
                begin
                    // continue to next character;
                end
                else if (r == `PERCENT)
                begin
                    // Ignore all the characters which which is part of comment.
                    r = $fgetc(ifp);

                    while ((r != `PERCENT) && (r != `NEWLINE) && (r != `CARRIAGE_RETURN))
                    begin
                        r = $fgetc(ifp);                      
                    end

                    if ((r == `NEWLINE) || (r == `CARRIAGE_RETURN))
                    begin
                        line_no = line_no +1;

                        if ((buffer == "contentbegin") && (get_address_data_pairs == `FALSE))
                        begin
                            get_address_data_pairs = `TRUE;
                            get_address = `TRUE;
                            buffer = "";
                        end
                    end
                end
                else if (r == `MINUS)
                begin
                    r = $fgetc(ifp);
                    if (r == `MINUS)
                    begin
                        // Ignore all the characters which which is part of comment.
                        r = $fgetc(ifp);
    
                        while ((r != `NEWLINE) && (r != `CARRIAGE_RETURN))
                        begin
                            r = $fgetc(ifp);
                            
                        end
    
                        if ((r == `NEWLINE) || (r == `CARRIAGE_RETURN))
                        begin
                            line_no = line_no +1;

                            if ((buffer == "contentbegin") && (get_address_data_pairs == `FALSE))
                            begin
                                get_address_data_pairs = `TRUE;
                                get_address = `TRUE;
                                buffer = "";
                            end
                        end
                    end
                    else
                    begin
                        error_status = `TRUE;
                        $display("ERROR: %0s, line %0d, Invalid Altera-mif record.", in_file, line_no);
                        done = `TRUE;
                        disable READER;
                    end
                end
                else if (r == `EQUAL)
                begin
                    if (buffer == "width")
                    begin
                        if (width_found == `FALSE)
                        begin
                            get_width = `TRUE;
                            buffer = "";
                        end
                        else
                        begin
                            error_status = `TRUE;
                            $display("ERROR: %0s, line %0d, Width has already been specified once.", in_file, line_no);
                        end
                    end
                    else if (buffer == "depth")
                    begin
                        get_depth = `TRUE;
                        buffer = ""; 
                    end
                    else if (buffer == "data_radix")
                    begin
                        get_data_radix = `TRUE;
                        buffer = "";
                    end
                    else if (buffer == "address_radix")
                    begin
                        get_address_radix = `TRUE;
                        buffer = "";
                    end
                    else
                    begin
                        error_status = `TRUE;
                        $display("ERROR: %0s, line %0d, Unknown setting (%0s).", in_file, line_no, buffer);
                    end
                end
                else if (r == `COLON)
                begin
                    if (!get_address_data_pairs)
                    begin
                        error_status = `TRUE;
                        $display("ERROR: %0s, line %0d, Missing `content begin` statement.", in_file, line_no);
                    end
                    else if (invalid_address == `TRUE)
                    begin
                        error_status = `TRUE;
                        $display("ERROR: %0s, line %0d, Invalid data record.", in_file, line_no);
                    end
                    begin
                        get_address = `FALSE;
                        get_data = `TRUE;
                        display_address = `TRUE;
                    end
                end
                else if (r == `DOT)
                begin
                    r = $fgetc(ifp);
                    if (r == `DOT)
                    begin
                        if (get_start_address == `TRUE)
                        begin
                            start_address = address;
                            address = 0; 
                            get_start_address = `FALSE;
                            get_end_address = `TRUE;
                        end
                        else
                        begin
                            error_status = `TRUE;
                            $display("ERROR: %0s, line %0d, Invalid Altera-mif record.", in_file, line_no);
                            done = `TRUE;
                            disable READER;
                        end
                    end
                    else
                    begin
                        error_status = `TRUE;
                        $display("ERROR: %0s, line %0d, Invalid Altera-mif record.", in_file, line_no);
                        done = `TRUE;
                        disable READER;
                    end
                end
                else if (r == `OPEN_BRACKET)
                begin
                    get_start_address = `TRUE;
                end
                else if (r == `CLOSE_BRACKET)
                begin
                    if (get_end_address == `TRUE)
                    begin
                        end_address = address;
                        address = 0; 
                        get_end_address = `FALSE;
                    end
                    else
                    begin
                        error_status = `TRUE;
                        $display("ERROR: %0s, line %0d, Invalid Altera-mif record.", in_file, line_no);
                        done = `TRUE;
                        disable READER;
                    end
                end                
                else if (r == `SEMICOLON)
                begin
                    if (get_width == `TRUE)
                    begin
                        width_found = `TRUE;
                        memory_width = value;
                        value = 0;
                        get_width = `FALSE;
                    end
                    else if (get_depth == `TRUE)
                    begin
                        depth_found = `TRUE;
                        memory_depth = value;
                        value = 0;
                        get_depth = `FALSE;
                    end
                    else if (get_data_radix == `TRUE)
                    begin
                        data_radix_found = `TRUE;
                        get_data_radix = `FALSE;

                        if ((buffer == "bin") || (buffer == "oct") || (buffer == "dec") || (buffer == "uns") ||
                            (buffer == "hex"))
                        begin
                            data_radix = buffer[24 : 1];
                        end
                        else
                        begin
                            error_status = `TRUE;
                            $display("ERROR: %0s, line %0d, Invalid assignment (%0s) to data_radix.", in_file, line_no, buffer);
                        end
                        buffer = "";
                    end
                    else if (get_address_radix == `TRUE)
                    begin
                        address_radix_found = `TRUE;
                        get_address_radix = `FALSE;

                        if ((buffer == "bin") || (buffer == "oct") || (buffer == "dec") || (buffer == "uns") ||
                            (buffer == "hex"))
                        begin
                            address_radix = buffer[24 : 1];
                        end
                        else
                        begin
                            error_status = `TRUE;
                            $display("ERROR: %0s, line %0d, Invalid assignment (%0s) to address radix.", in_file, line_no, buffer);
                        end
                        buffer = "";
                    end
                    else if (buffer == "end")
                    begin
                        if (get_address_data_pairs == `TRUE)
                        begin
                            last_rec = `TRUE;
                            buffer = "";
                        end
                        else
                        begin
                            error_status = `TRUE;
                            $display("ERROR: %0s, line %0d, Missing `content begin` statement.", in_file, line_no);
                        end
                    end
                    else if (get_data == `TRUE)
                    begin
                        get_address = `TRUE;
                        get_data = `FALSE;
                        buffer = "";
                        character_count = 0;
                        
                        if (start_address != end_address)
                        begin
                            for (address = start_address; address <= end_address; address = address+1)
                            begin
                                $fdisplay(ofp,"@%0h", address);
                                
                                for (i = memory_width -1; i >= 0; i = i-1 )
                                begin
                                    hex[(i % 4)] =  memory_data1[i];
                                    
                                    if ((i % 4) == 0)
                                    begin
                                        $fwrite(ofp, "%0h", hex);
                                        hex = 0;
                                    end
                                end
        
                                $fwrite(ofp, "\n");
                            end
                            start_address = 0;
                            end_address = 0;
                            address = 0;
                            hex = 0;
                            memory_data1 = {(`MAX_WIDTH+1) {1'b0}};
                        end
                        else
                        begin
                            if (display_address == `TRUE)
                            begin
                                $fdisplay(ofp,"@%0h", address);
                                display_address = `FALSE;
                            end
                            
                            for (i = memory_width -1; i >= 0; i = i-1 )
                            begin
                                hex[(i % 4)] =  memory_data1[i];
                                
                                if ((i % 4) == 0)
                                begin
                                    $fwrite(ofp, "%0h", hex);
                                    hex = 0;
                                end
                            end
    
                            $fwrite(ofp, "\n");                      
                            address = 0;
                            hex = 0;
                            memory_data1 = {(`MAX_WIDTH+1) {1'b0}};
                        end
                    end
                    else
                    begin
                        error_status = `TRUE;
                        $display("ERROR: %0s, line %0d, Invalid assigment.", in_file, line_no);
                    end
                end
                else if ((get_width == `TRUE) || (get_depth == `TRUE))
                begin
                    if ((r >= "0") && (r <= "9"))
                        value = (value * 10) + (r - 'h30);
                    else
                    begin
                        error_status = `TRUE;
                        $display("ERROR: %0s, line %0d, Invalid assignment to width/depth.", in_file, line_no);
                    end
                end
                else if (get_address == `TRUE)
                begin
                    if (address_radix == "hex")
                    begin
                        if ((r >= "0") && (r <= "9"))
                            value = (r - 'h30);
                        else if ((r >= "A") && (r <= "F"))
                            value = 10 + (r - 'h41);
                        else if ((r >= "a") && (r <= "f"))
                            value = 10 + (r - 'h61);
                        else
                        begin
                            invalid_address = `TRUE;
                        end
                            
                        address = (address * 16) + value;
                    end
                    else if ((address_radix == "dec"))
                    begin
                        if ((r >= "0") && (r <= "9"))
                            value = (r - 'h30);
                        else
                        begin
                            invalid_address = `TRUE;
                        end
                            
                        address = (address * 10) + value;
                    end
                    else if (address_radix == "uns")
                    begin
                        if ((r >= "0") && (r <= "9"))
                            value = (r - 'h30);
                        else
                        begin
                            invalid_address = `TRUE;
                        end
                            
                        address = (address * 10) + value; 
                    end
                    else if (address_radix == "bin")
                    begin
                        if ((r >= "0") && (r <= "1"))
                            value = (r - 'h30);
                        else
                        begin
                            invalid_address = `TRUE;
                        end
                            
                        address = (address * 2) + value;
                    end
                    else if (address_radix == "oct")
                    begin
                        if ((r >= "0") && (r <= "7"))
                            value = (r - 'h30);
                        else
                        begin
                            invalid_address = `TRUE;
                        end
                            
                        address = (address * 8) + value;
                    end
                    
                    if ((r >= 65) && (r <= 90))
                        c = tolower(r); 
                    else
                        c = r;

                    {tmp_char,buffer} = {buffer, c};                    
                end
                else if (get_data == `TRUE)
                begin                    
                    character_count = character_count +1;

                    if (data_radix == "hex")
                    begin
                        if ((r >= "0") && (r <= "9"))
                            value = (r - 'h30);
                        else if ((r >= "A") && (r <= "F"))
                            value = 10 + (r - 'h41);
                        else if ((r >= "a") && (r <= "f"))
                            value = 10 + (r - 'h61);
                        else
                        begin
                            error_status = `TRUE;
                            $display("ERROR: %0s, line %0d, Invalid data record.", in_file, line_no);
                            done = `TRUE;
                            disable READER;
                        end
                            
                        memory_data1 = (memory_data1 * 16) + value;
                    end
                    else if ((data_radix == "dec"))
                    begin
                        if ((r >= "0") && (r <= "9"))
                            value = (r - 'h30);
                        else
                        begin
                            error_status = `TRUE;
                            $display("ERROR: %0s, line %0d, Invalid data record.", in_file, line_no);
                            done = `TRUE;
                            disable READER;
                        end
                            
                        memory_data1 = (memory_data1 * 10) + value;
                    end
                    else if (data_radix == "uns")
                    begin
                        if ((r >= "0") && (r <= "9"))
                            value = (r - 'h30);
                        else
                        begin
                            error_status = `TRUE;
                            $display("ERROR: %0s, line %0d, Invalid data record.", in_file, line_no);
                            done = `TRUE;
                            disable READER;
                        end
                            
                        memory_data1 = (memory_data1 * 10) + value; 
                    end
                    else if (data_radix == "bin")
                    begin
                        if ((r >= "0") && (r <= "1"))
                            value = (r - 'h30);
                        else
                        begin
                            error_status = `TRUE;
                            $display("ERROR: %0s, line %0d, Invalid data record.", in_file, line_no);
                            done = `TRUE;
                            disable READER;
                        end
                            
                        memory_data1 = (memory_data1 * 2) + value;
                    end
                    else if (data_radix == "oct")
                    begin
                        if ((r >= "0") && (r <= "7"))
                            value = (r - 'h30);
                        else
                        begin
                            error_status = `TRUE;
                            $display("ERROR: %0s, line %0d, Invalid data record.", in_file, line_no);
                            done = `TRUE;
                            disable READER;
                        end
                            
                        memory_data1 = (memory_data1 * 8) + value;
                    end
                end
                else
                begin
                    first_rec = `TRUE;
                    
                    if ((r >= 65) && (r <= 90))
                        c = tolower(r); 
                    else
                        c = r;

                    {tmp_char,buffer} = {buffer, c};                    
                end
            end
            $fclose(ifp);
            $fclose(ofp);
        end
end
endtask // convert_mif2ver

/****************************************************************/
/* Read in Intel-hex format data to verilog format data.        */
/*  Intel-hex format    :nnaaaaattddddcc                        */
/****************************************************************/
task convert_hex2ver;
    input[`MAX_NAME_SZ*8 : 1] in_file;
    input width;
    output [`MAX_NAME_SZ*8 : 1] out_file;
    reg [`MAX_NAME_SZ*8 : 1] in_file;
    reg [`MAX_NAME_SZ*8 : 1] out_file;
    reg [8:1] c;
    reg [3:0] hex, tmp_char;
    reg done;
    reg error_status;
    reg first_rec;
    reg last_rec;
    reg first_normal_record;
    reg is_word_address_format;

    integer width;
    integer ifp, ofp, r, r2;
    integer i, j, k, m, n;
    
    integer off_addr, nn, aaaa, aaaa_pre, tt, cc, aah, aal, dd, sum ;
    integer line_no;
    integer divide_factor;

begin
        done = `FALSE;
        error_status = `FALSE;
        first_rec = `FALSE;
        last_rec = `FALSE;
        first_normal_record = `TRUE;
        is_word_address_format = `FALSE;
        off_addr= 0;
        nn= 0;
        aaaa= 0;
        aaaa_pre = 0;
        tt= 0;
        cc= 0;
        aah= 0;
        aal= 0;
        dd= 0;
        sum = 0;
        line_no = 1;
        c = 0;
        hex = 0;
        divide_factor = 1;

        if((in_file[4*8 : 1] == ".dat") || (in_file[4*8 : 1] == ".DAT"))
            out_file = in_file;
        else
        begin
            ifp = $fopen(in_file, "r");
            if (ifp == `NULL)
            begin
                $display("ERROR: cannot read %0s.", in_file);
                done = `TRUE;
            end
        
            out_file = in_file;
            
            if((out_file[4*8 : 1] == ".hex") || (out_file[4*8 : 1] == ".HEX"))
                out_file[3*8 : 1] = `EXT_STR;
            else
            begin
                $display("ERROR: Invalid input file name %0s. Expecting file with .hex extension and Intel-hex data format.", in_file);
                done = `TRUE;
            end
            
            if (!done)
            begin            
                ofp = $fopen(out_file, "w");
                if (ofp == `NULL)
                begin
                    $display("ERROR : cannot write %0s.", out_file);
                    done = `TRUE;
                end
            end
            
            while((!done) && (!error_status))
            begin : READER
        
                r = $fgetc(ifp);
        
                if (r == `EOF)
                begin
                    if(!first_rec)
                    begin
                        error_status = `TRUE;
                        $display("WARNING: %0s, Intel-hex data file is empty.", in_file);
                        $display ("Time: %0t  Instance: %m", $time);
                    end
                    else if(!last_rec)
                    begin
                        error_status = `TRUE;
                        $display("ERROR: %0s, line %0d, Missing the last record.", in_file, line_no);
                    end
                end
                else if (r == `COLON)
                begin
                    first_rec = `TRUE;
                    nn= 0;
                    aaaa_pre = aaaa;
                    aaaa= 0;
                    tt= 0;
                    cc= 0;
                    aah= 0;
                    aal= 0;
                    dd= 0;
                    sum = 0;
        
                    // get record length bytes
                    for (i = 0; i < 2; i = i+1)
                    begin
                        r = $fgetc(ifp);
                        
                        if ((r >= "0") && (r <= "9"))
                            nn = (nn * 16) + (r - 'h30);
                        else if ((r >= "A") && (r <= "F"))
                            nn = (nn * 16) + 10 + (r - 'h41);
                        else if ((r >= "a") && (r <= "f"))
                            nn = (nn * 16) + 10 + (r - 'h61);
                        else
                        begin
                            error_status = `TRUE;
                            $display("ERROR: %0s, line %0d, Invalid INTEL HEX record.", in_file, line_no);
                            done = `TRUE;
                            disable READER;
                        end
                    end
        
                    // get address bytes
                    for (i = 0; i < 4; i = i+1)
                    begin
                        r = $fgetc(ifp);
                        
                        if ((r >= "0") && (r <= "9"))
                            hex = (r - 'h30);
                        else if ((r >= "A") && (r <= "F"))
                            hex = 10 + (r - 'h41);
                        else if ((r >= "a") && (r <= "f"))
                            hex = 10 + (r - 'h61);
                        else
                        begin
                            error_status = `TRUE;
                            $display("ERROR: %0s, line %0d, Invalid INTEL HEX record.", in_file, line_no);
                            done = `TRUE;
                            disable READER;
                        end
                        
                        aaaa = (aaaa * 16) + hex;
                        
                        if (i < 2)
                            aal = (aal * 16) + hex;
                        else
                            aah = (aah * 16) + hex;
                    end
                    
                    // get record type bytes   
                    for (i = 0; i < 2; i = i+1)
                    begin
                        r = $fgetc(ifp);
                        
                        if ((r >= "0") && (r <= "9"))
                            tt = (tt * 16) + (r - 'h30);
                        else if ((r >= "A") && (r <= "F"))
                            tt = (tt * 16) + 10 + (r - 'h41);
                        else if ((r >= "a") && (r <= "f"))
                            tt = (tt * 16) + 10 + (r - 'h61);
                        else
                        begin
                            error_status = `TRUE;
                            $display("ERROR: %0s, line %0d, Invalid INTEL HEX record.", in_file, line_no);
                            done = `TRUE;
                            disable READER;
                        end
                    end
        
                    if((tt == 2) && (nn != 2) )
                    begin
                        error_status = `TRUE;
                        $display("ERROR: %0s, line %0d, Invalid data record.", in_file, line_no);
                    end
                    else
                    begin
        
                        // get the sum of all the bytes for record length, address and record types
                        sum = nn + aah + aal + tt ; 
                   
                        // check the record type
                        case(tt)
                            // normal_record
                            8'h00 :
                            begin
                                first_rec = `TRUE;
                                i = 0;
                                k = width / `AWORD;
                                if ((width % `AWORD) != 0)
                                    k = k + 1; 
        
                                if ((first_normal_record == `FALSE) &&(aaaa != k))
                                    is_word_address_format = `TRUE;
                                
                                first_normal_record = `FALSE;

                                if ((aaaa == k) && (is_word_address_format == `FALSE))
                                    divide_factor = k;

                                // k = no. of bytes per entry.
                                while (i < nn)
                                begin
                                    $fdisplay(ofp,"@%0h", (aaaa + off_addr)/divide_factor);

                                    for (j = 1; j <= k; j = j +1)
                                    begin
                                        if ((k - j +1) > nn)
                                        begin
                                            for(m = 1; m <= 2; m= m+1)
                                            begin
                                                if((((k-j)*8) + ((3-m)*4) - width) < 4)
                                                    $fwrite(ofp, "0");
                                            end
                                        end
                                        else
                                        begin
                                            // get the data bytes
                                            for(m = 1; m <= 2; m= m+1)
                                            begin                    
                                                r = $fgetc(ifp);
                            
                                                if ((r >= "0") && (r <= "9"))
                                                    hex = (r - 'h30);
                                                else if ((r >= "A") && (r <= "F"))
                                                    hex = 10 + (r - 'h41);
                                                else if ((r >= "a") && (r <= "f"))
                                                    hex = 10 + (r - 'h61);
                                                else
                                                begin
                                                    error_status = `TRUE;
                                                    $display("ERROR: %0s, line %0d, Invalid INTEL HEX record.", in_file, line_no);
                                                    done = `TRUE;
                                                    disable READER;
                                                end
            
                                                if((((k-j)*8) + ((3-m)*4) - width) < 4)
                                                    $fwrite(ofp, "%h", hex);
                                                dd = (dd * 16) + hex;
            
                                                if(m % 2 == 0)
                                                begin
                                                    sum = sum + dd;
                                                    dd = 0;
                                                end
                                            end
                                        end
                                    end
                                    $fwrite(ofp, "\n");
        
                                    i = i + k;
                                    aaaa = aaaa + 1;
                                end // end of while (i < nn)
                            end
                            // last record
                            8'h01: 
                            begin
                                last_rec = `TRUE;
                                done = `TRUE;
                            end
                            // address base record
                            8'h02:
                            begin
                                off_addr= 0;

                                // get the extended segment address record
                                for(i = 1; i <= (nn*2); i= i+1)
                                begin                    
                                    r = $fgetc(ifp);
                
                                    if ((r >= "0") && (r <= "9"))
                                        hex = (r - 'h30);
                                    else if ((r >= "A") && (r <= "F"))
                                        hex = 10 + (r - 'h41);
                                    else if ((r >= "a") && (r <= "f"))
                                        hex = 10 + (r - 'h61);
                                    else
                                    begin
                                        error_status = `TRUE;
                                        $display("ERROR: %0s, line %0d, Invalid INTEL HEX record.", in_file, line_no);
                                        done = `TRUE;
                                        disable READER;
                                    end
        
                                    off_addr = (off_addr * `H10) + hex;        
                                    dd = (dd * 16) + hex;
        
                                    if(i % 2 == 0)
                                    begin
                                        sum = sum + dd;
                                        dd = 0;
                                    end
                                end
            
                                off_addr = off_addr * `H10;
                            end
                            // address base record
                            8'h03:
                                // get the start segment address record
                                for(i = 1; i <= (nn*2); i= i+1)
                                begin                    
                                    r = $fgetc(ifp);

                                    if ((r >= "0") && (r <= "9"))
                                        hex = (r - 'h30);
                                    else if ((r >= "A") && (r <= "F"))
                                        hex = 10 + (r - 'h41);
                                    else if ((r >= "a") && (r <= "f"))
                                        hex = 10 + (r - 'h61);
                                    else
                                    begin
                                        error_status = `TRUE;
                                        $display("ERROR: %0s, line %0d, Invalid INTEL HEX record.", in_file, line_no);
                                        done = `TRUE;
                                        disable READER;
                                    end
                                    dd = (dd * 16) + hex;
        
                                    if(i % 2 == 0)
                                    begin
                                        sum = sum + dd;
                                        dd = 0;
                                    end
                                end
                            // address base record
                            8'h04:
                            begin
                                off_addr= 0;

                                // get the extended linear address record
                                for(i = 1; i <= (nn*2); i= i+1)
                                begin                    
                                    r = $fgetc(ifp);

                                    if ((r >= "0") && (r <= "9"))
                                        hex = (r - 'h30);
                                    else if ((r >= "A") && (r <= "F"))
                                        hex = 10 + (r - 'h41);
                                    else if ((r >= "a") && (r <= "f"))
                                        hex = 10 + (r - 'h61);
                                    else
                                    begin
                                        error_status = `TRUE;
                                        $display("ERROR: %0s, line %0d, Invalid INTEL HEX record.", in_file, line_no);
                                        done = `TRUE;
                                        disable READER;
                                    end
        
                                    off_addr = (off_addr * `H10) + hex;        
                                    dd = (dd * 16) + hex;
        
                                    if(i % 2 == 0)
                                    begin
                                        sum = sum + dd;
                                        dd = 0;
                                    end
                                end
            
                                off_addr = off_addr * `H10000;
                            end
                            // address base record
                            8'h05:
                                // get the start linear address record
                                for(i = 1; i <= (nn*2); i= i+1)
                                begin                    
                                    r = $fgetc(ifp);

                                    if ((r >= "0") && (r <= "9"))
                                        hex = (r - 'h30);
                                    else if ((r >= "A") && (r <= "F"))
                                        hex = 10 + (r - 'h41);
                                    else if ((r >= "a") && (r <= "f"))
                                        hex = 10 + (r - 'h61);
                                    else
                                    begin
                                        error_status = `TRUE;
                                        $display("ERROR: %0s, line %0d, Invalid INTEL HEX record.", in_file, line_no);
                                        done = `TRUE;
                                        disable READER;
                                    end
                                    dd = (dd * 16) + hex;
        
                                    if(i % 2 == 0)
                                    begin
                                        sum = sum + dd;
                                        dd = 0;
                                    end
                                end
                            default:
                            begin
                                error_status = `TRUE;
                                $display("ERROR: %0s, line %0d, Unknown record type.", in_file, line_no);
                            end
                        endcase
                        
                        // get the checksum bytes
                        for (i = 0; i < 2; i = i+1)
                        begin
                            r = $fgetc(ifp);
                            
                            if ((r >= "0") && (r <= "9"))
                                cc = (cc * 16) + (r - 'h30);
                            else if ((r >= "A") && (r <= "F"))
                                cc = 10 + (cc * 16) + (r - 'h41);
                            else if ((r >= "a") && (r <= "f"))
                                cc = 10 + (cc * 16) + (r - 'h61);
                            else
                            begin
                                error_status = `TRUE;
                                $display("ERROR: %0s, line %0d, Invalid INTEL HEX record.", in_file, line_no);
                                done = `TRUE;
                                disable READER;
                            end
                        end
                        
                        // Perform check sum.
                        if(((~sum+1)& `MASK15) != cc)
                        begin
                            error_status = `TRUE;
                            $display("ERROR: %0s, line %0d, Invalid checksum.", in_file, line_no);
                        end
                    end
                end
                else if ((r == `NEWLINE) || (r == `CARRIAGE_RETURN))
                begin
                    line_no = line_no +1;
                end
                else if (r == `SPACE)
                begin
                    // continue to next character;
                end
                else
                begin
                    error_status = `TRUE;
                    $display("ERROR:%0s, line %0d, Invalid INTEL HEX record.", in_file, line_no);
                    done = `TRUE;
                end
            end
            $fclose(ifp);
            $fclose(ofp);
        end
end
endtask // convert_hex2ver

task convert_to_ver_file;
    input[`MAX_NAME_SZ*8 : 1] in_file;
    input width;
    output [`MAX_NAME_SZ*8 : 1] out_file;
    reg [`MAX_NAME_SZ*8 : 1] in_file;
    reg [`MAX_NAME_SZ*8 : 1] out_file;
    integer width;
begin    
           
        if((in_file[4*8 : 1] == ".hex") || (in_file[4*8 : 1] == ".HEX") ||
            (in_file[4*8 : 1] == ".dat") || (in_file[4*8 : 1] == ".DAT"))
            convert_hex2ver(in_file, width, out_file);
        else if((in_file[4*8 : 1] == ".mif") || (in_file[4*8 : 1] == ".MIF"))
            convert_mif2ver(in_file, width, out_file);
        else
            $display("ERROR: Invalid input file name %0s. Expecting file with .hex extension (with Intel-hex data format) or .mif extension (with Altera-mif data format).", in_file);
end
endtask // convert_to_ver_file

endmodule // ALTERA_MF_MEMORY_INITIALIZATION

//START_MODULE_NAME------------------------------------------------------------
//
// Module Name     :  ALTERA_MF_HINT_EVALUATION
//
// Description     :  Common function to grep the value of altera specific parameters
//                    within the lpm_hint parameter.
//
// Limitation      :  No error checking to check whether the content of the lpm_hint
//                    is valid or not.
//
// Results expected:  If the target parameter found, return the value of the parameter.
//                    Otherwise, return empty string.
//
//END_MODULE_NAME--------------------------------------------------------------

// BEGINNING OF MODULE
`timescale 1 ps / 1 ps

// MODULE DECLARATION
module ALTERA_MF_HINT_EVALUATION;

// FUNCTON DECLARATION

// This function will search through the string (given string) to look for a match for the
// a given parameter(compare_param_name). It will return the value for the given parameter.
function [8*200:1] GET_PARAMETER_VALUE;
    input [8*200:1] given_string;  // string to be searched
    input [8*50:1] compare_param_name; // parameter name to be looking for in the given_string.
    integer param_value_char_count; // to indicate current character count in the param_value
    integer param_name_char_count;  // to indicate current character count in the param_name
    integer white_space_count;

    reg extract_param_value; // if 1 mean extracting parameters value from given string
    reg extract_param_name;  // if 1 mean extracting parameters name from given string
    reg param_found; // to indicate whether compare_param_name have been found in the given_string
    reg include_white_space; // if 1, include white space in the parameter value

    reg [8*200:1] reg_string; // to store the value of the given string
    reg [8*50:1] param_name;  // to store parameter name
    reg [8*20:1] param_value; // to store parameter value
    reg [8:1] tmp; // to get the value of the current byte
begin
    reg_string = given_string;
    param_value_char_count = 0;
    param_name_char_count =0;
    extract_param_value = 1;
    extract_param_name = 0;
    param_found = 0;
    include_white_space = 0;
    white_space_count = 0;

    tmp = reg_string[8:1];

    // checking every bytes of the reg_string from right to left.
    while ((tmp != 0 ) && (param_found != 1))
    begin
        tmp = reg_string[8:1];

        //if tmp != ' ' or should include white space (trailing white space are ignored)
        if((tmp != 32) || (include_white_space == 1))
        begin
            if(tmp == 32)
            begin
                white_space_count = 1;
            end
            else if(tmp == 61)  // if tmp = '='
            begin
                extract_param_value = 0;
                extract_param_name =  1;  // subsequent bytes should be part of param_name
                include_white_space = 0;  // ignore the white space (if any) between param_name and '='
                white_space_count = 0;
                param_value = param_value >> (8 * (20 - param_value_char_count));
                param_value_char_count = 0;
            end
            else if (tmp == 44) // if tmp = ','
            begin
                extract_param_value = 1; // subsequent bytes should be part of param_value
                extract_param_name =  0;
                param_name = param_name >> (8 * (50 - param_name_char_count));
                param_name_char_count = 0;
                if(param_name == compare_param_name)
                    param_found = 1;  // the compare_param_name have been found in the reg_string
            end
            else
            begin
                if(extract_param_value == 1)
                begin
                    param_value_char_count = param_value_char_count + white_space_count + 1;
                    include_white_space = 1;
                    if(white_space_count > 0)
                    begin
                        param_value = {8'b100000, param_value[20*8:9]};
                        white_space_count = 0;
                    end
                    param_value = {tmp, param_value[20*8:9]};
                end
                else if(extract_param_name == 1)
                begin
                    param_name = {tmp, param_name[50*8:9]};
                    param_name_char_count = param_name_char_count + 1;
                end
            end
        end
        reg_string = reg_string >> 8;  // shift 1 byte to the right
    end

    // for the case whether param_name is the left most part of the reg_string
    if(extract_param_name == 1)
    begin
        param_name = param_name >> (8 * (50 - param_name_char_count));

        if(param_name == compare_param_name)
            param_found = 1;
    end

    if (param_found == 1)
        GET_PARAMETER_VALUE = param_value;   // return the value of the parameter been looking for
    else
        GET_PARAMETER_VALUE = "";  // return empty string if parameter not found

end
endfunction

endmodule // ALTERA_MF_HINT_EVALUATION

//START_MODULE_NAME------------------------------------------------------------
//
// Module Name     :  ALTERA_DEVICE_FAMILIES
//
// Description     :  Common Altera device families comparison
//
// Limitation      :
//
// Results expected:
//
//END_MODULE_NAME--------------------------------------------------------------

// BEGINNING OF MODULE
`timescale 1 ps / 1 ps

// MODULE DECLARATION
module ALTERA_DEVICE_FAMILIES;

function IS_FAMILY_ARRIA10;
    input[8*20:1] device;
    reg is_arria10;
begin
    if ((device == "Arria 10") || (device == "ARRIA 10") || (device == "arria 10") || (device == "Arria10") || (device == "ARRIA10") || (device == "arria10") || (device == "Arria VI") || (device == "ARRIA VI") || (device == "arria vi") || (device == "ArriaVI") || (device == "ARRIAVI") || (device == "arriavi") || (device == "Night Fury") || (device == "NIGHT FURY") || (device == "night fury") || (device == "nightfury") || (device == "NIGHTFURY") || (device == "Arria 10 (GX/SX/GT)") || (device == "ARRIA 10 (GX/SX/GT)") || (device == "arria 10 (gx/sx/gt)") || (device == "Arria10(GX/SX/GT)") || (device == "ARRIA10(GX/SX/GT)") || (device == "arria10(gx/sx/gt)") || (device == "Arria 10 (GX)") || (device == "ARRIA 10 (GX)") || (device == "arria 10 (gx)") || (device == "Arria10(GX)") || (device == "ARRIA10(GX)") || (device == "arria10(gx)") || (device == "Arria 10 (SX)") || (device == "ARRIA 10 (SX)") || (device == "arria 10 (sx)") || (device == "Arria10(SX)") || (device == "ARRIA10(SX)") || (device == "arria10(sx)") || (device == "Arria 10 (GT)") || (device == "ARRIA 10 (GT)") || (device == "arria 10 (gt)") || (device == "Arria10(GT)") || (device == "ARRIA10(GT)") || (device == "arria10(gt)"))
        is_arria10 = 1;
    else
        is_arria10 = 0;

    IS_FAMILY_ARRIA10  = is_arria10;
end
endfunction //IS_FAMILY_ARRIA10

function IS_FAMILY_ARRIAGX;
    input[8*20:1] device;
    reg is_arriagx;
begin
    if ((device == "Arria GX") || (device == "ARRIA GX") || (device == "arria gx") || (device == "ArriaGX") || (device == "ARRIAGX") || (device == "arriagx") || (device == "Stratix II GX Lite") || (device == "STRATIX II GX LITE") || (device == "stratix ii gx lite") || (device == "StratixIIGXLite") || (device == "STRATIXIIGXLITE") || (device == "stratixiigxlite"))
        is_arriagx = 1;
    else
        is_arriagx = 0;

    IS_FAMILY_ARRIAGX  = is_arriagx;
end
endfunction //IS_FAMILY_ARRIAGX

function IS_FAMILY_ARRIAIIGX;
    input[8*20:1] device;
    reg is_arriaiigx;
begin
    if ((device == "Arria II GX") || (device == "ARRIA II GX") || (device == "arria ii gx") || (device == "ArriaIIGX") || (device == "ARRIAIIGX") || (device == "arriaiigx") || (device == "Arria IIGX") || (device == "ARRIA IIGX") || (device == "arria iigx") || (device == "ArriaII GX") || (device == "ARRIAII GX") || (device == "arriaii gx") || (device == "Arria II") || (device == "ARRIA II") || (device == "arria ii") || (device == "ArriaII") || (device == "ARRIAII") || (device == "arriaii") || (device == "Arria II (GX/E)") || (device == "ARRIA II (GX/E)") || (device == "arria ii (gx/e)") || (device == "ArriaII(GX/E)") || (device == "ARRIAII(GX/E)") || (device == "arriaii(gx/e)") || (device == "PIRANHA") || (device == "piranha"))
        is_arriaiigx = 1;
    else
        is_arriaiigx = 0;

    IS_FAMILY_ARRIAIIGX  = is_arriaiigx;
end
endfunction //IS_FAMILY_ARRIAIIGX

function IS_FAMILY_ARRIAIIGZ;
    input[8*20:1] device;
    reg is_arriaiigz;
begin
    if ((device == "Arria II GZ") || (device == "ARRIA II GZ") || (device == "arria ii gz") || (device == "ArriaII GZ") || (device == "ARRIAII GZ") || (device == "arriaii gz") || (device == "Arria IIGZ") || (device == "ARRIA IIGZ") || (device == "arria iigz") || (device == "ArriaIIGZ") || (device == "ARRIAIIGZ") || (device == "arriaiigz"))
        is_arriaiigz = 1;
    else
        is_arriaiigz = 0;

    IS_FAMILY_ARRIAIIGZ  = is_arriaiigz;
end
endfunction //IS_FAMILY_ARRIAIIGZ

function IS_FAMILY_ARRIAVGZ;
    input[8*20:1] device;
    reg is_arriavgz;
begin
    if ((device == "Arria V GZ") || (device == "ARRIA V GZ") || (device == "arria v gz") || (device == "ArriaVGZ") || (device == "ARRIAVGZ") || (device == "arriavgz"))
        is_arriavgz = 1;
    else
        is_arriavgz = 0;

    IS_FAMILY_ARRIAVGZ  = is_arriavgz;
end
endfunction //IS_FAMILY_ARRIAVGZ

function IS_FAMILY_ARRIAV;
    input[8*20:1] device;
    reg is_arriav;
begin
    if ((device == "Arria V") || (device == "ARRIA V") || (device == "arria v") || (device == "Arria V (GT/GX)") || (device == "ARRIA V (GT/GX)") || (device == "arria v (gt/gx)") || (device == "ArriaV(GT/GX)") || (device == "ARRIAV(GT/GX)") || (device == "arriav(gt/gx)") || (device == "ArriaV") || (device == "ARRIAV") || (device == "arriav") || (device == "Arria V (GT/GX/ST/SX)") || (device == "ARRIA V (GT/GX/ST/SX)") || (device == "arria v (gt/gx/st/sx)") || (device == "ArriaV(GT/GX/ST/SX)") || (device == "ARRIAV(GT/GX/ST/SX)") || (device == "arriav(gt/gx/st/sx)") || (device == "Arria V (GT)") || (device == "ARRIA V (GT)") || (device == "arria v (gt)") || (device == "ArriaV(GT)") || (device == "ARRIAV(GT)") || (device == "arriav(gt)") || (device == "Arria V (GX)") || (device == "ARRIA V (GX)") || (device == "arria v (gx)") || (device == "ArriaV(GX)") || (device == "ARRIAV(GX)") || (device == "arriav(gx)") || (device == "Arria V (ST)") || (device == "ARRIA V (ST)") || (device == "arria v (st)") || (device == "ArriaV(ST)") || (device == "ARRIAV(ST)") || (device == "arriav(st)") || (device == "Arria V (SX)") || (device == "ARRIA V (SX)") || (device == "arria v (sx)") || (device == "ArriaV(SX)") || (device == "ARRIAV(SX)") || (device == "arriav(sx)"))
        is_arriav = 1;
    else
        is_arriav = 0;

    IS_FAMILY_ARRIAV  = is_arriav;
end
endfunction //IS_FAMILY_ARRIAV

function IS_FAMILY_CYCLONEII;
    input[8*20:1] device;
    reg is_cycloneii;
begin
    if ((device == "Cyclone II") || (device == "CYCLONE II") || (device == "cyclone ii") || (device == "Cycloneii") || (device == "CYCLONEII") || (device == "cycloneii") || (device == "Magellan") || (device == "MAGELLAN") || (device == "magellan") || (device == "CycloneII") || (device == "CYCLONEII") || (device == "cycloneii"))
        is_cycloneii = 1;
    else
        is_cycloneii = 0;

    IS_FAMILY_CYCLONEII  = is_cycloneii;
end
endfunction //IS_FAMILY_CYCLONEII

function IS_FAMILY_CYCLONEIIILS;
    input[8*20:1] device;
    reg is_cycloneiiils;
begin
    if ((device == "Cyclone III LS") || (device == "CYCLONE III LS") || (device == "cyclone iii ls") || (device == "CycloneIIILS") || (device == "CYCLONEIIILS") || (device == "cycloneiiils") || (device == "Cyclone III LPS") || (device == "CYCLONE III LPS") || (device == "cyclone iii lps") || (device == "Cyclone LPS") || (device == "CYCLONE LPS") || (device == "cyclone lps") || (device == "CycloneLPS") || (device == "CYCLONELPS") || (device == "cyclonelps") || (device == "Tarpon") || (device == "TARPON") || (device == "tarpon") || (device == "Cyclone IIIE") || (device == "CYCLONE IIIE") || (device == "cyclone iiie"))
        is_cycloneiiils = 1;
    else
        is_cycloneiiils = 0;

    IS_FAMILY_CYCLONEIIILS  = is_cycloneiiils;
end
endfunction //IS_FAMILY_CYCLONEIIILS

function IS_FAMILY_CYCLONEIII;
    input[8*20:1] device;
    reg is_cycloneiii;
begin
    if ((device == "Cyclone III") || (device == "CYCLONE III") || (device == "cyclone iii") || (device == "CycloneIII") || (device == "CYCLONEIII") || (device == "cycloneiii") || (device == "Barracuda") || (device == "BARRACUDA") || (device == "barracuda") || (device == "Cuda") || (device == "CUDA") || (device == "cuda") || (device == "CIII") || (device == "ciii"))
        is_cycloneiii = 1;
    else
        is_cycloneiii = 0;

    IS_FAMILY_CYCLONEIII  = is_cycloneiii;
end
endfunction //IS_FAMILY_CYCLONEIII

function IS_FAMILY_CYCLONEIVE;
    input[8*20:1] device;
    reg is_cycloneive;
begin
    if ((device == "Cyclone IV E") || (device == "CYCLONE IV E") || (device == "cyclone iv e") || (device == "CycloneIV E") || (device == "CYCLONEIV E") || (device == "cycloneiv e") || (device == "Cyclone IVE") || (device == "CYCLONE IVE") || (device == "cyclone ive") || (device == "CycloneIVE") || (device == "CYCLONEIVE") || (device == "cycloneive"))
        is_cycloneive = 1;
    else
        is_cycloneive = 0;

    IS_FAMILY_CYCLONEIVE  = is_cycloneive;
end
endfunction //IS_FAMILY_CYCLONEIVE

function IS_FAMILY_CYCLONEIVGX;
    input[8*20:1] device;
    reg is_cycloneivgx;
begin
    if ((device == "Cyclone IV GX") || (device == "CYCLONE IV GX") || (device == "cyclone iv gx") || (device == "Cyclone IVGX") || (device == "CYCLONE IVGX") || (device == "cyclone ivgx") || (device == "CycloneIV GX") || (device == "CYCLONEIV GX") || (device == "cycloneiv gx") || (device == "CycloneIVGX") || (device == "CYCLONEIVGX") || (device == "cycloneivgx") || (device == "Cyclone IV") || (device == "CYCLONE IV") || (device == "cyclone iv") || (device == "CycloneIV") || (device == "CYCLONEIV") || (device == "cycloneiv") || (device == "Cyclone IV (GX)") || (device == "CYCLONE IV (GX)") || (device == "cyclone iv (gx)") || (device == "CycloneIV(GX)") || (device == "CYCLONEIV(GX)") || (device == "cycloneiv(gx)") || (device == "Cyclone III GX") || (device == "CYCLONE III GX") || (device == "cyclone iii gx") || (device == "CycloneIII GX") || (device == "CYCLONEIII GX") || (device == "cycloneiii gx") || (device == "Cyclone IIIGX") || (device == "CYCLONE IIIGX") || (device == "cyclone iiigx") || (device == "CycloneIIIGX") || (device == "CYCLONEIIIGX") || (device == "cycloneiiigx") || (device == "Cyclone III GL") || (device == "CYCLONE III GL") || (device == "cyclone iii gl") || (device == "CycloneIII GL") || (device == "CYCLONEIII GL") || (device == "cycloneiii gl") || (device == "Cyclone IIIGL") || (device == "CYCLONE IIIGL") || (device == "cyclone iiigl") || (device == "CycloneIIIGL") || (device == "CYCLONEIIIGL") || (device == "cycloneiiigl") || (device == "Stingray") || (device == "STINGRAY") || (device == "stingray"))
        is_cycloneivgx = 1;
    else
        is_cycloneivgx = 0;

    IS_FAMILY_CYCLONEIVGX  = is_cycloneivgx;
end
endfunction //IS_FAMILY_CYCLONEIVGX

function IS_FAMILY_CYCLONEV;
    input[8*20:1] device;
    reg is_cyclonev;
begin
    if ((device == "Cyclone V") || (device == "CYCLONE V") || (device == "cyclone v") || (device == "CycloneV") || (device == "CYCLONEV") || (device == "cyclonev") || (device == "Cyclone V (GT/GX/E/SX)") || (device == "CYCLONE V (GT/GX/E/SX)") || (device == "cyclone v (gt/gx/e/sx)") || (device == "CycloneV(GT/GX/E/SX)") || (device == "CYCLONEV(GT/GX/E/SX)") || (device == "cyclonev(gt/gx/e/sx)") || (device == "Cyclone V (E/GX/GT/SX/SE/ST)") || (device == "CYCLONE V (E/GX/GT/SX/SE/ST)") || (device == "cyclone v (e/gx/gt/sx/se/st)") || (device == "CycloneV(E/GX/GT/SX/SE/ST)") || (device == "CYCLONEV(E/GX/GT/SX/SE/ST)") || (device == "cyclonev(e/gx/gt/sx/se/st)") || (device == "Cyclone V (E)") || (device == "CYCLONE V (E)") || (device == "cyclone v (e)") || (device == "CycloneV(E)") || (device == "CYCLONEV(E)") || (device == "cyclonev(e)") || (device == "Cyclone V (GX)") || (device == "CYCLONE V (GX)") || (device == "cyclone v (gx)") || (device == "CycloneV(GX)") || (device == "CYCLONEV(GX)") || (device == "cyclonev(gx)") || (device == "Cyclone V (GT)") || (device == "CYCLONE V (GT)") || (device == "cyclone v (gt)") || (device == "CycloneV(GT)") || (device == "CYCLONEV(GT)") || (device == "cyclonev(gt)") || (device == "Cyclone V (SX)") || (device == "CYCLONE V (SX)") || (device == "cyclone v (sx)") || (device == "CycloneV(SX)") || (device == "CYCLONEV(SX)") || (device == "cyclonev(sx)") || (device == "Cyclone V (SE)") || (device == "CYCLONE V (SE)") || (device == "cyclone v (se)") || (device == "CycloneV(SE)") || (device == "CYCLONEV(SE)") || (device == "cyclonev(se)") || (device == "Cyclone V (ST)") || (device == "CYCLONE V (ST)") || (device == "cyclone v (st)") || (device == "CycloneV(ST)") || (device == "CYCLONEV(ST)") || (device == "cyclonev(st)"))
        is_cyclonev = 1;
    else
        is_cyclonev = 0;

    IS_FAMILY_CYCLONEV  = is_cyclonev;
end
endfunction //IS_FAMILY_CYCLONEV

function IS_FAMILY_CYCLONE;
    input[8*20:1] device;
    reg is_cyclone;
begin
    if ((device == "Cyclone") || (device == "CYCLONE") || (device == "cyclone") || (device == "ACEX2K") || (device == "acex2k") || (device == "ACEX 2K") || (device == "acex 2k") || (device == "Tornado") || (device == "TORNADO") || (device == "tornado"))
        is_cyclone = 1;
    else
        is_cyclone = 0;

    IS_FAMILY_CYCLONE  = is_cyclone;
end
endfunction //IS_FAMILY_CYCLONE

function IS_FAMILY_HARDCOPYII;
    input[8*20:1] device;
    reg is_hardcopyii;
begin
    if ((device == "HardCopy II") || (device == "HARDCOPY II") || (device == "hardcopy ii") || (device == "HardCopyII") || (device == "HARDCOPYII") || (device == "hardcopyii") || (device == "Fusion") || (device == "FUSION") || (device == "fusion"))
        is_hardcopyii = 1;
    else
        is_hardcopyii = 0;

    IS_FAMILY_HARDCOPYII  = is_hardcopyii;
end
endfunction //IS_FAMILY_HARDCOPYII

function IS_FAMILY_HARDCOPYIII;
    input[8*20:1] device;
    reg is_hardcopyiii;
begin
    if ((device == "HardCopy III") || (device == "HARDCOPY III") || (device == "hardcopy iii") || (device == "HardCopyIII") || (device == "HARDCOPYIII") || (device == "hardcopyiii") || (device == "HCX") || (device == "hcx"))
        is_hardcopyiii = 1;
    else
        is_hardcopyiii = 0;

    IS_FAMILY_HARDCOPYIII  = is_hardcopyiii;
end
endfunction //IS_FAMILY_HARDCOPYIII

function IS_FAMILY_HARDCOPYIV;
    input[8*20:1] device;
    reg is_hardcopyiv;
begin
    if ((device == "HardCopy IV") || (device == "HARDCOPY IV") || (device == "hardcopy iv") || (device == "HardCopyIV") || (device == "HARDCOPYIV") || (device == "hardcopyiv") || (device == "HardCopy IV (GX)") || (device == "HARDCOPY IV (GX)") || (device == "hardcopy iv (gx)") || (device == "HardCopy IV (E)") || (device == "HARDCOPY IV (E)") || (device == "hardcopy iv (e)") || (device == "HardCopyIV(GX)") || (device == "HARDCOPYIV(GX)") || (device == "hardcopyiv(gx)") || (device == "HardCopyIV(E)") || (device == "HARDCOPYIV(E)") || (device == "hardcopyiv(e)") || (device == "HCXIV") || (device == "hcxiv") || (device == "HardCopy IV (GX/E)") || (device == "HARDCOPY IV (GX/E)") || (device == "hardcopy iv (gx/e)") || (device == "HardCopy IV (E/GX)") || (device == "HARDCOPY IV (E/GX)") || (device == "hardcopy iv (e/gx)") || (device == "HardCopyIV(GX/E)") || (device == "HARDCOPYIV(GX/E)") || (device == "hardcopyiv(gx/e)") || (device == "HardCopyIV(E/GX)") || (device == "HARDCOPYIV(E/GX)") || (device == "hardcopyiv(e/gx)"))
        is_hardcopyiv = 1;
    else
        is_hardcopyiv = 0;

    IS_FAMILY_HARDCOPYIV  = is_hardcopyiv;
end
endfunction //IS_FAMILY_HARDCOPYIV

function IS_FAMILY_MAX10FPGA;
    input[8*20:1] device;
    reg is_max10fpga;
begin
    if ((device == "MAX 10 FPGA") || (device == "max 10 fpga") || (device == "Zippleback") || (device == "ZIPPLEBACK") || (device == "zippleback") || (device == "MAX10FPGA") || (device == "max10fpga") || (device == "MAX 10 FPGA (DA/DF/DC/SF/SC)") || (device == "max 10 fpga (da/df/dc/sf/sc)") || (device == "MAX10FPGA(DA/DF/DC/SF/SC)") || (device == "max10fpga(da/df/dc/sf/sc)") || (device == "MAX 10 FPGA (DA)") || (device == "max 10 fpga (da)") || (device == "MAX10FPGA(DA)") || (device == "max10fpga(da)") || (device == "MAX 10 FPGA (DF)") || (device == "max 10 fpga (df)") || (device == "MAX10FPGA(DF)") || (device == "max10fpga(df)") || (device == "MAX 10 FPGA (DC)") || (device == "max 10 fpga (dc)") || (device == "MAX10FPGA(DC)") || (device == "max10fpga(dc)") || (device == "MAX 10 FPGA (SF)") || (device == "max 10 fpga (sf)") || (device == "MAX10FPGA(SF)") || (device == "max10fpga(sf)") || (device == "MAX 10 FPGA (SC)") || (device == "max 10 fpga (sc)") || (device == "MAX10FPGA(SC)") || (device == "max10fpga(sc)"))
        is_max10fpga = 1;
    else
        is_max10fpga = 0;

    IS_FAMILY_MAX10FPGA  = is_max10fpga;
end
endfunction //IS_FAMILY_MAX10FPGA

function IS_FAMILY_MAXII;
    input[8*20:1] device;
    reg is_maxii;
begin
    if ((device == "MAX II") || (device == "max ii") || (device == "MAXII") || (device == "maxii") || (device == "Tsunami") || (device == "TSUNAMI") || (device == "tsunami"))
        is_maxii = 1;
    else
        is_maxii = 0;

    IS_FAMILY_MAXII  = is_maxii;
end
endfunction //IS_FAMILY_MAXII

function IS_FAMILY_MAXV;
    input[8*20:1] device;
    reg is_maxv;
begin
    if ((device == "MAX V") || (device == "max v") || (device == "MAXV") || (device == "maxv") || (device == "Jade") || (device == "JADE") || (device == "jade"))
        is_maxv = 1;
    else
        is_maxv = 0;

    IS_FAMILY_MAXV  = is_maxv;
end
endfunction //IS_FAMILY_MAXV

function IS_FAMILY_STRATIXGX;
    input[8*20:1] device;
    reg is_stratixgx;
begin
    if ((device == "Stratix GX") || (device == "STRATIX GX") || (device == "stratix gx") || (device == "Stratix-GX") || (device == "STRATIX-GX") || (device == "stratix-gx") || (device == "StratixGX") || (device == "STRATIXGX") || (device == "stratixgx") || (device == "Aurora") || (device == "AURORA") || (device == "aurora"))
        is_stratixgx = 1;
    else
        is_stratixgx = 0;

    IS_FAMILY_STRATIXGX  = is_stratixgx;
end
endfunction //IS_FAMILY_STRATIXGX

function IS_FAMILY_STRATIXIIGX;
    input[8*20:1] device;
    reg is_stratixiigx;
begin
    if ((device == "Stratix II GX") || (device == "STRATIX II GX") || (device == "stratix ii gx") || (device == "StratixIIGX") || (device == "STRATIXIIGX") || (device == "stratixiigx"))
        is_stratixiigx = 1;
    else
        is_stratixiigx = 0;

    IS_FAMILY_STRATIXIIGX  = is_stratixiigx;
end
endfunction //IS_FAMILY_STRATIXIIGX

function IS_FAMILY_STRATIXII;
    input[8*20:1] device;
    reg is_stratixii;
begin
    if ((device == "Stratix II") || (device == "STRATIX II") || (device == "stratix ii") || (device == "StratixII") || (device == "STRATIXII") || (device == "stratixii") || (device == "Armstrong") || (device == "ARMSTRONG") || (device == "armstrong"))
        is_stratixii = 1;
    else
        is_stratixii = 0;

    IS_FAMILY_STRATIXII  = is_stratixii;
end
endfunction //IS_FAMILY_STRATIXII

function IS_FAMILY_STRATIXIII;
    input[8*20:1] device;
    reg is_stratixiii;
begin
    if ((device == "Stratix III") || (device == "STRATIX III") || (device == "stratix iii") || (device == "StratixIII") || (device == "STRATIXIII") || (device == "stratixiii") || (device == "Titan") || (device == "TITAN") || (device == "titan") || (device == "SIII") || (device == "siii"))
        is_stratixiii = 1;
    else
        is_stratixiii = 0;

    IS_FAMILY_STRATIXIII  = is_stratixiii;
end
endfunction //IS_FAMILY_STRATIXIII

function IS_FAMILY_STRATIXIV;
    input[8*20:1] device;
    reg is_stratixiv;
begin
    if ((device == "Stratix IV") || (device == "STRATIX IV") || (device == "stratix iv") || (device == "TGX") || (device == "tgx") || (device == "StratixIV") || (device == "STRATIXIV") || (device == "stratixiv") || (device == "Stratix IV (GT)") || (device == "STRATIX IV (GT)") || (device == "stratix iv (gt)") || (device == "Stratix IV (GX)") || (device == "STRATIX IV (GX)") || (device == "stratix iv (gx)") || (device == "Stratix IV (E)") || (device == "STRATIX IV (E)") || (device == "stratix iv (e)") || (device == "StratixIV(GT)") || (device == "STRATIXIV(GT)") || (device == "stratixiv(gt)") || (device == "StratixIV(GX)") || (device == "STRATIXIV(GX)") || (device == "stratixiv(gx)") || (device == "StratixIV(E)") || (device == "STRATIXIV(E)") || (device == "stratixiv(e)") || (device == "StratixIIIGX") || (device == "STRATIXIIIGX") || (device == "stratixiiigx") || (device == "Stratix IV (GT/GX/E)") || (device == "STRATIX IV (GT/GX/E)") || (device == "stratix iv (gt/gx/e)") || (device == "Stratix IV (GT/E/GX)") || (device == "STRATIX IV (GT/E/GX)") || (device == "stratix iv (gt/e/gx)") || (device == "Stratix IV (E/GT/GX)") || (device == "STRATIX IV (E/GT/GX)") || (device == "stratix iv (e/gt/gx)") || (device == "Stratix IV (E/GX/GT)") || (device == "STRATIX IV (E/GX/GT)") || (device == "stratix iv (e/gx/gt)") || (device == "StratixIV(GT/GX/E)") || (device == "STRATIXIV(GT/GX/E)") || (device == "stratixiv(gt/gx/e)") || (device == "StratixIV(GT/E/GX)") || (device == "STRATIXIV(GT/E/GX)") || (device == "stratixiv(gt/e/gx)") || (device == "StratixIV(E/GX/GT)") || (device == "STRATIXIV(E/GX/GT)") || (device == "stratixiv(e/gx/gt)") || (device == "StratixIV(E/GT/GX)") || (device == "STRATIXIV(E/GT/GX)") || (device == "stratixiv(e/gt/gx)") || (device == "Stratix IV (GX/E)") || (device == "STRATIX IV (GX/E)") || (device == "stratix iv (gx/e)") || (device == "StratixIV(GX/E)") || (device == "STRATIXIV(GX/E)") || (device == "stratixiv(gx/e)"))
        is_stratixiv = 1;
    else
        is_stratixiv = 0;

    IS_FAMILY_STRATIXIV  = is_stratixiv;
end
endfunction //IS_FAMILY_STRATIXIV

function IS_FAMILY_STRATIXV;
    input[8*20:1] device;
    reg is_stratixv;
begin
    if ((device == "Stratix V") || (device == "STRATIX V") || (device == "stratix v") || (device == "StratixV") || (device == "STRATIXV") || (device == "stratixv") || (device == "Stratix V (GS)") || (device == "STRATIX V (GS)") || (device == "stratix v (gs)") || (device == "StratixV(GS)") || (device == "STRATIXV(GS)") || (device == "stratixv(gs)") || (device == "Stratix V (GT)") || (device == "STRATIX V (GT)") || (device == "stratix v (gt)") || (device == "StratixV(GT)") || (device == "STRATIXV(GT)") || (device == "stratixv(gt)") || (device == "Stratix V (GX)") || (device == "STRATIX V (GX)") || (device == "stratix v (gx)") || (device == "StratixV(GX)") || (device == "STRATIXV(GX)") || (device == "stratixv(gx)") || (device == "Stratix V (GS/GX)") || (device == "STRATIX V (GS/GX)") || (device == "stratix v (gs/gx)") || (device == "StratixV(GS/GX)") || (device == "STRATIXV(GS/GX)") || (device == "stratixv(gs/gx)") || (device == "Stratix V (GS/GT)") || (device == "STRATIX V (GS/GT)") || (device == "stratix v (gs/gt)") || (device == "StratixV(GS/GT)") || (device == "STRATIXV(GS/GT)") || (device == "stratixv(gs/gt)") || (device == "Stratix V (GT/GX)") || (device == "STRATIX V (GT/GX)") || (device == "stratix v (gt/gx)") || (device == "StratixV(GT/GX)") || (device == "STRATIXV(GT/GX)") || (device == "stratixv(gt/gx)") || (device == "Stratix V (GX/GS)") || (device == "STRATIX V (GX/GS)") || (device == "stratix v (gx/gs)") || (device == "StratixV(GX/GS)") || (device == "STRATIXV(GX/GS)") || (device == "stratixv(gx/gs)") || (device == "Stratix V (GT/GS)") || (device == "STRATIX V (GT/GS)") || (device == "stratix v (gt/gs)") || (device == "StratixV(GT/GS)") || (device == "STRATIXV(GT/GS)") || (device == "stratixv(gt/gs)") || (device == "Stratix V (GX/GT)") || (device == "STRATIX V (GX/GT)") || (device == "stratix v (gx/gt)") || (device == "StratixV(GX/GT)") || (device == "STRATIXV(GX/GT)") || (device == "stratixv(gx/gt)") || (device == "Stratix V (GS/GT/GX)") || (device == "STRATIX V (GS/GT/GX)") || (device == "stratix v (gs/gt/gx)") || (device == "Stratix V (GS/GX/GT)") || (device == "STRATIX V (GS/GX/GT)") || (device == "stratix v (gs/gx/gt)") || (device == "Stratix V (GT/GS/GX)") || (device == "STRATIX V (GT/GS/GX)") || (device == "stratix v (gt/gs/gx)") || (device == "Stratix V (GT/GX/GS)") || (device == "STRATIX V (GT/GX/GS)") || (device == "stratix v (gt/gx/gs)") || (device == "Stratix V (GX/GS/GT)") || (device == "STRATIX V (GX/GS/GT)") || (device == "stratix v (gx/gs/gt)") || (device == "Stratix V (GX/GT/GS)") || (device == "STRATIX V (GX/GT/GS)") || (device == "stratix v (gx/gt/gs)") || (device == "StratixV(GS/GT/GX)") || (device == "STRATIXV(GS/GT/GX)") || (device == "stratixv(gs/gt/gx)") || (device == "StratixV(GS/GX/GT)") || (device == "STRATIXV(GS/GX/GT)") || (device == "stratixv(gs/gx/gt)") || (device == "StratixV(GT/GS/GX)") || (device == "STRATIXV(GT/GS/GX)") || (device == "stratixv(gt/gs/gx)") || (device == "StratixV(GT/GX/GS)") || (device == "STRATIXV(GT/GX/GS)") || (device == "stratixv(gt/gx/gs)") || (device == "StratixV(GX/GS/GT)") || (device == "STRATIXV(GX/GS/GT)") || (device == "stratixv(gx/gs/gt)") || (device == "StratixV(GX/GT/GS)") || (device == "STRATIXV(GX/GT/GS)") || (device == "stratixv(gx/gt/gs)") || (device == "Stratix V (GS/GT/GX/E)") || (device == "STRATIX V (GS/GT/GX/E)") || (device == "stratix v (gs/gt/gx/e)") || (device == "StratixV(GS/GT/GX/E)") || (device == "STRATIXV(GS/GT/GX/E)") || (device == "stratixv(gs/gt/gx/e)") || (device == "Stratix V (E)") || (device == "STRATIX V (E)") || (device == "stratix v (e)") || (device == "StratixV(E)") || (device == "STRATIXV(E)") || (device == "stratixv(e)"))
        is_stratixv = 1;
    else
        is_stratixv = 0;

    IS_FAMILY_STRATIXV  = is_stratixv;
end
endfunction //IS_FAMILY_STRATIXV

function IS_FAMILY_STRATIX;
    input[8*20:1] device;
    reg is_stratix;
begin
    if ((device == "Stratix") || (device == "STRATIX") || (device == "stratix") || (device == "Yeager") || (device == "YEAGER") || (device == "yeager"))
        is_stratix = 1;
    else
        is_stratix = 0;

    IS_FAMILY_STRATIX  = is_stratix;
end
endfunction //IS_FAMILY_STRATIX

function FEATURE_FAMILY_STRATIXGX;
    input[8*20:1] device;
    reg var_family_stratixgx;
begin
    if (IS_FAMILY_STRATIXGX(device) )
        var_family_stratixgx = 1;
    else
        var_family_stratixgx = 0;

    FEATURE_FAMILY_STRATIXGX  = var_family_stratixgx;
end
endfunction //FEATURE_FAMILY_STRATIXGX

function FEATURE_FAMILY_CYCLONE;
    input[8*20:1] device;
    reg var_family_cyclone;
begin
    if (IS_FAMILY_CYCLONE(device) )
        var_family_cyclone = 1;
    else
        var_family_cyclone = 0;

    FEATURE_FAMILY_CYCLONE  = var_family_cyclone;
end
endfunction //FEATURE_FAMILY_CYCLONE

function FEATURE_FAMILY_STRATIXIIGX;
    input[8*20:1] device;
    reg var_family_stratixiigx;
begin
    if (IS_FAMILY_STRATIXIIGX(device) || IS_FAMILY_ARRIAGX(device) )
        var_family_stratixiigx = 1;
    else
        var_family_stratixiigx = 0;

    FEATURE_FAMILY_STRATIXIIGX  = var_family_stratixiigx;
end
endfunction //FEATURE_FAMILY_STRATIXIIGX

function FEATURE_FAMILY_STRATIXIII;
    input[8*20:1] device;
    reg var_family_stratixiii;
begin
    if (IS_FAMILY_STRATIXIII(device) || FEATURE_FAMILY_STRATIXIV(device) || FEATURE_FAMILY_HARDCOPYIII(device) )
        var_family_stratixiii = 1;
    else
        var_family_stratixiii = 0;

    FEATURE_FAMILY_STRATIXIII  = var_family_stratixiii;
end
endfunction //FEATURE_FAMILY_STRATIXIII

function FEATURE_FAMILY_ARRIAVGZ;
    input[8*20:1] device;
    reg var_family_arriavgz;
begin
    if (IS_FAMILY_ARRIAVGZ(device) )
        var_family_arriavgz = 1;
    else
        var_family_arriavgz = 0;

    FEATURE_FAMILY_ARRIAVGZ  = var_family_arriavgz;
end
endfunction //FEATURE_FAMILY_ARRIAVGZ

function FEATURE_FAMILY_STRATIXV;
    input[8*20:1] device;
    reg var_family_stratixv;
begin
    if (IS_FAMILY_STRATIXV(device) || FEATURE_FAMILY_ARRIAVGZ(device) )
        var_family_stratixv = 1;
    else
        var_family_stratixv = 0;

    FEATURE_FAMILY_STRATIXV  = var_family_stratixv;
end
endfunction //FEATURE_FAMILY_STRATIXV

function FEATURE_FAMILY_ARRIA10;
    input[8*20:1] device;
    reg var_family_arria10;
begin
    if (IS_FAMILY_ARRIA10(device) || IS_FAMILY_ARRIA10(device) )
        var_family_arria10 = 1;
    else
        var_family_arria10 = 0;

    FEATURE_FAMILY_ARRIA10  = var_family_arria10;
end
endfunction //FEATURE_FAMILY_ARRIA10

function FEATURE_FAMILY_STRATIXII;
    input[8*20:1] device;
    reg var_family_stratixii;
begin
    if (IS_FAMILY_STRATIXII(device) || IS_FAMILY_HARDCOPYII(device) || FEATURE_FAMILY_STRATIXIIGX(device) || FEATURE_FAMILY_STRATIXIII(device) )
        var_family_stratixii = 1;
    else
        var_family_stratixii = 0;

    FEATURE_FAMILY_STRATIXII  = var_family_stratixii;
end
endfunction //FEATURE_FAMILY_STRATIXII

function FEATURE_FAMILY_CYCLONEIVGX;
    input[8*20:1] device;
    reg var_family_cycloneivgx;
begin
    if (IS_FAMILY_CYCLONEIVGX(device) || IS_FAMILY_CYCLONEIVGX(device) )
        var_family_cycloneivgx = 1;
    else
        var_family_cycloneivgx = 0;

    FEATURE_FAMILY_CYCLONEIVGX  = var_family_cycloneivgx;
end
endfunction //FEATURE_FAMILY_CYCLONEIVGX

function FEATURE_FAMILY_CYCLONEIVE;
    input[8*20:1] device;
    reg var_family_cycloneive;
begin
    if (IS_FAMILY_CYCLONEIVE(device) )
        var_family_cycloneive = 1;
    else
        var_family_cycloneive = 0;

    FEATURE_FAMILY_CYCLONEIVE  = var_family_cycloneive;
end
endfunction //FEATURE_FAMILY_CYCLONEIVE

function FEATURE_FAMILY_CYCLONEIII;
    input[8*20:1] device;
    reg var_family_cycloneiii;
begin
    if (IS_FAMILY_CYCLONEIII(device) || IS_FAMILY_CYCLONEIIILS(device) || FEATURE_FAMILY_CYCLONEIVGX(device) || FEATURE_FAMILY_CYCLONEIVE(device) || FEATURE_FAMILY_MAX10FPGA(device) )
        var_family_cycloneiii = 1;
    else
        var_family_cycloneiii = 0;

    FEATURE_FAMILY_CYCLONEIII  = var_family_cycloneiii;
end
endfunction //FEATURE_FAMILY_CYCLONEIII

function FEATURE_FAMILY_STRATIX_HC;
    input[8*20:1] device;
    reg var_family_stratix_hc;
begin
    if ((device == "StratixHC") )
        var_family_stratix_hc = 1;
    else
        var_family_stratix_hc = 0;

    FEATURE_FAMILY_STRATIX_HC  = var_family_stratix_hc;
end
endfunction //FEATURE_FAMILY_STRATIX_HC

function FEATURE_FAMILY_STRATIX;
    input[8*20:1] device;
    reg var_family_stratix;
begin
    if (IS_FAMILY_STRATIX(device) || FEATURE_FAMILY_STRATIX_HC(device) || FEATURE_FAMILY_STRATIXGX(device) || FEATURE_FAMILY_CYCLONE(device) || FEATURE_FAMILY_STRATIXII(device) || FEATURE_FAMILY_MAXII(device) || FEATURE_FAMILY_CYCLONEII(device) )
        var_family_stratix = 1;
    else
        var_family_stratix = 0;

    FEATURE_FAMILY_STRATIX  = var_family_stratix;
end
endfunction //FEATURE_FAMILY_STRATIX

function FEATURE_FAMILY_MAXII;
    input[8*20:1] device;
    reg var_family_maxii;
begin
    if (IS_FAMILY_MAXII(device) || FEATURE_FAMILY_MAXV(device) )
        var_family_maxii = 1;
    else
        var_family_maxii = 0;

    FEATURE_FAMILY_MAXII  = var_family_maxii;
end
endfunction //FEATURE_FAMILY_MAXII

function FEATURE_FAMILY_MAXV;
    input[8*20:1] device;
    reg var_family_maxv;
begin
    if (IS_FAMILY_MAXV(device) )
        var_family_maxv = 1;
    else
        var_family_maxv = 0;

    FEATURE_FAMILY_MAXV  = var_family_maxv;
end
endfunction //FEATURE_FAMILY_MAXV

function FEATURE_FAMILY_CYCLONEII;
    input[8*20:1] device;
    reg var_family_cycloneii;
begin
    if (IS_FAMILY_CYCLONEII(device) || FEATURE_FAMILY_CYCLONEIII(device) )
        var_family_cycloneii = 1;
    else
        var_family_cycloneii = 0;

    FEATURE_FAMILY_CYCLONEII  = var_family_cycloneii;
end
endfunction //FEATURE_FAMILY_CYCLONEII

function FEATURE_FAMILY_STRATIXIV;
    input[8*20:1] device;
    reg var_family_stratixiv;
begin
    if (IS_FAMILY_STRATIXIV(device) || IS_FAMILY_ARRIAIIGX(device) || FEATURE_FAMILY_HARDCOPYIV(device) || FEATURE_FAMILY_STRATIXV(device) || FEATURE_FAMILY_ARRIAV(device) || FEATURE_FAMILY_ARRIAIIGZ(device) || FEATURE_FAMILY_ARRIA10(device) )
        var_family_stratixiv = 1;
    else
        var_family_stratixiv = 0;

    FEATURE_FAMILY_STRATIXIV  = var_family_stratixiv;
end
endfunction //FEATURE_FAMILY_STRATIXIV

function FEATURE_FAMILY_ARRIAIIGZ;
    input[8*20:1] device;
    reg var_family_arriaiigz;
begin
    if (IS_FAMILY_ARRIAIIGZ(device) )
        var_family_arriaiigz = 1;
    else
        var_family_arriaiigz = 0;

    FEATURE_FAMILY_ARRIAIIGZ  = var_family_arriaiigz;
end
endfunction //FEATURE_FAMILY_ARRIAIIGZ

function FEATURE_FAMILY_ARRIAIIGX;
    input[8*20:1] device;
    reg var_family_arriaiigx;
begin
    if (IS_FAMILY_ARRIAIIGX(device) )
        var_family_arriaiigx = 1;
    else
        var_family_arriaiigx = 0;

    FEATURE_FAMILY_ARRIAIIGX  = var_family_arriaiigx;
end
endfunction //FEATURE_FAMILY_ARRIAIIGX

function FEATURE_FAMILY_HARDCOPYIII;
    input[8*20:1] device;
    reg var_family_hardcopyiii;
begin
    if (IS_FAMILY_HARDCOPYIII(device) || IS_FAMILY_HARDCOPYIII(device) )
        var_family_hardcopyiii = 1;
    else
        var_family_hardcopyiii = 0;

    FEATURE_FAMILY_HARDCOPYIII  = var_family_hardcopyiii;
end
endfunction //FEATURE_FAMILY_HARDCOPYIII

function FEATURE_FAMILY_HARDCOPYIV;
    input[8*20:1] device;
    reg var_family_hardcopyiv;
begin
    if (IS_FAMILY_HARDCOPYIV(device) || IS_FAMILY_HARDCOPYIV(device) )
        var_family_hardcopyiv = 1;
    else
        var_family_hardcopyiv = 0;

    FEATURE_FAMILY_HARDCOPYIV  = var_family_hardcopyiv;
end
endfunction //FEATURE_FAMILY_HARDCOPYIV

function FEATURE_FAMILY_CYCLONEV;
    input[8*20:1] device;
    reg var_family_cyclonev;
begin
    if (IS_FAMILY_CYCLONEV(device) )
        var_family_cyclonev = 1;
    else
        var_family_cyclonev = 0;

    FEATURE_FAMILY_CYCLONEV  = var_family_cyclonev;
end
endfunction //FEATURE_FAMILY_CYCLONEV

function FEATURE_FAMILY_ARRIAV;
    input[8*20:1] device;
    reg var_family_arriav;
begin
    if (IS_FAMILY_ARRIAV(device) || FEATURE_FAMILY_CYCLONEV(device) )
        var_family_arriav = 1;
    else
        var_family_arriav = 0;

    FEATURE_FAMILY_ARRIAV  = var_family_arriav;
end
endfunction //FEATURE_FAMILY_ARRIAV

function FEATURE_FAMILY_MAX10FPGA;
    input[8*20:1] device;
    reg var_family_max10fpga;
begin
    if (IS_FAMILY_MAX10FPGA(device) )
        var_family_max10fpga = 1;
    else
        var_family_max10fpga = 0;

    FEATURE_FAMILY_MAX10FPGA  = var_family_max10fpga;
end
endfunction //FEATURE_FAMILY_MAX10FPGA

function FEATURE_FAMILY_BASE_STRATIXII;
    input[8*20:1] device;
    reg var_family_base_stratixii;
begin
    if (IS_FAMILY_STRATIXII(device) || IS_FAMILY_HARDCOPYII(device) || FEATURE_FAMILY_STRATIXIIGX(device) )
        var_family_base_stratixii = 1;
    else
        var_family_base_stratixii = 0;

    FEATURE_FAMILY_BASE_STRATIXII  = var_family_base_stratixii;
end
endfunction //FEATURE_FAMILY_BASE_STRATIXII

function FEATURE_FAMILY_BASE_STRATIX;
    input[8*20:1] device;
    reg var_family_base_stratix;
begin
    if (IS_FAMILY_STRATIX(device) || IS_FAMILY_STRATIXGX(device) )
        var_family_base_stratix = 1;
    else
        var_family_base_stratix = 0;

    FEATURE_FAMILY_BASE_STRATIX  = var_family_base_stratix;
end
endfunction //FEATURE_FAMILY_BASE_STRATIX

function FEATURE_FAMILY_BASE_CYCLONEII;
    input[8*20:1] device;
    reg var_family_base_cycloneii;
begin
    if (IS_FAMILY_CYCLONEII(device) )
        var_family_base_cycloneii = 1;
    else
        var_family_base_cycloneii = 0;

    FEATURE_FAMILY_BASE_CYCLONEII  = var_family_base_cycloneii;
end
endfunction //FEATURE_FAMILY_BASE_CYCLONEII

function FEATURE_FAMILY_BASE_CYCLONE;
    input[8*20:1] device;
    reg var_family_base_cyclone;
begin
    if (IS_FAMILY_CYCLONE(device) )
        var_family_base_cyclone = 1;
    else
        var_family_base_cyclone = 0;

    FEATURE_FAMILY_BASE_CYCLONE  = var_family_base_cyclone;
end
endfunction //FEATURE_FAMILY_BASE_CYCLONE

function FEATURE_FAMILY_HAS_ALTERA_MULT_ADD_FLOW;
    input[8*20:1] device;
    reg var_family_has_altera_mult_add_flow;
begin
    if (FEATURE_FAMILY_STRATIXV(device) || FEATURE_FAMILY_ARRIAV(device) || FEATURE_FAMILY_CYCLONEV(device) || FEATURE_FAMILY_ARRIA10(device) )
        var_family_has_altera_mult_add_flow = 1;
    else
        var_family_has_altera_mult_add_flow = 0;

    FEATURE_FAMILY_HAS_ALTERA_MULT_ADD_FLOW  = var_family_has_altera_mult_add_flow;
end
endfunction //FEATURE_FAMILY_HAS_ALTERA_MULT_ADD_FLOW

function FEATURE_FAMILY_IS_ALTMULT_ADD_EOL;
    input[8*20:1] device;
    reg var_family_is_altmult_add_eol;
begin
    if (FEATURE_FAMILY_ARRIA10(device) )
        var_family_is_altmult_add_eol = 1;
    else
        var_family_is_altmult_add_eol = 0;

    FEATURE_FAMILY_IS_ALTMULT_ADD_EOL  = var_family_is_altmult_add_eol;
end
endfunction //FEATURE_FAMILY_IS_ALTMULT_ADD_EOL

function FEATURE_FAMILY_HAS_STRATIXII_STYLE_RAM;
    input[8*20:1] device;
    reg var_family_has_stratixii_style_ram;
begin
    if (FEATURE_FAMILY_STRATIXII(device) || FEATURE_FAMILY_CYCLONEII(device) )
        var_family_has_stratixii_style_ram = 1;
    else
        var_family_has_stratixii_style_ram = 0;

    FEATURE_FAMILY_HAS_STRATIXII_STYLE_RAM  = var_family_has_stratixii_style_ram;
end
endfunction //FEATURE_FAMILY_HAS_STRATIXII_STYLE_RAM

function FEATURE_FAMILY_HAS_STRATIXIII_STYLE_RAM;
    input[8*20:1] device;
    reg var_family_has_stratixiii_style_ram;
begin
    if (FEATURE_FAMILY_STRATIXIII(device) || FEATURE_FAMILY_CYCLONEIII(device) )
        var_family_has_stratixiii_style_ram = 1;
    else
        var_family_has_stratixiii_style_ram = 0;

    FEATURE_FAMILY_HAS_STRATIXIII_STYLE_RAM  = var_family_has_stratixiii_style_ram;
end
endfunction //FEATURE_FAMILY_HAS_STRATIXIII_STYLE_RAM

function FEATURE_FAMILY_HAS_STRATIX_STYLE_PLL;
    input[8*20:1] device;
    reg var_family_has_stratix_style_pll;
begin
    if (FEATURE_FAMILY_CYCLONE(device) || FEATURE_FAMILY_STRATIX_HC(device) || IS_FAMILY_STRATIX(device) || FEATURE_FAMILY_STRATIXGX(device) )
        var_family_has_stratix_style_pll = 1;
    else
        var_family_has_stratix_style_pll = 0;

    FEATURE_FAMILY_HAS_STRATIX_STYLE_PLL  = var_family_has_stratix_style_pll;
end
endfunction //FEATURE_FAMILY_HAS_STRATIX_STYLE_PLL

function FEATURE_FAMILY_HAS_STRATIXII_STYLE_PLL;
    input[8*20:1] device;
    reg var_family_has_stratixii_style_pll;
begin
    if (FEATURE_FAMILY_STRATIXII(device) && ! FEATURE_FAMILY_STRATIXIII(device) || FEATURE_FAMILY_CYCLONEII(device) && ! FEATURE_FAMILY_CYCLONEIII(device) )
        var_family_has_stratixii_style_pll = 1;
    else
        var_family_has_stratixii_style_pll = 0;

    FEATURE_FAMILY_HAS_STRATIXII_STYLE_PLL  = var_family_has_stratixii_style_pll;
end
endfunction //FEATURE_FAMILY_HAS_STRATIXII_STYLE_PLL

function FEATURE_FAMILY_HAS_INVERTED_OUTPUT_DDIO;
    input[8*20:1] device;
    reg var_family_has_inverted_output_ddio;
begin
    if (FEATURE_FAMILY_CYCLONEII(device) )
        var_family_has_inverted_output_ddio = 1;
    else
        var_family_has_inverted_output_ddio = 0;

    FEATURE_FAMILY_HAS_INVERTED_OUTPUT_DDIO  = var_family_has_inverted_output_ddio;
end
endfunction //FEATURE_FAMILY_HAS_INVERTED_OUTPUT_DDIO

function IS_VALID_FAMILY;
    input[8*20:1] device;
    reg is_valid;
begin
    if (((device == "Arria 10") || (device == "ARRIA 10") || (device == "arria 10") || (device == "Arria10") || (device == "ARRIA10") || (device == "arria10") || (device == "Arria VI") || (device == "ARRIA VI") || (device == "arria vi") || (device == "ArriaVI") || (device == "ARRIAVI") || (device == "arriavi") || (device == "Night Fury") || (device == "NIGHT FURY") || (device == "night fury") || (device == "nightfury") || (device == "NIGHTFURY") || (device == "Arria 10 (GX/SX/GT)") || (device == "ARRIA 10 (GX/SX/GT)") || (device == "arria 10 (gx/sx/gt)") || (device == "Arria10(GX/SX/GT)") || (device == "ARRIA10(GX/SX/GT)") || (device == "arria10(gx/sx/gt)") || (device == "Arria 10 (GX)") || (device == "ARRIA 10 (GX)") || (device == "arria 10 (gx)") || (device == "Arria10(GX)") || (device == "ARRIA10(GX)") || (device == "arria10(gx)") || (device == "Arria 10 (SX)") || (device == "ARRIA 10 (SX)") || (device == "arria 10 (sx)") || (device == "Arria10(SX)") || (device == "ARRIA10(SX)") || (device == "arria10(sx)") || (device == "Arria 10 (GT)") || (device == "ARRIA 10 (GT)") || (device == "arria 10 (gt)") || (device == "Arria10(GT)") || (device == "ARRIA10(GT)") || (device == "arria10(gt)"))
    || ((device == "Arria GX") || (device == "ARRIA GX") || (device == "arria gx") || (device == "ArriaGX") || (device == "ARRIAGX") || (device == "arriagx") || (device == "Stratix II GX Lite") || (device == "STRATIX II GX LITE") || (device == "stratix ii gx lite") || (device == "StratixIIGXLite") || (device == "STRATIXIIGXLITE") || (device == "stratixiigxlite"))
    || ((device == "Arria II GX") || (device == "ARRIA II GX") || (device == "arria ii gx") || (device == "ArriaIIGX") || (device == "ARRIAIIGX") || (device == "arriaiigx") || (device == "Arria IIGX") || (device == "ARRIA IIGX") || (device == "arria iigx") || (device == "ArriaII GX") || (device == "ARRIAII GX") || (device == "arriaii gx") || (device == "Arria II") || (device == "ARRIA II") || (device == "arria ii") || (device == "ArriaII") || (device == "ARRIAII") || (device == "arriaii") || (device == "Arria II (GX/E)") || (device == "ARRIA II (GX/E)") || (device == "arria ii (gx/e)") || (device == "ArriaII(GX/E)") || (device == "ARRIAII(GX/E)") || (device == "arriaii(gx/e)") || (device == "PIRANHA") || (device == "piranha"))
    || ((device == "Arria II GZ") || (device == "ARRIA II GZ") || (device == "arria ii gz") || (device == "ArriaII GZ") || (device == "ARRIAII GZ") || (device == "arriaii gz") || (device == "Arria IIGZ") || (device == "ARRIA IIGZ") || (device == "arria iigz") || (device == "ArriaIIGZ") || (device == "ARRIAIIGZ") || (device == "arriaiigz"))
    || ((device == "Arria V GZ") || (device == "ARRIA V GZ") || (device == "arria v gz") || (device == "ArriaVGZ") || (device == "ARRIAVGZ") || (device == "arriavgz"))
    || ((device == "Arria V") || (device == "ARRIA V") || (device == "arria v") || (device == "Arria V (GT/GX)") || (device == "ARRIA V (GT/GX)") || (device == "arria v (gt/gx)") || (device == "ArriaV(GT/GX)") || (device == "ARRIAV(GT/GX)") || (device == "arriav(gt/gx)") || (device == "ArriaV") || (device == "ARRIAV") || (device == "arriav") || (device == "Arria V (GT/GX/ST/SX)") || (device == "ARRIA V (GT/GX/ST/SX)") || (device == "arria v (gt/gx/st/sx)") || (device == "ArriaV(GT/GX/ST/SX)") || (device == "ARRIAV(GT/GX/ST/SX)") || (device == "arriav(gt/gx/st/sx)") || (device == "Arria V (GT)") || (device == "ARRIA V (GT)") || (device == "arria v (gt)") || (device == "ArriaV(GT)") || (device == "ARRIAV(GT)") || (device == "arriav(gt)") || (device == "Arria V (GX)") || (device == "ARRIA V (GX)") || (device == "arria v (gx)") || (device == "ArriaV(GX)") || (device == "ARRIAV(GX)") || (device == "arriav(gx)") || (device == "Arria V (ST)") || (device == "ARRIA V (ST)") || (device == "arria v (st)") || (device == "ArriaV(ST)") || (device == "ARRIAV(ST)") || (device == "arriav(st)") || (device == "Arria V (SX)") || (device == "ARRIA V (SX)") || (device == "arria v (sx)") || (device == "ArriaV(SX)") || (device == "ARRIAV(SX)") || (device == "arriav(sx)"))
    || ((device == "BS") || (device == "bs"))
    || ((device == "Cyclone II") || (device == "CYCLONE II") || (device == "cyclone ii") || (device == "Cycloneii") || (device == "CYCLONEII") || (device == "cycloneii") || (device == "Magellan") || (device == "MAGELLAN") || (device == "magellan") || (device == "CycloneII") || (device == "CYCLONEII") || (device == "cycloneii"))
    || ((device == "Cyclone III LS") || (device == "CYCLONE III LS") || (device == "cyclone iii ls") || (device == "CycloneIIILS") || (device == "CYCLONEIIILS") || (device == "cycloneiiils") || (device == "Cyclone III LPS") || (device == "CYCLONE III LPS") || (device == "cyclone iii lps") || (device == "Cyclone LPS") || (device == "CYCLONE LPS") || (device == "cyclone lps") || (device == "CycloneLPS") || (device == "CYCLONELPS") || (device == "cyclonelps") || (device == "Tarpon") || (device == "TARPON") || (device == "tarpon") || (device == "Cyclone IIIE") || (device == "CYCLONE IIIE") || (device == "cyclone iiie"))
    || ((device == "Cyclone III") || (device == "CYCLONE III") || (device == "cyclone iii") || (device == "CycloneIII") || (device == "CYCLONEIII") || (device == "cycloneiii") || (device == "Barracuda") || (device == "BARRACUDA") || (device == "barracuda") || (device == "Cuda") || (device == "CUDA") || (device == "cuda") || (device == "CIII") || (device == "ciii"))
    || ((device == "Cyclone IV E") || (device == "CYCLONE IV E") || (device == "cyclone iv e") || (device == "CycloneIV E") || (device == "CYCLONEIV E") || (device == "cycloneiv e") || (device == "Cyclone IVE") || (device == "CYCLONE IVE") || (device == "cyclone ive") || (device == "CycloneIVE") || (device == "CYCLONEIVE") || (device == "cycloneive"))
    || ((device == "Cyclone IV GX") || (device == "CYCLONE IV GX") || (device == "cyclone iv gx") || (device == "Cyclone IVGX") || (device == "CYCLONE IVGX") || (device == "cyclone ivgx") || (device == "CycloneIV GX") || (device == "CYCLONEIV GX") || (device == "cycloneiv gx") || (device == "CycloneIVGX") || (device == "CYCLONEIVGX") || (device == "cycloneivgx") || (device == "Cyclone IV") || (device == "CYCLONE IV") || (device == "cyclone iv") || (device == "CycloneIV") || (device == "CYCLONEIV") || (device == "cycloneiv") || (device == "Cyclone IV (GX)") || (device == "CYCLONE IV (GX)") || (device == "cyclone iv (gx)") || (device == "CycloneIV(GX)") || (device == "CYCLONEIV(GX)") || (device == "cycloneiv(gx)") || (device == "Cyclone III GX") || (device == "CYCLONE III GX") || (device == "cyclone iii gx") || (device == "CycloneIII GX") || (device == "CYCLONEIII GX") || (device == "cycloneiii gx") || (device == "Cyclone IIIGX") || (device == "CYCLONE IIIGX") || (device == "cyclone iiigx") || (device == "CycloneIIIGX") || (device == "CYCLONEIIIGX") || (device == "cycloneiiigx") || (device == "Cyclone III GL") || (device == "CYCLONE III GL") || (device == "cyclone iii gl") || (device == "CycloneIII GL") || (device == "CYCLONEIII GL") || (device == "cycloneiii gl") || (device == "Cyclone IIIGL") || (device == "CYCLONE IIIGL") || (device == "cyclone iiigl") || (device == "CycloneIIIGL") || (device == "CYCLONEIIIGL") || (device == "cycloneiiigl") || (device == "Stingray") || (device == "STINGRAY") || (device == "stingray"))
    || ((device == "Cyclone V") || (device == "CYCLONE V") || (device == "cyclone v") || (device == "CycloneV") || (device == "CYCLONEV") || (device == "cyclonev") || (device == "Cyclone V (GT/GX/E/SX)") || (device == "CYCLONE V (GT/GX/E/SX)") || (device == "cyclone v (gt/gx/e/sx)") || (device == "CycloneV(GT/GX/E/SX)") || (device == "CYCLONEV(GT/GX/E/SX)") || (device == "cyclonev(gt/gx/e/sx)") || (device == "Cyclone V (E/GX/GT/SX/SE/ST)") || (device == "CYCLONE V (E/GX/GT/SX/SE/ST)") || (device == "cyclone v (e/gx/gt/sx/se/st)") || (device == "CycloneV(E/GX/GT/SX/SE/ST)") || (device == "CYCLONEV(E/GX/GT/SX/SE/ST)") || (device == "cyclonev(e/gx/gt/sx/se/st)") || (device == "Cyclone V (E)") || (device == "CYCLONE V (E)") || (device == "cyclone v (e)") || (device == "CycloneV(E)") || (device == "CYCLONEV(E)") || (device == "cyclonev(e)") || (device == "Cyclone V (GX)") || (device == "CYCLONE V (GX)") || (device == "cyclone v (gx)") || (device == "CycloneV(GX)") || (device == "CYCLONEV(GX)") || (device == "cyclonev(gx)") || (device == "Cyclone V (GT)") || (device == "CYCLONE V (GT)") || (device == "cyclone v (gt)") || (device == "CycloneV(GT)") || (device == "CYCLONEV(GT)") || (device == "cyclonev(gt)") || (device == "Cyclone V (SX)") || (device == "CYCLONE V (SX)") || (device == "cyclone v (sx)") || (device == "CycloneV(SX)") || (device == "CYCLONEV(SX)") || (device == "cyclonev(sx)") || (device == "Cyclone V (SE)") || (device == "CYCLONE V (SE)") || (device == "cyclone v (se)") || (device == "CycloneV(SE)") || (device == "CYCLONEV(SE)") || (device == "cyclonev(se)") || (device == "Cyclone V (ST)") || (device == "CYCLONE V (ST)") || (device == "cyclone v (st)") || (device == "CycloneV(ST)") || (device == "CYCLONEV(ST)") || (device == "cyclonev(st)"))
    || ((device == "Cyclone") || (device == "CYCLONE") || (device == "cyclone") || (device == "ACEX2K") || (device == "acex2k") || (device == "ACEX 2K") || (device == "acex 2k") || (device == "Tornado") || (device == "TORNADO") || (device == "tornado"))
    || ((device == "HardCopy II") || (device == "HARDCOPY II") || (device == "hardcopy ii") || (device == "HardCopyII") || (device == "HARDCOPYII") || (device == "hardcopyii") || (device == "Fusion") || (device == "FUSION") || (device == "fusion"))
    || ((device == "HardCopy III") || (device == "HARDCOPY III") || (device == "hardcopy iii") || (device == "HardCopyIII") || (device == "HARDCOPYIII") || (device == "hardcopyiii") || (device == "HCX") || (device == "hcx"))
    || ((device == "HardCopy IV") || (device == "HARDCOPY IV") || (device == "hardcopy iv") || (device == "HardCopyIV") || (device == "HARDCOPYIV") || (device == "hardcopyiv") || (device == "HardCopy IV (GX)") || (device == "HARDCOPY IV (GX)") || (device == "hardcopy iv (gx)") || (device == "HardCopy IV (E)") || (device == "HARDCOPY IV (E)") || (device == "hardcopy iv (e)") || (device == "HardCopyIV(GX)") || (device == "HARDCOPYIV(GX)") || (device == "hardcopyiv(gx)") || (device == "HardCopyIV(E)") || (device == "HARDCOPYIV(E)") || (device == "hardcopyiv(e)") || (device == "HCXIV") || (device == "hcxiv") || (device == "HardCopy IV (GX/E)") || (device == "HARDCOPY IV (GX/E)") || (device == "hardcopy iv (gx/e)") || (device == "HardCopy IV (E/GX)") || (device == "HARDCOPY IV (E/GX)") || (device == "hardcopy iv (e/gx)") || (device == "HardCopyIV(GX/E)") || (device == "HARDCOPYIV(GX/E)") || (device == "hardcopyiv(gx/e)") || (device == "HardCopyIV(E/GX)") || (device == "HARDCOPYIV(E/GX)") || (device == "hardcopyiv(e/gx)"))
    || ((device == "MAX 10 FPGA") || (device == "max 10 fpga") || (device == "Zippleback") || (device == "ZIPPLEBACK") || (device == "zippleback") || (device == "MAX10FPGA") || (device == "max10fpga") || (device == "MAX 10 FPGA (DA/DF/DC/SF/SC)") || (device == "max 10 fpga (da/df/dc/sf/sc)") || (device == "MAX10FPGA(DA/DF/DC/SF/SC)") || (device == "max10fpga(da/df/dc/sf/sc)") || (device == "MAX 10 FPGA (DA)") || (device == "max 10 fpga (da)") || (device == "MAX10FPGA(DA)") || (device == "max10fpga(da)") || (device == "MAX 10 FPGA (DF)") || (device == "max 10 fpga (df)") || (device == "MAX10FPGA(DF)") || (device == "max10fpga(df)") || (device == "MAX 10 FPGA (DC)") || (device == "max 10 fpga (dc)") || (device == "MAX10FPGA(DC)") || (device == "max10fpga(dc)") || (device == "MAX 10 FPGA (SF)") || (device == "max 10 fpga (sf)") || (device == "MAX10FPGA(SF)") || (device == "max10fpga(sf)") || (device == "MAX 10 FPGA (SC)") || (device == "max 10 fpga (sc)") || (device == "MAX10FPGA(SC)") || (device == "max10fpga(sc)"))
    || ((device == "MAX II") || (device == "max ii") || (device == "MAXII") || (device == "maxii") || (device == "Tsunami") || (device == "TSUNAMI") || (device == "tsunami"))
    || ((device == "MAX V") || (device == "max v") || (device == "MAXV") || (device == "maxv") || (device == "Jade") || (device == "JADE") || (device == "jade"))
    || ((device == "MAX3000A") || (device == "max3000a") || (device == "MAX 3000A") || (device == "max 3000a"))
    || ((device == "MAX7000A") || (device == "max7000a") || (device == "MAX 7000A") || (device == "max 7000a"))
    || ((device == "MAX7000AE") || (device == "max7000ae") || (device == "MAX 7000AE") || (device == "max 7000ae"))
    || ((device == "MAX7000B") || (device == "max7000b") || (device == "MAX 7000B") || (device == "max 7000b"))
    || ((device == "MAX7000S") || (device == "max7000s") || (device == "MAX 7000S") || (device == "max 7000s"))
    || ((device == "Stratix GX") || (device == "STRATIX GX") || (device == "stratix gx") || (device == "Stratix-GX") || (device == "STRATIX-GX") || (device == "stratix-gx") || (device == "StratixGX") || (device == "STRATIXGX") || (device == "stratixgx") || (device == "Aurora") || (device == "AURORA") || (device == "aurora"))
    || ((device == "Stratix II GX") || (device == "STRATIX II GX") || (device == "stratix ii gx") || (device == "StratixIIGX") || (device == "STRATIXIIGX") || (device == "stratixiigx"))
    || ((device == "Stratix II") || (device == "STRATIX II") || (device == "stratix ii") || (device == "StratixII") || (device == "STRATIXII") || (device == "stratixii") || (device == "Armstrong") || (device == "ARMSTRONG") || (device == "armstrong"))
    || ((device == "Stratix III") || (device == "STRATIX III") || (device == "stratix iii") || (device == "StratixIII") || (device == "STRATIXIII") || (device == "stratixiii") || (device == "Titan") || (device == "TITAN") || (device == "titan") || (device == "SIII") || (device == "siii"))
    || ((device == "Stratix IV") || (device == "STRATIX IV") || (device == "stratix iv") || (device == "TGX") || (device == "tgx") || (device == "StratixIV") || (device == "STRATIXIV") || (device == "stratixiv") || (device == "Stratix IV (GT)") || (device == "STRATIX IV (GT)") || (device == "stratix iv (gt)") || (device == "Stratix IV (GX)") || (device == "STRATIX IV (GX)") || (device == "stratix iv (gx)") || (device == "Stratix IV (E)") || (device == "STRATIX IV (E)") || (device == "stratix iv (e)") || (device == "StratixIV(GT)") || (device == "STRATIXIV(GT)") || (device == "stratixiv(gt)") || (device == "StratixIV(GX)") || (device == "STRATIXIV(GX)") || (device == "stratixiv(gx)") || (device == "StratixIV(E)") || (device == "STRATIXIV(E)") || (device == "stratixiv(e)") || (device == "StratixIIIGX") || (device == "STRATIXIIIGX") || (device == "stratixiiigx") || (device == "Stratix IV (GT/GX/E)") || (device == "STRATIX IV (GT/GX/E)") || (device == "stratix iv (gt/gx/e)") || (device == "Stratix IV (GT/E/GX)") || (device == "STRATIX IV (GT/E/GX)") || (device == "stratix iv (gt/e/gx)") || (device == "Stratix IV (E/GT/GX)") || (device == "STRATIX IV (E/GT/GX)") || (device == "stratix iv (e/gt/gx)") || (device == "Stratix IV (E/GX/GT)") || (device == "STRATIX IV (E/GX/GT)") || (device == "stratix iv (e/gx/gt)") || (device == "StratixIV(GT/GX/E)") || (device == "STRATIXIV(GT/GX/E)") || (device == "stratixiv(gt/gx/e)") || (device == "StratixIV(GT/E/GX)") || (device == "STRATIXIV(GT/E/GX)") || (device == "stratixiv(gt/e/gx)") || (device == "StratixIV(E/GX/GT)") || (device == "STRATIXIV(E/GX/GT)") || (device == "stratixiv(e/gx/gt)") || (device == "StratixIV(E/GT/GX)") || (device == "STRATIXIV(E/GT/GX)") || (device == "stratixiv(e/gt/gx)") || (device == "Stratix IV (GX/E)") || (device == "STRATIX IV (GX/E)") || (device == "stratix iv (gx/e)") || (device == "StratixIV(GX/E)") || (device == "STRATIXIV(GX/E)") || (device == "stratixiv(gx/e)"))
    || ((device == "Stratix V") || (device == "STRATIX V") || (device == "stratix v") || (device == "StratixV") || (device == "STRATIXV") || (device == "stratixv") || (device == "Stratix V (GS)") || (device == "STRATIX V (GS)") || (device == "stratix v (gs)") || (device == "StratixV(GS)") || (device == "STRATIXV(GS)") || (device == "stratixv(gs)") || (device == "Stratix V (GT)") || (device == "STRATIX V (GT)") || (device == "stratix v (gt)") || (device == "StratixV(GT)") || (device == "STRATIXV(GT)") || (device == "stratixv(gt)") || (device == "Stratix V (GX)") || (device == "STRATIX V (GX)") || (device == "stratix v (gx)") || (device == "StratixV(GX)") || (device == "STRATIXV(GX)") || (device == "stratixv(gx)") || (device == "Stratix V (GS/GX)") || (device == "STRATIX V (GS/GX)") || (device == "stratix v (gs/gx)") || (device == "StratixV(GS/GX)") || (device == "STRATIXV(GS/GX)") || (device == "stratixv(gs/gx)") || (device == "Stratix V (GS/GT)") || (device == "STRATIX V (GS/GT)") || (device == "stratix v (gs/gt)") || (device == "StratixV(GS/GT)") || (device == "STRATIXV(GS/GT)") || (device == "stratixv(gs/gt)") || (device == "Stratix V (GT/GX)") || (device == "STRATIX V (GT/GX)") || (device == "stratix v (gt/gx)") || (device == "StratixV(GT/GX)") || (device == "STRATIXV(GT/GX)") || (device == "stratixv(gt/gx)") || (device == "Stratix V (GX/GS)") || (device == "STRATIX V (GX/GS)") || (device == "stratix v (gx/gs)") || (device == "StratixV(GX/GS)") || (device == "STRATIXV(GX/GS)") || (device == "stratixv(gx/gs)") || (device == "Stratix V (GT/GS)") || (device == "STRATIX V (GT/GS)") || (device == "stratix v (gt/gs)") || (device == "StratixV(GT/GS)") || (device == "STRATIXV(GT/GS)") || (device == "stratixv(gt/gs)") || (device == "Stratix V (GX/GT)") || (device == "STRATIX V (GX/GT)") || (device == "stratix v (gx/gt)") || (device == "StratixV(GX/GT)") || (device == "STRATIXV(GX/GT)") || (device == "stratixv(gx/gt)") || (device == "Stratix V (GS/GT/GX)") || (device == "STRATIX V (GS/GT/GX)") || (device == "stratix v (gs/gt/gx)") || (device == "Stratix V (GS/GX/GT)") || (device == "STRATIX V (GS/GX/GT)") || (device == "stratix v (gs/gx/gt)") || (device == "Stratix V (GT/GS/GX)") || (device == "STRATIX V (GT/GS/GX)") || (device == "stratix v (gt/gs/gx)") || (device == "Stratix V (GT/GX/GS)") || (device == "STRATIX V (GT/GX/GS)") || (device == "stratix v (gt/gx/gs)") || (device == "Stratix V (GX/GS/GT)") || (device == "STRATIX V (GX/GS/GT)") || (device == "stratix v (gx/gs/gt)") || (device == "Stratix V (GX/GT/GS)") || (device == "STRATIX V (GX/GT/GS)") || (device == "stratix v (gx/gt/gs)") || (device == "StratixV(GS/GT/GX)") || (device == "STRATIXV(GS/GT/GX)") || (device == "stratixv(gs/gt/gx)") || (device == "StratixV(GS/GX/GT)") || (device == "STRATIXV(GS/GX/GT)") || (device == "stratixv(gs/gx/gt)") || (device == "StratixV(GT/GS/GX)") || (device == "STRATIXV(GT/GS/GX)") || (device == "stratixv(gt/gs/gx)") || (device == "StratixV(GT/GX/GS)") || (device == "STRATIXV(GT/GX/GS)") || (device == "stratixv(gt/gx/gs)") || (device == "StratixV(GX/GS/GT)") || (device == "STRATIXV(GX/GS/GT)") || (device == "stratixv(gx/gs/gt)") || (device == "StratixV(GX/GT/GS)") || (device == "STRATIXV(GX/GT/GS)") || (device == "stratixv(gx/gt/gs)") || (device == "Stratix V (GS/GT/GX/E)") || (device == "STRATIX V (GS/GT/GX/E)") || (device == "stratix v (gs/gt/gx/e)") || (device == "StratixV(GS/GT/GX/E)") || (device == "STRATIXV(GS/GT/GX/E)") || (device == "stratixv(gs/gt/gx/e)") || (device == "Stratix V (E)") || (device == "STRATIX V (E)") || (device == "stratix v (e)") || (device == "StratixV(E)") || (device == "STRATIXV(E)") || (device == "stratixv(e)"))
    || ((device == "Stratix") || (device == "STRATIX") || (device == "stratix") || (device == "Yeager") || (device == "YEAGER") || (device == "yeager"))
    || ((device == "eFPGA 28 HPM") || (device == "EFPGA 28 HPM") || (device == "efpga 28 hpm") || (device == "eFPGA28HPM") || (device == "EFPGA28HPM") || (device == "efpga28hpm") || (device == "Bedrock") || (device == "BEDROCK") || (device == "bedrock")))
        is_valid = 1;
    else
        is_valid = 0;

    IS_VALID_FAMILY = is_valid;
end
endfunction // IS_VALID_FAMILY


endmodule // ALTERA_DEVICE_FAMILIES

//START_MODULE_NAME------------------------------------------------------------
//
// Module Name     :  scfifo
//
// Description     :  Single Clock FIFO
//
// Limitation      :  
//
// Results expected:
//
//END_MODULE_NAME--------------------------------------------------------------

// BEGINNING OF MODULE
`timescale 1 ps / 1 ps

// MODULE DECLARATION
module scfifo ( data, 
                clock, 
                wrreq, 
                rdreq, 
                aclr, 
                sclr,
                q, 
                usedw, 
                full, 
                empty, 
                almost_full, 
                almost_empty);

// GLOBAL PARAMETER DECLARATION
    parameter lpm_width               = 8;
    parameter lpm_widthu              = 1;
    parameter lpm_numwords            = 4;
    parameter lpm_showahead           = "ON";
    parameter lpm_type                = "scfifo";
    parameter lpm_hint                = "USE_EAB=ON";
    parameter intended_device_family  = "Stratix";
    parameter underflow_checking      = "ON";
    parameter overflow_checking       = "ON";
    parameter allow_rwcycle_when_full = "OFF";
    parameter use_eab                 = "ON";
    parameter add_ram_output_register = "OFF";
    parameter almost_full_value       = 0;
    parameter almost_empty_value      = 0;
    parameter maximum_depth           = 0;    

// LOCAL_PARAMETERS_BEGIN

    parameter showahead_area          = ((lpm_showahead == "ON")  && (add_ram_output_register == "OFF"));
    parameter showahead_speed         = ((lpm_showahead == "ON")  && (add_ram_output_register == "ON"));
    parameter legacy_speed            = ((lpm_showahead == "OFF") && (add_ram_output_register == "ON"));

// LOCAL_PARAMETERS_END

// INPUT PORT DECLARATION
    input  [lpm_width-1:0] data;
    input  clock;
    input  wrreq;
    input  rdreq;
    input  aclr;
    input  sclr;

// OUTPUT PORT DECLARATION
    output [lpm_width-1:0] q;
    output [lpm_widthu-1:0] usedw;
    output full;
    output empty;
    output almost_full;
    output almost_empty;

// INTERNAL REGISTERS DECLARATION
    reg [lpm_width-1:0] mem_data [(1<<lpm_widthu):0];
    reg [lpm_widthu-1:0] count_id;
    reg [lpm_widthu-1:0] read_id;
    reg [lpm_widthu-1:0] write_id;
    wire valid_rreq;
    reg valid_wreq;
    reg write_flag;
    reg full_flag;
    reg empty_flag;
    reg almost_full_flag;
    reg almost_empty_flag;
    reg [lpm_width-1:0] tmp_q;
    reg stratix_family;
    reg set_q_to_x;
    reg set_q_to_x_by_empty;

    reg [lpm_widthu-1:0] write_latency1; 
    reg [lpm_widthu-1:0] write_latency2; 
    reg [lpm_widthu-1:0] write_latency3; 
    integer wrt_count;
        
    reg empty_latency1; 
    reg empty_latency2; 
    
    reg [(1<<lpm_widthu)-1:0] data_ready;
    reg [(1<<lpm_widthu)-1:0] data_shown;
    
// INTERNAL TRI DECLARATION
    tri0 aclr;

// LOCAL INTEGER DECLARATION
    integer i;

// COMPONENT INSTANTIATIONS
    ALTERA_DEVICE_FAMILIES dev ();

// INITIAL CONSTRUCT BLOCK
    initial
    begin

        stratix_family = (dev.FEATURE_FAMILY_STRATIX(intended_device_family));    
        if (lpm_width <= 0)
        begin
            $display ("Error! LPM_WIDTH must be greater than 0.");
            $display ("Time: %0t  Instance: %m", $time);
        end
        if ((lpm_widthu !=1) && (lpm_numwords > (1 << lpm_widthu)))
        begin
            $display ("Error! LPM_NUMWORDS must equal to the ceiling of log2(LPM_WIDTHU).");
            $display ("Time: %0t  Instance: %m", $time);
        end
        if (dev.IS_VALID_FAMILY(intended_device_family) == 0)
        begin
            $display ("Error! Unknown INTENDED_DEVICE_FAMILY=%s.", intended_device_family);
            $display ("Time: %0t  Instance: %m", $time);
        end
        if((add_ram_output_register != "ON") && (add_ram_output_register != "OFF"))
        begin
            $display ("Error! add_ram_output_register must be ON or OFF.");          
            $display ("Time: %0t  Instance: %m", $time);
        end         
        for (i = 0; i < (1<<lpm_widthu); i = i + 1)
        begin
            if (dev.FEATURE_FAMILY_HAS_STRATIXIII_STYLE_RAM(intended_device_family))
                mem_data[i] <= {lpm_width{1'b0}};
            else if (dev.FEATURE_FAMILY_STRATIX(intended_device_family))
            begin
                if ((add_ram_output_register == "ON") || (use_eab == "OFF"))
                    mem_data[i] <= {lpm_width{1'b0}};
                else
                    mem_data[i] <= {lpm_width{1'bx}};
            end
            else
                mem_data[i] <= {lpm_width{1'b0}};
        end

        if (dev.FEATURE_FAMILY_HAS_STRATIXIII_STYLE_RAM(intended_device_family))
            tmp_q <= {lpm_width{1'b0}};
        else if (dev.FEATURE_FAMILY_STRATIX(intended_device_family))
        begin
            if ((add_ram_output_register == "ON") || (use_eab == "OFF"))
                tmp_q <= {lpm_width{1'b0}};
            else    
                tmp_q <= {lpm_width{1'bx}};
        end
        else
            tmp_q <= {lpm_width{1'b0}};
            
        write_flag <= 1'b0;
        count_id <= 0;
        read_id <= 0;
        write_id <= 0;
        full_flag <= 1'b0;
        empty_flag <= 1'b1;
        empty_latency1 <= 1'b1; 
        empty_latency2 <= 1'b1;                 
        set_q_to_x <= 1'b0;
        set_q_to_x_by_empty <= 1'b0;
        wrt_count <= 0;        

        if (almost_full_value == 0)
            almost_full_flag <= 1'b1;
        else
            almost_full_flag <= 1'b0;

        if (almost_empty_value == 0)
            almost_empty_flag <= 1'b0;
        else
            almost_empty_flag <= 1'b1;
    end

    assign valid_rreq = (underflow_checking == "OFF")? rdreq : (rdreq && ~empty_flag);

    always @(wrreq or rdreq or full_flag)
    begin
        if (overflow_checking == "OFF")
            valid_wreq = wrreq;
        else if (allow_rwcycle_when_full == "ON")
                valid_wreq = wrreq && (!full_flag || rdreq);
        else
            valid_wreq = wrreq && !full_flag;
    end

    always @(posedge clock or posedge aclr)
    begin        
        if (aclr)
        begin
            if (add_ram_output_register == "ON")
                tmp_q <= {lpm_width{1'b0}};
            else if ((lpm_showahead == "ON") && (use_eab == "ON"))
            begin
                tmp_q <= {lpm_width{1'bX}};
            end
            else
            begin
                if (!stratix_family)
                begin
                    tmp_q <= {lpm_width{1'b0}};
                end
                else
                    tmp_q <= {lpm_width{1'bX}};
            end

            read_id <= 0;
            count_id <= 0;
            full_flag <= 1'b0;
            empty_flag <= 1'b1;
            empty_latency1 <= 1'b1; 
            empty_latency2 <= 1'b1;
            set_q_to_x <= 1'b0;
            set_q_to_x_by_empty <= 1'b0;
            wrt_count <= 0;
            
            if (almost_full_value > 0)
                almost_full_flag <= 1'b0;
            if (almost_empty_value > 0)
                almost_empty_flag <= 1'b1;

            write_id <= 0;
            
            if ((use_eab == "ON") && (stratix_family) && ((showahead_speed) || (showahead_area) || (legacy_speed)))
            begin
                write_latency1 <= 1'bx;
                write_latency2 <= 1'bx;
                data_shown <= {lpm_width{1'b0}};
                if (add_ram_output_register == "ON")
                    tmp_q <= {lpm_width{1'b0}};
                else
                    tmp_q <= {lpm_width{1'bX}};
            end            
        end
        else
        begin
            if (sclr)
            begin
                if (add_ram_output_register == "ON")
                    tmp_q <= {lpm_width{1'b0}};
                else
                    tmp_q <= {lpm_width{1'bX}};

                read_id <= 0;
                count_id <= 0;
                full_flag <= 1'b0;
                empty_flag <= 1'b1;
                empty_latency1 <= 1'b1; 
                empty_latency2 <= 1'b1;
                set_q_to_x <= 1'b0;
                set_q_to_x_by_empty <= 1'b0;
                wrt_count <= 0;

                if (almost_full_value > 0)
                    almost_full_flag <= 1'b0;
                if (almost_empty_value > 0)
                    almost_empty_flag <= 1'b1;

                if (!stratix_family)
                begin
                    if (valid_wreq)
                    begin
                        write_flag <= 1'b1;
                    end
                    else
                        write_id <= 0;
                end
                else
                begin
                    write_id <= 0;
                end

                if ((use_eab == "ON") && (stratix_family) && ((showahead_speed) || (showahead_area) || (legacy_speed)))
                begin
                    write_latency1 <= 1'bx;
                    write_latency2 <= 1'bx;
                    data_shown <= {lpm_width{1'b0}};                    
                    if (add_ram_output_register == "ON")
                        tmp_q <= {lpm_width{1'b0}};
                    else
                        tmp_q <= {lpm_width{1'bX}};
                end            
            end
            else 
            begin
                //READ operation    
                if (valid_rreq)
                begin
                    if (!(set_q_to_x || set_q_to_x_by_empty))
                    begin  
                        if (!valid_wreq)
                            wrt_count <= wrt_count - 1;

                        if (!valid_wreq)
                        begin
                            full_flag <= 1'b0;

                            if (count_id <= 0)
                                count_id <= {lpm_widthu{1'b1}};
                            else
                                count_id <= count_id - 1;
                        end                

                        if ((use_eab == "ON") && stratix_family && (showahead_speed || showahead_area || legacy_speed))
                        begin
                            if ((wrt_count == 1 && valid_rreq && !valid_wreq) || ((wrt_count == 1 ) && valid_wreq && valid_rreq))
                            begin
                                empty_flag <= 1'b1;
                            end
                            else
                            begin
                                if (showahead_speed)
                                begin
                                    if (data_shown[write_latency2] == 1'b0)
                                    begin
                                        empty_flag <= 1'b1;
                                    end
                                end
                                else if (showahead_area || legacy_speed)
                                begin
                                    if (data_shown[write_latency1] == 1'b0)
                                    begin
                                        empty_flag <= 1'b1;
                                    end
                                end
                            end
                        end
                        else
                        begin
                            if (!valid_wreq)
                            begin
                                if ((count_id == 1) && !(full_flag))
                                    empty_flag <= 1'b1;
                            end
                        end

                        if (empty_flag)
                        begin
                            if (underflow_checking == "ON")
                            begin
                                if ((use_eab == "OFF") || (!stratix_family))
                                    tmp_q <= {lpm_width{1'b0}};
                            end
                            else
                            begin
                                set_q_to_x_by_empty <= 1'b1;
                                $display ("Warning : Underflow occurred! Fifo output is unknown until the next reset is asserted.");
                                $display ("Time: %0t  Instance: %m", $time);
                            end
                        end
                        else if (read_id >= ((1<<lpm_widthu) - 1))
                        begin
                            if (lpm_showahead == "ON")
                            begin
                                if ((use_eab == "ON") && stratix_family && (showahead_speed || showahead_area))                        
                                begin
                                    if (showahead_speed)
                                    begin
                                        if ((write_latency2 == 0) || (data_ready[0] == 1'b1))
                                        begin
                                            if (data_shown[0] == 1'b1)
                                            begin
                                                tmp_q <= mem_data[0];
                                                data_shown[0] <= 1'b0;
                                                data_ready[0] <= 1'b0;
                                            end
                                        end
                                    end
                                    else
                                    begin
                                        if ((count_id == 1) && !(full_flag))
                                        begin
                                            if (underflow_checking == "ON")
                                            begin
                                                if ((use_eab == "OFF") || (!stratix_family))
                                                    tmp_q <= {lpm_width{1'b0}};
                                            end
                                            else
                                                tmp_q <= {lpm_width{1'bX}};
                                        end
                                        else if ((write_latency1 == 0) || (data_ready[0] == 1'b1))
                                        begin
                                            if (data_shown[0] == 1'b1)
                                            begin
                                                tmp_q <= mem_data[0];
                                                data_shown[0] <= 1'b0;
                                                data_ready[0] <= 1'b0;
                                            end
                                        end                            
                                    end
                                end
                                else
                                begin
                                    if ((count_id == 1) && !(full_flag))
                                    begin
                                        if (valid_wreq)
                                            tmp_q <= data;
                                        else
                                            if (underflow_checking == "ON")
                                            begin
                                                if ((use_eab == "OFF") || (!stratix_family))
                                                    tmp_q <= {lpm_width{1'b0}};
                                            end
                                            else
                                                tmp_q <= {lpm_width{1'bX}};
                                    end 
                                    else
                                        tmp_q <= mem_data[0];
                                end
                            end
                            else
                            begin
                                if ((use_eab == "ON") && stratix_family && legacy_speed)
                                begin
                                    if ((write_latency1 == read_id) || (data_ready[read_id] == 1'b1))
                                    begin
                                        if (data_shown[read_id] == 1'b1)
                                        begin
                                            tmp_q <= mem_data[read_id];
                                            data_shown[read_id] <= 1'b0;
                                            data_ready[read_id] <= 1'b0;
                                        end
                                    end
                                    else
                                    begin
                                        tmp_q <= {lpm_width{1'bX}};
                                    end                                  
                                end
                                else
                                    tmp_q <= mem_data[read_id];
                            end

                            read_id <= 0;
                        end // end if (read_id >= ((1<<lpm_widthu) - 1))
                        else
                        begin
                            if (lpm_showahead == "ON")
                            begin
                                if ((use_eab == "ON") && stratix_family && (showahead_speed || showahead_area))
                                begin
                                    if (showahead_speed)
                                    begin
                                        if ((write_latency2 == read_id+1) || (data_ready[read_id+1] == 1'b1))
                                        begin
                                            if (data_shown[read_id+1] == 1'b1)
                                            begin
                                                tmp_q <= mem_data[read_id + 1];
                                                data_shown[read_id+1] <= 1'b0;
                                                data_ready[read_id+1] <= 1'b0;
                                            end
                                        end
                                    end
                                    else
                                    begin
                                        if ((count_id == 1) && !(full_flag))
                                        begin
                                            if (underflow_checking == "ON")
                                            begin
                                                if ((use_eab == "OFF") || (!stratix_family))
                                                    tmp_q <= {lpm_width{1'b0}};
                                            end
                                            else
                                                tmp_q <= {lpm_width{1'bX}};
                                        end
                                        else if ((write_latency1 == read_id+1) || (data_ready[read_id+1] == 1'b1))
                                        begin
                                            if (data_shown[read_id+1] == 1'b1)
                                            begin
                                                tmp_q <= mem_data[read_id + 1];
                                                data_shown[read_id+1] <= 1'b0;
                                                data_ready[read_id+1] <= 1'b0;
                                            end
                                        end
                                    end
                                end
                                else
                                begin
                                    if ((count_id == 1) && !(full_flag))
                                    begin
                                        if ((use_eab == "OFF") && stratix_family)
                                        begin
                                            if (valid_wreq)
                                            begin
                                                tmp_q <= data;
                                            end
                                            else
                                            begin
                                                if (underflow_checking == "ON")
                                                begin
                                                    if ((use_eab == "OFF") || (!stratix_family))
                                                        tmp_q <= {lpm_width{1'b0}};
                                                end
                                                else
                                                    tmp_q <= {lpm_width{1'bX}};
                                            end
                                        end
                                        else
                                        begin
                                            tmp_q <= {lpm_width{1'bX}};
                                        end
                                    end
                                    else
                                        tmp_q <= mem_data[read_id + 1];
                                end
                            end
                            else
                            begin
                                if ((use_eab == "ON") && stratix_family && legacy_speed)
                                begin
                                    if ((write_latency1 == read_id) || (data_ready[read_id] == 1'b1))
                                    begin
                                        if (data_shown[read_id] == 1'b1)
                                        begin
                                            tmp_q <= mem_data[read_id];
                                            data_shown[read_id] <= 1'b0;
                                            data_ready[read_id] <= 1'b0;
                                        end
                                    end
                                    else
                                    begin
                                        tmp_q <= {lpm_width{1'bX}};
                                    end                                
                                end
                                else
                                    tmp_q <= mem_data[read_id];
                            end

                            read_id <= read_id + 1;            
                        end
                    end
                end

                // WRITE operation
                if (valid_wreq)
                begin
                    if (!(set_q_to_x || set_q_to_x_by_empty))
                    begin
                        if (full_flag && (overflow_checking == "OFF"))
                        begin
                            set_q_to_x <= 1'b1;
                            $display ("Warning : Overflow occurred! Fifo output is unknown until the next reset is asserted.");
                            $display ("Time: %0t  Instance: %m", $time);
                        end
                        else
                        begin
                            mem_data[write_id] <= data;
                            write_flag <= 1'b1;
    
                            if (!((use_eab == "ON") && stratix_family && (showahead_speed || showahead_area || legacy_speed)))
                            begin
                                empty_flag <= 1'b0;
                            end
                            else
                            begin
                                empty_latency1 <= 1'b0;
                            end
    
                            if (!valid_rreq)                
                                wrt_count <= wrt_count + 1;
    
                            if (!valid_rreq)
                            begin
                                if (count_id >= (1 << lpm_widthu) - 1)
                                    count_id <= 0;
                                else
                                    count_id <= count_id + 1;               
                            end
                            else
                            begin
                                if (allow_rwcycle_when_full == "OFF")
                                    full_flag <= 1'b0;
                            end
    
                            if (!(stratix_family) || (stratix_family && !(showahead_speed || showahead_area || legacy_speed)))
                            begin                
                                if (!valid_rreq)
                                    if ((count_id == lpm_numwords - 1) && (empty_flag == 1'b0))
                                        full_flag <= 1'b1;
                            end
                            else
                            begin   
                                if (!valid_rreq)
                                    if (count_id == lpm_numwords - 1)
                                        full_flag <= 1'b1;
                            end
    
                            if (lpm_showahead == "ON")
                            begin
                                if ((use_eab == "ON") && stratix_family && (showahead_speed || showahead_area))
                                begin
                                    write_latency1 <= write_id;                    
                                    data_shown[write_id] <= 1'b1;
                                    data_ready[write_id] <= 1'bx;
                                end
                                else
                                begin 
                                    if ((use_eab == "OFF") && stratix_family && (count_id == 0) && (!full_flag))
                                    begin
                                        tmp_q <= data;
                                    end
                                    else
                                    begin
                                        if ((!empty_flag) && (!valid_rreq))
                                        begin
                                            tmp_q <= mem_data[read_id];
                                        end
                                    end
                                end
                            end
                            else
                            begin
                                if ((use_eab == "ON") && stratix_family && legacy_speed) 
                                begin
                                    write_latency1 <= write_id;                    
                                    data_shown[write_id] <= 1'b1;
                                    data_ready[write_id] <= 1'bx;
                                end
                            end
                        end
                    end   
                end    

                if (almost_full_value == 0)
                    almost_full_flag <= 1'b1;
                else if (lpm_numwords > almost_full_value)
                begin
                    if (almost_full_flag)
                    begin
                        if ((count_id == almost_full_value) && !wrreq && rdreq)
                            almost_full_flag <= 1'b0;
                    end
                    else
                    begin
                        if ((almost_full_value == 1) && (count_id == 0) && wrreq)
                            almost_full_flag <= 1'b1;
                        else if ((almost_full_value > 1) && (count_id == almost_full_value - 1)
                                && wrreq && !rdreq)
                            almost_full_flag <= 1'b1;
                    end
                end

                if (almost_empty_value == 0)
                    almost_empty_flag <= 1'b0;
                else if (lpm_numwords > almost_empty_value)
                begin
                    if (almost_empty_flag)
                    begin
                        if ((almost_empty_value == 1) && (count_id == 0) && wrreq)
                            almost_empty_flag <= 1'b0;
                        else if ((almost_empty_value > 1) && (count_id == almost_empty_value - 1)
                                && wrreq && !rdreq)
                            almost_empty_flag <= 1'b0;
                    end
                    else
                    begin
                        if ((count_id == almost_empty_value) && !wrreq && rdreq)
                            almost_empty_flag <= 1'b1;
                    end
                end
            end

            if ((use_eab == "ON") && stratix_family)
            begin
                if (showahead_speed)
                begin
                    write_latency2 <= write_latency1;
                    write_latency3 <= write_latency2;
                    if (write_latency3 !== write_latency2)
                        data_ready[write_latency2] <= 1'b1;
                                    
                    empty_latency2 <= empty_latency1;

                    if (data_shown[write_latency2]==1'b1)
                    begin
                        if ((read_id == write_latency2) || aclr || sclr)
                        begin
                            if (!(aclr === 1'b1) && !(sclr === 1'b1))                        
                            begin
                                if (write_latency2 !== 1'bx)
                                begin
                                    tmp_q <= mem_data[write_latency2];
                                    data_shown[write_latency2] <= 1'b0;
                                    data_ready[write_latency2] <= 1'b0;
    
                                    if (!valid_rreq)
                                        empty_flag <= empty_latency2;
                                end
                            end
                        end
                    end
                end
                else if (showahead_area)
                begin
                    write_latency2 <= write_latency1;
                    if (write_latency2 !== write_latency1)
                        data_ready[write_latency1] <= 1'b1;

                    if (data_shown[write_latency1]==1'b1)
                    begin
                        if ((read_id == write_latency1) || aclr || sclr)
                        begin
                            if (!(aclr === 1'b1) && !(sclr === 1'b1))
                            begin
                                if (write_latency1 !== 1'bx)
                                begin
                                    tmp_q <= mem_data[write_latency1];
                                    data_shown[write_latency1] <= 1'b0;
                                    data_ready[write_latency1] <= 1'b0;

                                    if (!valid_rreq)
                                    begin
                                        empty_flag <= empty_latency1;
                                    end
                                end
                            end
                        end
                    end                            
                end
                else
                begin
                    if (legacy_speed)
                    begin
                        write_latency2 <= write_latency1;
                        if (write_latency2 !== write_latency1)
                            data_ready[write_latency1] <= 1'b1;

                            empty_flag <= empty_latency1;

                        if ((wrt_count == 1 && !valid_wreq && valid_rreq) || aclr || sclr)
                        begin
                            empty_flag <= 1'b1;
                            empty_latency1 <= 1'b1;
                        end
                        else
                        begin
                            if ((wrt_count == 1) && valid_wreq && valid_rreq)
                            begin
                                empty_flag <= 1'b1;
                            end
                        end
                    end
                end
            end
        end
    end

    always @(negedge clock)
    begin
        if (write_flag)
        begin
            write_flag <= 1'b0;

            if (sclr || aclr || (write_id >= ((1 << lpm_widthu) - 1)))
                write_id <= 0;
            else
                write_id <= write_id + 1;
        end

        if (!(stratix_family))
        begin
            if (!empty)
            begin
                if ((lpm_showahead == "ON") && ($time > 0))
                    tmp_q <= mem_data[read_id];
            end
        end
    end

    always @(full_flag)
    begin
        if (lpm_numwords == almost_full_value)
            if (full_flag)
                almost_full_flag = 1'b1;
            else
                almost_full_flag = 1'b0;

        if (lpm_numwords == almost_empty_value)
            if (full_flag)
                almost_empty_flag = 1'b0;
            else
                almost_empty_flag = 1'b1;
    end

// CONTINOUS ASSIGNMENT   
    assign q = (set_q_to_x || set_q_to_x_by_empty)? {lpm_width{1'bX}} : tmp_q;
    assign full = (set_q_to_x || set_q_to_x_by_empty)? 1'bX : full_flag;
    assign empty = (set_q_to_x || set_q_to_x_by_empty)? 1'bX : empty_flag;
    assign usedw = (set_q_to_x || set_q_to_x_by_empty)? {lpm_widthu{1'bX}} : count_id;
    assign almost_full = (set_q_to_x || set_q_to_x_by_empty)? 1'bX : almost_full_flag;
    assign almost_empty = (set_q_to_x || set_q_to_x_by_empty)? 1'bX : almost_empty_flag;

endmodule // scfifo
// END OF MODULE

