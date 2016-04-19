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


/*`timescale 1 ps / 1 ps*/
//module lcell (in, out);
    //input in;
    //output out;

    //assign out = in;
//endmodule

//// BEGINNING OF MODULE
//`timescale 1 ps / 1 ps

//`define TRUE 1 
//`define FALSE 0 
//`define NULL 0
//`define EOF -1
//`define MAX_BUFFER_SZ   2048
//`define MAX_NAME_SZ     256
//`define MAX_WIDTH       1024
//`define COLON           ":"
//`define DOT             "."
//`define NEWLINE         "\n"
//`define CARRIAGE_RETURN  8'h0D
//`define SPACE           " "
//`define TAB             "\t"
//`define OPEN_BRACKET    "["
//`define CLOSE_BRACKET   "]"
//`define OFFSET          9
//`define H10             8'h10
//`define H10000          20'h10000
//`define AWORD           8
//`define MASK15          32'h000000FF
//`define EXT_STR         "ver"
//`define PERCENT         "%"
//`define MINUS           "-"
//`define SEMICOLON       ";"
//`define EQUAL           "="

//// MODULE DECLARATION
//module ALTERA_MF_MEMORY_INITIALIZATION;

//[>**************************************************************<]
//[> convert uppercase character values to lowercase.             <]
//[>**************************************************************<]
//function [8:1] tolower;
    //input [8:1] given_character;
    //reg [8:1] conv_char;

//begin
    //if ((given_character >= 65) && (given_character <= 90)) // ASCII number of 'A' is 65, 'Z' is 90
    //begin
        //conv_char = given_character + 32; // 32 is the difference in the position of 'A' and 'a' in the ASCII char set
        //tolower = conv_char;
    //end
    //else
        //tolower = given_character;    
//end
//endfunction
    
//[>**************************************************************<]
//[> Read in Altera-mif format data to verilog format data.       <]
//[>**************************************************************<]
//task convert_mif2ver;
    //input[`MAX_NAME_SZ*8 : 1] in_file;
    //input width;
    //output [`MAX_NAME_SZ*8 : 1] out_file;
    //reg [`MAX_NAME_SZ*8 : 1] in_file;
    //reg [`MAX_NAME_SZ*8 : 1] out_file;
    //reg [`MAX_NAME_SZ*8 : 1] buffer;
    //reg [`MAX_WIDTH : 0] memory_data1, memory_data2;
    //reg [8 : 1] c;
    //reg [3 : 0] hex, tmp_char;
    //reg [24 : 1] address_radix, data_radix;
    //reg get_width;
    //reg get_depth;
    //reg get_data_radix;
    //reg get_address_radix;
    //reg width_found;
    //reg depth_found;
    //reg data_radix_found;
    //reg address_radix_found;
    //reg get_address_data_pairs;
    //reg get_address;
    //reg get_data;
    //reg display_address;
    //reg invalid_address;
    //reg get_start_address;
    //reg get_end_address;
    //reg done;
    //reg error_status;
    //reg first_rec;
    //reg last_rec;

    //integer width;
    //integer memory_width, memory_depth;
    //integer value;
    //integer ifp, ofp, r, r2;
    //integer i, j, k, m, n;
    
    //integer off_addr, nn, address, tt, cc, aah, aal, dd, sum ;
    //integer start_address, end_address;
    //integer line_no;
    //integer character_count;
    //integer comment_with_percent_found;
    //integer comment_with_double_minus_found;

//begin
        //done = `FALSE;
        //error_status = `FALSE;
        //first_rec = `FALSE;
        //last_rec = `FALSE;
        //comment_with_percent_found = `FALSE;
        //comment_with_double_minus_found = `FALSE;

        //off_addr= 0;
        //nn= 0;
        //address = 0;
        //start_address = 0;
        //end_address = 0;
        //tt= 0;
        //cc= 0;
        //aah= 0;
        //aal= 0;
        //dd= 0;
        //sum = 0;
        //line_no = 1;
        //c = 0;
        //hex = 0;
        //value = 0;
        //buffer = "";
        //character_count = 0;
        //memory_width = 0;
        //memory_depth = 0;
        //memory_data1 = {(`MAX_WIDTH+1) {1'b0}};
        //memory_data2 = {(`MAX_WIDTH+1) {1'b0}};
        //address_radix = "hex";
        //data_radix = "hex";
        //get_width = `FALSE;
        //get_depth = `FALSE;
        //get_data_radix = `FALSE;
        //get_address_radix = `FALSE;
        //width_found = `FALSE;
        //depth_found = `FALSE;
        //data_radix_found = `FALSE;
        //address_radix_found = `FALSE;
        //get_address_data_pairs = `FALSE;
        //display_address = `FALSE;
        //invalid_address = `FALSE;
        //get_start_address = `FALSE;
        //get_end_address = `FALSE;

        //if((in_file[4*8 : 1] == ".dat") || (in_file[4*8 : 1] == ".DAT"))
            //out_file = in_file;
        //else
        //begin
            //ifp = $fopen(in_file, "r");

            //if (ifp == `NULL)
            //begin
                //$display("ERROR: cannot read %0s.", in_file);
                //done = `TRUE;
            //end
        
            //out_file = in_file;
            
            //if((out_file[4*8 : 1] == ".mif") || (out_file[4*8 : 1] == ".MIF"))
                //out_file[3*8 : 1] = `EXT_STR;
            //else
            //begin
                //$display("ERROR: Invalid input file name %0s. Expecting file with .mif extension and Altera-mif data format.", in_file);
                //done = `TRUE;
            //end

            //if (!done)
            //begin            
                //ofp = $fopen(out_file, "w");

                //if (ofp == `NULL)
                //begin
                    //$display("ERROR : cannot write %0s.", out_file);
                    //done = `TRUE;
                //end
            //end
            
            //while((!done) && (!error_status))
            //begin : READER
 
                //r = $fgetc(ifp);

                //if (r == `EOF)
                //begin
                //// to do : add more checking on whether a particular assigment(width, depth, memory/address) are mising
                    //if(!first_rec)
                    //begin
                        //error_status = `TRUE;
                        //$display("WARNING: %0s, Intel-hex data file is empty.", in_file);
                        //$display ("Time: %0t  Instance: %m", $time);
                    //end
                    //else if (!get_address_data_pairs)
                    //begin
                        //error_status = `TRUE;
                        //$display("ERROR: %0s, line %0d, Missing `content begin` statement.", in_file, line_no);
                    //end
                    //else if(!last_rec)
                    //begin
                        //error_status = `TRUE;
                        //$display("ERROR: %0s, line %0d, Missing `end` statement.", in_file, line_no);
                    //end
                    //done = `TRUE;
                //end
                //else if ((r == `NEWLINE) || (r == `CARRIAGE_RETURN))
                //begin                    
                    //if ((buffer == "contentbegin") && (get_address_data_pairs == `FALSE))
                    //begin
                        //get_address_data_pairs = `TRUE;
                        //get_address = `TRUE;
                        //buffer = "";
                    //end
                    //else if (buffer == "content")
                    //begin
                        //// continue to next character
                    //end
                    //else
                    //if (buffer != "")
                    //begin
                        //// found invalid syntax in the particular line.
                        //error_status = `TRUE;
                        //$display("ERROR: %0s, line %0d, Invalid Altera-mif record.", in_file, line_no);
                        //disable READER;
                    //end
                    //line_no = line_no +1;
                    
                //end
                //else if ((r == `SPACE) || (r == `TAB))
                //begin
                    //// continue to next character;
                //end
                //else if (r == `PERCENT)
                //begin
                    //// Ignore all the characters which which is part of comment.
                    //r = $fgetc(ifp);

                    //while ((r != `PERCENT) && (r != `NEWLINE) && (r != `CARRIAGE_RETURN))
                    //begin
                        //r = $fgetc(ifp);                      
                    //end

                    //if ((r == `NEWLINE) || (r == `CARRIAGE_RETURN))
                    //begin
                        //line_no = line_no +1;

                        //if ((buffer == "contentbegin") && (get_address_data_pairs == `FALSE))
                        //begin
                            //get_address_data_pairs = `TRUE;
                            //get_address = `TRUE;
                            //buffer = "";
                        //end
                    //end
                //end
                //else if (r == `MINUS)
                //begin
                    //r = $fgetc(ifp);
                    //if (r == `MINUS)
                    //begin
                        //// Ignore all the characters which which is part of comment.
                        //r = $fgetc(ifp);
    
                        //while ((r != `NEWLINE) && (r != `CARRIAGE_RETURN))
                        //begin
                            //r = $fgetc(ifp);
                            
                        //end
    
                        //if ((r == `NEWLINE) || (r == `CARRIAGE_RETURN))
                        //begin
                            //line_no = line_no +1;

                            //if ((buffer == "contentbegin") && (get_address_data_pairs == `FALSE))
                            //begin
                                //get_address_data_pairs = `TRUE;
                                //get_address = `TRUE;
                                //buffer = "";
                            //end
                        //end
                    //end
                    //else
                    //begin
                        //error_status = `TRUE;
                        //$display("ERROR: %0s, line %0d, Invalid Altera-mif record.", in_file, line_no);
                        //done = `TRUE;
                        //disable READER;
                    //end
                //end
                //else if (r == `EQUAL)
                //begin
                    //if (buffer == "width")
                    //begin
                        //if (width_found == `FALSE)
                        //begin
                            //get_width = `TRUE;
                            //buffer = "";
                        //end
                        //else
                        //begin
                            //error_status = `TRUE;
                            //$display("ERROR: %0s, line %0d, Width has already been specified once.", in_file, line_no);
                        //end
                    //end
                    //else if (buffer == "depth")
                    //begin
                        //get_depth = `TRUE;
                        //buffer = ""; 
                    //end
                    //else if (buffer == "data_radix")
                    //begin
                        //get_data_radix = `TRUE;
                        //buffer = "";
                    //end
                    //else if (buffer == "address_radix")
                    //begin
                        //get_address_radix = `TRUE;
                        //buffer = "";
                    //end
                    //else
                    //begin
                        //error_status = `TRUE;
                        //$display("ERROR: %0s, line %0d, Unknown setting (%0s).", in_file, line_no, buffer);
                    //end
                //end
                //else if (r == `COLON)
                //begin
                    //if (!get_address_data_pairs)
                    //begin
                        //error_status = `TRUE;
                        //$display("ERROR: %0s, line %0d, Missing `content begin` statement.", in_file, line_no);
                    //end
                    //else if (invalid_address == `TRUE)
                    //begin
                        //error_status = `TRUE;
                        //$display("ERROR: %0s, line %0d, Invalid data record.", in_file, line_no);
                    //end
                    //begin
                        //get_address = `FALSE;
                        //get_data = `TRUE;
                        //display_address = `TRUE;
                    //end
                //end
                //else if (r == `DOT)
                //begin
                    //r = $fgetc(ifp);
                    //if (r == `DOT)
                    //begin
                        //if (get_start_address == `TRUE)
                        //begin
                            //start_address = address;
                            //address = 0; 
                            //get_start_address = `FALSE;
                            //get_end_address = `TRUE;
                        //end
                        //else
                        //begin
                            //error_status = `TRUE;
                            //$display("ERROR: %0s, line %0d, Invalid Altera-mif record.", in_file, line_no);
                            //done = `TRUE;
                            //disable READER;
                        //end
                    //end
                    //else
                    //begin
                        //error_status = `TRUE;
                        //$display("ERROR: %0s, line %0d, Invalid Altera-mif record.", in_file, line_no);
                        //done = `TRUE;
                        //disable READER;
                    //end
                //end
                //else if (r == `OPEN_BRACKET)
                //begin
                    //get_start_address = `TRUE;
                //end
                //else if (r == `CLOSE_BRACKET)
                //begin
                    //if (get_end_address == `TRUE)
                    //begin
                        //end_address = address;
                        //address = 0; 
                        //get_end_address = `FALSE;
                    //end
                    //else
                    //begin
                        //error_status = `TRUE;
                        //$display("ERROR: %0s, line %0d, Invalid Altera-mif record.", in_file, line_no);
                        //done = `TRUE;
                        //disable READER;
                    //end
                //end                
                //else if (r == `SEMICOLON)
                //begin
                    //if (get_width == `TRUE)
                    //begin
                        //width_found = `TRUE;
                        //memory_width = value;
                        //value = 0;
                        //get_width = `FALSE;
                    //end
                    //else if (get_depth == `TRUE)
                    //begin
                        //depth_found = `TRUE;
                        //memory_depth = value;
                        //value = 0;
                        //get_depth = `FALSE;
                    //end
                    //else if (get_data_radix == `TRUE)
                    //begin
                        //data_radix_found = `TRUE;
                        //get_data_radix = `FALSE;

                        //if ((buffer == "bin") || (buffer == "oct") || (buffer == "dec") || (buffer == "uns") ||
                            //(buffer == "hex"))
                        //begin
                            //data_radix = buffer[24 : 1];
                        //end
                        //else
                        //begin
                            //error_status = `TRUE;
                            //$display("ERROR: %0s, line %0d, Invalid assignment (%0s) to data_radix.", in_file, line_no, buffer);
                        //end
                        //buffer = "";
                    //end
                    //else if (get_address_radix == `TRUE)
                    //begin
                        //address_radix_found = `TRUE;
                        //get_address_radix = `FALSE;

                        //if ((buffer == "bin") || (buffer == "oct") || (buffer == "dec") || (buffer == "uns") ||
                            //(buffer == "hex"))
                        //begin
                            //address_radix = buffer[24 : 1];
                        //end
                        //else
                        //begin
                            //error_status = `TRUE;
                            //$display("ERROR: %0s, line %0d, Invalid assignment (%0s) to address radix.", in_file, line_no, buffer);
                        //end
                        //buffer = "";
                    //end
                    //else if (buffer == "end")
                    //begin
                        //if (get_address_data_pairs == `TRUE)
                        //begin
                            //last_rec = `TRUE;
                            //buffer = "";
                        //end
                        //else
                        //begin
                            //error_status = `TRUE;
                            //$display("ERROR: %0s, line %0d, Missing `content begin` statement.", in_file, line_no);
                        //end
                    //end
                    //else if (get_data == `TRUE)
                    //begin
                        //get_address = `TRUE;
                        //get_data = `FALSE;
                        //buffer = "";
                        //character_count = 0;
                        
                        //if (start_address != end_address)
                        //begin
                            //for (address = start_address; address <= end_address; address = address+1)
                            //begin
                                //$fdisplay(ofp,"@%0h", address);
                                
                                //for (i = memory_width -1; i >= 0; i = i-1 )
                                //begin
                                    //hex[(i % 4)] =  memory_data1[i];
                                    
                                    //if ((i % 4) == 0)
                                    //begin
                                        //$fwrite(ofp, "%0h", hex);
                                        //hex = 0;
                                    //end
                                //end
        
                                //$fwrite(ofp, "\n");
                            //end
                            //start_address = 0;
                            //end_address = 0;
                            //address = 0;
                            //hex = 0;
                            //memory_data1 = {(`MAX_WIDTH+1) {1'b0}};
                        //end
                        //else
                        //begin
                            //if (display_address == `TRUE)
                            //begin
                                //$fdisplay(ofp,"@%0h", address);
                                //display_address = `FALSE;
                            //end
                            
                            //for (i = memory_width -1; i >= 0; i = i-1 )
                            //begin
                                //hex[(i % 4)] =  memory_data1[i];
                                
                                //if ((i % 4) == 0)
                                //begin
                                    //$fwrite(ofp, "%0h", hex);
                                    //hex = 0;
                                //end
                            //end
    
                            //$fwrite(ofp, "\n");                      
                            //address = 0;
                            //hex = 0;
                            //memory_data1 = {(`MAX_WIDTH+1) {1'b0}};
                        //end
                    //end
                    //else
                    //begin
                        //error_status = `TRUE;
                        //$display("ERROR: %0s, line %0d, Invalid assigment.", in_file, line_no);
                    //end
                //end
                //else if ((get_width == `TRUE) || (get_depth == `TRUE))
                //begin
                    //if ((r >= "0") && (r <= "9"))
                        //value = (value * 10) + (r - 'h30);
                    //else
                    //begin
                        //error_status = `TRUE;
                        //$display("ERROR: %0s, line %0d, Invalid assignment to width/depth.", in_file, line_no);
                    //end
                //end
                //else if (get_address == `TRUE)
                //begin
                    //if (address_radix == "hex")
                    //begin
                        //if ((r >= "0") && (r <= "9"))
                            //value = (r - 'h30);
                        //else if ((r >= "A") && (r <= "F"))
                            //value = 10 + (r - 'h41);
                        //else if ((r >= "a") && (r <= "f"))
                            //value = 10 + (r - 'h61);
                        //else
                        //begin
                            //invalid_address = `TRUE;
                        //end
                            
                        //address = (address * 16) + value;
                    //end
                    //else if ((address_radix == "dec"))
                    //begin
                        //if ((r >= "0") && (r <= "9"))
                            //value = (r - 'h30);
                        //else
                        //begin
                            //invalid_address = `TRUE;
                        //end
                            
                        //address = (address * 10) + value;
                    //end
                    //else if (address_radix == "uns")
                    //begin
                        //if ((r >= "0") && (r <= "9"))
                            //value = (r - 'h30);
                        //else
                        //begin
                            //invalid_address = `TRUE;
                        //end
                            
                        //address = (address * 10) + value; 
                    //end
                    //else if (address_radix == "bin")
                    //begin
                        //if ((r >= "0") && (r <= "1"))
                            //value = (r - 'h30);
                        //else
                        //begin
                            //invalid_address = `TRUE;
                        //end
                            
                        //address = (address * 2) + value;
                    //end
                    //else if (address_radix == "oct")
                    //begin
                        //if ((r >= "0") && (r <= "7"))
                            //value = (r - 'h30);
                        //else
                        //begin
                            //invalid_address = `TRUE;
                        //end
                            
                        //address = (address * 8) + value;
                    //end
                    
                    //if ((r >= 65) && (r <= 90))
                        //c = tolower(r); 
                    //else
                        //c = r;

                    //{tmp_char,buffer} = {buffer, c};                    
                //end
                //else if (get_data == `TRUE)
                //begin                    
                    //character_count = character_count +1;

                    //if (data_radix == "hex")
                    //begin
                        //if ((r >= "0") && (r <= "9"))
                            //value = (r - 'h30);
                        //else if ((r >= "A") && (r <= "F"))
                            //value = 10 + (r - 'h41);
                        //else if ((r >= "a") && (r <= "f"))
                            //value = 10 + (r - 'h61);
                        //else
                        //begin
                            //error_status = `TRUE;
                            //$display("ERROR: %0s, line %0d, Invalid data record.", in_file, line_no);
                            //done = `TRUE;
                            //disable READER;
                        //end
                            
                        //memory_data1 = (memory_data1 * 16) + value;
                    //end
                    //else if ((data_radix == "dec"))
                    //begin
                        //if ((r >= "0") && (r <= "9"))
                            //value = (r - 'h30);
                        //else
                        //begin
                            //error_status = `TRUE;
                            //$display("ERROR: %0s, line %0d, Invalid data record.", in_file, line_no);
                            //done = `TRUE;
                            //disable READER;
                        //end
                            
                        //memory_data1 = (memory_data1 * 10) + value;
                    //end
                    //else if (data_radix == "uns")
                    //begin
                        //if ((r >= "0") && (r <= "9"))
                            //value = (r - 'h30);
                        //else
                        //begin
                            //error_status = `TRUE;
                            //$display("ERROR: %0s, line %0d, Invalid data record.", in_file, line_no);
                            //done = `TRUE;
                            //disable READER;
                        //end
                            
                        //memory_data1 = (memory_data1 * 10) + value; 
                    //end
                    //else if (data_radix == "bin")
                    //begin
                        //if ((r >= "0") && (r <= "1"))
                            //value = (r - 'h30);
                        //else
                        //begin
                            //error_status = `TRUE;
                            //$display("ERROR: %0s, line %0d, Invalid data record.", in_file, line_no);
                            //done = `TRUE;
                            //disable READER;
                        //end
                            
                        //memory_data1 = (memory_data1 * 2) + value;
                    //end
                    //else if (data_radix == "oct")
                    //begin
                        //if ((r >= "0") && (r <= "7"))
                            //value = (r - 'h30);
                        //else
                        //begin
                            //error_status = `TRUE;
                            //$display("ERROR: %0s, line %0d, Invalid data record.", in_file, line_no);
                            //done = `TRUE;
                            //disable READER;
                        //end
                            
                        //memory_data1 = (memory_data1 * 8) + value;
                    //end
                //end
                //else
                //begin
                    //first_rec = `TRUE;
                    
                    //if ((r >= 65) && (r <= 90))
                        //c = tolower(r); 
                    //else
                        //c = r;

                    //{tmp_char,buffer} = {buffer, c};                    
                //end
            //end
            //$fclose(ifp);
            //$fclose(ofp);
        //end
//end
//endtask // convert_mif2ver

//[>**************************************************************<]
//[> Read in Intel-hex format data to verilog format data.        <]
//[>  Intel-hex format    :nnaaaaattddddcc                        <]
//[>**************************************************************<]
//task convert_hex2ver;
    //input[`MAX_NAME_SZ*8 : 1] in_file;
    //input width;
    //output [`MAX_NAME_SZ*8 : 1] out_file;
    //reg [`MAX_NAME_SZ*8 : 1] in_file;
    //reg [`MAX_NAME_SZ*8 : 1] out_file;
    //reg [8:1] c;
    //reg [3:0] hex, tmp_char;
    //reg done;
    //reg error_status;
    //reg first_rec;
    //reg last_rec;
    //reg first_normal_record;
    //reg is_word_address_format;

    //integer width;
    //integer ifp, ofp, r, r2;
    //integer i, j, k, m, n;
    
    //integer off_addr, nn, aaaa, aaaa_pre, tt, cc, aah, aal, dd, sum ;
    //integer line_no;
    //integer divide_factor;

//begin
        //done = `FALSE;
        //error_status = `FALSE;
        //first_rec = `FALSE;
        //last_rec = `FALSE;
        //first_normal_record = `TRUE;
        //is_word_address_format = `FALSE;
        //off_addr= 0;
        //nn= 0;
        //aaaa= 0;
        //aaaa_pre = 0;
        //tt= 0;
        //cc= 0;
        //aah= 0;
        //aal= 0;
        //dd= 0;
        //sum = 0;
        //line_no = 1;
        //c = 0;
        //hex = 0;
        //divide_factor = 1;

        //if((in_file[4*8 : 1] == ".dat") || (in_file[4*8 : 1] == ".DAT"))
            //out_file = in_file;
        //else
        //begin
            //ifp = $fopen(in_file, "r");
            //if (ifp == `NULL)
            //begin
                //$display("ERROR: cannot read %0s.", in_file);
                //done = `TRUE;
            //end
        
            //out_file = in_file;
            
            //if((out_file[4*8 : 1] == ".hex") || (out_file[4*8 : 1] == ".HEX"))
                //out_file[3*8 : 1] = `EXT_STR;
            //else
            //begin
                //$display("ERROR: Invalid input file name %0s. Expecting file with .hex extension and Intel-hex data format.", in_file);
                //done = `TRUE;
            //end
            
            //if (!done)
            //begin            
                //ofp = $fopen(out_file, "w");
                //if (ofp == `NULL)
                //begin
                    //$display("ERROR : cannot write %0s.", out_file);
                    //done = `TRUE;
                //end
            //end
            
            //while((!done) && (!error_status))
            //begin : READER
        
                //r = $fgetc(ifp);
        
                //if (r == `EOF)
                //begin
                    //if(!first_rec)
                    //begin
                        //error_status = `TRUE;
                        //$display("WARNING: %0s, Intel-hex data file is empty.", in_file);
                        //$display ("Time: %0t  Instance: %m", $time);
                    //end
                    //else if(!last_rec)
                    //begin
                        //error_status = `TRUE;
                        //$display("ERROR: %0s, line %0d, Missing the last record.", in_file, line_no);
                    //end
                //end
                //else if (r == `COLON)
                //begin
                    //first_rec = `TRUE;
                    //nn= 0;
                    //aaaa_pre = aaaa;
                    //aaaa= 0;
                    //tt= 0;
                    //cc= 0;
                    //aah= 0;
                    //aal= 0;
                    //dd= 0;
                    //sum = 0;
        
                    //// get record length bytes
                    //for (i = 0; i < 2; i = i+1)
                    //begin
                        //r = $fgetc(ifp);
                        
                        //if ((r >= "0") && (r <= "9"))
                            //nn = (nn * 16) + (r - 'h30);
                        //else if ((r >= "A") && (r <= "F"))
                            //nn = (nn * 16) + 10 + (r - 'h41);
                        //else if ((r >= "a") && (r <= "f"))
                            //nn = (nn * 16) + 10 + (r - 'h61);
                        //else
                        //begin
                            //error_status = `TRUE;
                            //$display("ERROR: %0s, line %0d, Invalid INTEL HEX record.", in_file, line_no);
                            //done = `TRUE;
                            //disable READER;
                        //end
                    //end
        
                    //// get address bytes
                    //for (i = 0; i < 4; i = i+1)
                    //begin
                        //r = $fgetc(ifp);
                        
                        //if ((r >= "0") && (r <= "9"))
                            //hex = (r - 'h30);
                        //else if ((r >= "A") && (r <= "F"))
                            //hex = 10 + (r - 'h41);
                        //else if ((r >= "a") && (r <= "f"))
                            //hex = 10 + (r - 'h61);
                        //else
                        //begin
                            //error_status = `TRUE;
                            //$display("ERROR: %0s, line %0d, Invalid INTEL HEX record.", in_file, line_no);
                            //done = `TRUE;
                            //disable READER;
                        //end
                        
                        //aaaa = (aaaa * 16) + hex;
                        
                        //if (i < 2)
                            //aal = (aal * 16) + hex;
                        //else
                            //aah = (aah * 16) + hex;
                    //end
                    
                    //// get record type bytes   
                    //for (i = 0; i < 2; i = i+1)
                    //begin
                        //r = $fgetc(ifp);
                        
                        //if ((r >= "0") && (r <= "9"))
                            //tt = (tt * 16) + (r - 'h30);
                        //else if ((r >= "A") && (r <= "F"))
                            //tt = (tt * 16) + 10 + (r - 'h41);
                        //else if ((r >= "a") && (r <= "f"))
                            //tt = (tt * 16) + 10 + (r - 'h61);
                        //else
                        //begin
                            //error_status = `TRUE;
                            //$display("ERROR: %0s, line %0d, Invalid INTEL HEX record.", in_file, line_no);
                            //done = `TRUE;
                            //disable READER;
                        //end
                    //end
        
                    //if((tt == 2) && (nn != 2) )
                    //begin
                        //error_status = `TRUE;
                        //$display("ERROR: %0s, line %0d, Invalid data record.", in_file, line_no);
                    //end
                    //else
                    //begin
        
                        //// get the sum of all the bytes for record length, address and record types
                        //sum = nn + aah + aal + tt ; 
                   
                        //// check the record type
                        //case(tt)
                            //// normal_record
                            //8'h00 :
                            //begin
                                //first_rec = `TRUE;
                                //i = 0;
                                //k = width / `AWORD;
                                //if ((width % `AWORD) != 0)
                                    //k = k + 1; 
        
                                //if ((first_normal_record == `FALSE) &&(aaaa != k))
                                    //is_word_address_format = `TRUE;
                                
                                //first_normal_record = `FALSE;

                                //if ((aaaa == k) && (is_word_address_format == `FALSE))
                                    //divide_factor = k;

                                //// k = no. of bytes per entry.
                                //while (i < nn)
                                //begin
                                    //$fdisplay(ofp,"@%0h", (aaaa + off_addr)/divide_factor);

                                    //for (j = 1; j <= k; j = j +1)
                                    //begin
                                        //if ((k - j +1) > nn)
                                        //begin
                                            //for(m = 1; m <= 2; m= m+1)
                                            //begin
                                                //if((((k-j)*8) + ((3-m)*4) - width) < 4)
                                                    //$fwrite(ofp, "0");
                                            //end
                                        //end
                                        //else
                                        //begin
                                            //// get the data bytes
                                            //for(m = 1; m <= 2; m= m+1)
                                            //begin                    
                                                //r = $fgetc(ifp);
                            
                                                //if ((r >= "0") && (r <= "9"))
                                                    //hex = (r - 'h30);
                                                //else if ((r >= "A") && (r <= "F"))
                                                    //hex = 10 + (r - 'h41);
                                                //else if ((r >= "a") && (r <= "f"))
                                                    //hex = 10 + (r - 'h61);
                                                //else
                                                //begin
                                                    //error_status = `TRUE;
                                                    //$display("ERROR: %0s, line %0d, Invalid INTEL HEX record.", in_file, line_no);
                                                    //done = `TRUE;
                                                    //disable READER;
                                                //end
            
                                                //if((((k-j)*8) + ((3-m)*4) - width) < 4)
                                                    //$fwrite(ofp, "%h", hex);
                                                //dd = (dd * 16) + hex;
            
                                                //if(m % 2 == 0)
                                                //begin
                                                    //sum = sum + dd;
                                                    //dd = 0;
                                                //end
                                            //end
                                        //end
                                    //end
                                    //$fwrite(ofp, "\n");
        
                                    //i = i + k;
                                    //aaaa = aaaa + 1;
                                //end // end of while (i < nn)
                            //end
                            //// last record
                            //8'h01: 
                            //begin
                                //last_rec = `TRUE;
                                //done = `TRUE;
                            //end
                            //// address base record
                            //8'h02:
                            //begin
                                //off_addr= 0;

                                //// get the extended segment address record
                                //for(i = 1; i <= (nn*2); i= i+1)
                                //begin                    
                                    //r = $fgetc(ifp);
                
                                    //if ((r >= "0") && (r <= "9"))
                                        //hex = (r - 'h30);
                                    //else if ((r >= "A") && (r <= "F"))
                                        //hex = 10 + (r - 'h41);
                                    //else if ((r >= "a") && (r <= "f"))
                                        //hex = 10 + (r - 'h61);
                                    //else
                                    //begin
                                        //error_status = `TRUE;
                                        //$display("ERROR: %0s, line %0d, Invalid INTEL HEX record.", in_file, line_no);
                                        //done = `TRUE;
                                        //disable READER;
                                    //end
        
                                    //off_addr = (off_addr * `H10) + hex;        
                                    //dd = (dd * 16) + hex;
        
                                    //if(i % 2 == 0)
                                    //begin
                                        //sum = sum + dd;
                                        //dd = 0;
                                    //end
                                //end
            
                                //off_addr = off_addr * `H10;
                            //end
                            //// address base record
                            //8'h03:
                                //// get the start segment address record
                                //for(i = 1; i <= (nn*2); i= i+1)
                                //begin                    
                                    //r = $fgetc(ifp);

                                    //if ((r >= "0") && (r <= "9"))
                                        //hex = (r - 'h30);
                                    //else if ((r >= "A") && (r <= "F"))
                                        //hex = 10 + (r - 'h41);
                                    //else if ((r >= "a") && (r <= "f"))
                                        //hex = 10 + (r - 'h61);
                                    //else
                                    //begin
                                        //error_status = `TRUE;
                                        //$display("ERROR: %0s, line %0d, Invalid INTEL HEX record.", in_file, line_no);
                                        //done = `TRUE;
                                        //disable READER;
                                    //end
                                    //dd = (dd * 16) + hex;
        
                                    //if(i % 2 == 0)
                                    //begin
                                        //sum = sum + dd;
                                        //dd = 0;
                                    //end
                                //end
                            //// address base record
                            //8'h04:
                            //begin
                                //off_addr= 0;

                                //// get the extended linear address record
                                //for(i = 1; i <= (nn*2); i= i+1)
                                //begin                    
                                    //r = $fgetc(ifp);

                                    //if ((r >= "0") && (r <= "9"))
                                        //hex = (r - 'h30);
                                    //else if ((r >= "A") && (r <= "F"))
                                        //hex = 10 + (r - 'h41);
                                    //else if ((r >= "a") && (r <= "f"))
                                        //hex = 10 + (r - 'h61);
                                    //else
                                    //begin
                                        //error_status = `TRUE;
                                        //$display("ERROR: %0s, line %0d, Invalid INTEL HEX record.", in_file, line_no);
                                        //done = `TRUE;
                                        //disable READER;
                                    //end
        
                                    //off_addr = (off_addr * `H10) + hex;        
                                    //dd = (dd * 16) + hex;
        
                                    //if(i % 2 == 0)
                                    //begin
                                        //sum = sum + dd;
                                        //dd = 0;
                                    //end
                                //end
            
                                //off_addr = off_addr * `H10000;
                            //end
                            //// address base record
                            //8'h05:
                                //// get the start linear address record
                                //for(i = 1; i <= (nn*2); i= i+1)
                                //begin                    
                                    //r = $fgetc(ifp);

                                    //if ((r >= "0") && (r <= "9"))
                                        //hex = (r - 'h30);
                                    //else if ((r >= "A") && (r <= "F"))
                                        //hex = 10 + (r - 'h41);
                                    //else if ((r >= "a") && (r <= "f"))
                                        //hex = 10 + (r - 'h61);
                                    //else
                                    //begin
                                        //error_status = `TRUE;
                                        //$display("ERROR: %0s, line %0d, Invalid INTEL HEX record.", in_file, line_no);
                                        //done = `TRUE;
                                        //disable READER;
                                    //end
                                    //dd = (dd * 16) + hex;
        
                                    //if(i % 2 == 0)
                                    //begin
                                        //sum = sum + dd;
                                        //dd = 0;
                                    //end
                                //end
                            //default:
                            //begin
                                //error_status = `TRUE;
                                //$display("ERROR: %0s, line %0d, Unknown record type.", in_file, line_no);
                            //end
                        //endcase
                        
                        //// get the checksum bytes
                        //for (i = 0; i < 2; i = i+1)
                        //begin
                            //r = $fgetc(ifp);
                            
                            //if ((r >= "0") && (r <= "9"))
                                //cc = (cc * 16) + (r - 'h30);
                            //else if ((r >= "A") && (r <= "F"))
                                //cc = 10 + (cc * 16) + (r - 'h41);
                            //else if ((r >= "a") && (r <= "f"))
                                //cc = 10 + (cc * 16) + (r - 'h61);
                            //else
                            //begin
                                //error_status = `TRUE;
                                //$display("ERROR: %0s, line %0d, Invalid INTEL HEX record.", in_file, line_no);
                                //done = `TRUE;
                                //disable READER;
                            //end
                        //end
                        
                        //// Perform check sum.
                        //if(((~sum+1)& `MASK15) != cc)
                        //begin
                            //error_status = `TRUE;
                            //$display("ERROR: %0s, line %0d, Invalid checksum.", in_file, line_no);
                        //end
                    //end
                //end
                //else if ((r == `NEWLINE) || (r == `CARRIAGE_RETURN))
                //begin
                    //line_no = line_no +1;
                //end
                //else if (r == `SPACE)
                //begin
                    //// continue to next character;
                //end
                //else
                //begin
                    //error_status = `TRUE;
                    //$display("ERROR:%0s, line %0d, Invalid INTEL HEX record.", in_file, line_no);
                    //done = `TRUE;
                //end
            //end
            //$fclose(ifp);
            //$fclose(ofp);
        //end
//end
//endtask // convert_hex2ver

//task convert_to_ver_file;
    //input[`MAX_NAME_SZ*8 : 1] in_file;
    //input width;
    //output [`MAX_NAME_SZ*8 : 1] out_file;
    //reg [`MAX_NAME_SZ*8 : 1] in_file;
    //reg [`MAX_NAME_SZ*8 : 1] out_file;
    //integer width;
//begin    
           
        //if((in_file[4*8 : 1] == ".hex") || (in_file[4*8 : 1] == ".HEX") ||
            //(in_file[4*8 : 1] == ".dat") || (in_file[4*8 : 1] == ".DAT"))
            //convert_hex2ver(in_file, width, out_file);
        //else if((in_file[4*8 : 1] == ".mif") || (in_file[4*8 : 1] == ".MIF"))
            //convert_mif2ver(in_file, width, out_file);
        //else
            //$display("ERROR: Invalid input file name %0s. Expecting file with .hex extension (with Intel-hex data format) or .mif extension (with Altera-mif data format).", in_file);
//end
//endtask // convert_to_ver_file

//endmodule // ALTERA_MF_MEMORY_INITIALIZATION

////START_MODULE_NAME------------------------------------------------------------
////
//// Module Name     :  ALTERA_MF_HINT_EVALUATION
////
//// Description     :  Common function to grep the value of altera specific parameters
////                    within the lpm_hint parameter.
////
//// Limitation      :  No error checking to check whether the content of the lpm_hint
////                    is valid or not.
////
//// Results expected:  If the target parameter found, return the value of the parameter.
////                    Otherwise, return empty string.
////
////END_MODULE_NAME--------------------------------------------------------------

//// BEGINNING OF MODULE
//`timescale 1 ps / 1 ps

//// MODULE DECLARATION
//module ALTERA_MF_HINT_EVALUATION;

//// FUNCTON DECLARATION

//// This function will search through the string (given string) to look for a match for the
//// a given parameter(compare_param_name). It will return the value for the given parameter.
//function [8*200:1] GET_PARAMETER_VALUE;
    //input [8*200:1] given_string;  // string to be searched
    //input [8*50:1] compare_param_name; // parameter name to be looking for in the given_string.
    //integer param_value_char_count; // to indicate current character count in the param_value
    //integer param_name_char_count;  // to indicate current character count in the param_name
    //integer white_space_count;

    //reg extract_param_value; // if 1 mean extracting parameters value from given string
    //reg extract_param_name;  // if 1 mean extracting parameters name from given string
    //reg param_found; // to indicate whether compare_param_name have been found in the given_string
    //reg include_white_space; // if 1, include white space in the parameter value

    //reg [8*200:1] reg_string; // to store the value of the given string
    //reg [8*50:1] param_name;  // to store parameter name
    //reg [8*20:1] param_value; // to store parameter value
    //reg [8:1] tmp; // to get the value of the current byte
//begin
    //reg_string = given_string;
    //param_value_char_count = 0;
    //param_name_char_count =0;
    //extract_param_value = 1;
    //extract_param_name = 0;
    //param_found = 0;
    //include_white_space = 0;
    //white_space_count = 0;

    //tmp = reg_string[8:1];

    //// checking every bytes of the reg_string from right to left.
    //while ((tmp != 0 ) && (param_found != 1))
    //begin
        //tmp = reg_string[8:1];

        ////if tmp != ' ' or should include white space (trailing white space are ignored)
        //if((tmp != 32) || (include_white_space == 1))
        //begin
            //if(tmp == 32)
            //begin
                //white_space_count = 1;
            //end
            //else if(tmp == 61)  // if tmp = '='
            //begin
                //extract_param_value = 0;
                //extract_param_name =  1;  // subsequent bytes should be part of param_name
                //include_white_space = 0;  // ignore the white space (if any) between param_name and '='
                //white_space_count = 0;
                //param_value = param_value >> (8 * (20 - param_value_char_count));
                //param_value_char_count = 0;
            //end
            //else if (tmp == 44) // if tmp = ','
            //begin
                //extract_param_value = 1; // subsequent bytes should be part of param_value
                //extract_param_name =  0;
                //param_name = param_name >> (8 * (50 - param_name_char_count));
                //param_name_char_count = 0;
                //if(param_name == compare_param_name)
                    //param_found = 1;  // the compare_param_name have been found in the reg_string
            //end
            //else
            //begin
                //if(extract_param_value == 1)
                //begin
                    //param_value_char_count = param_value_char_count + white_space_count + 1;
                    //include_white_space = 1;
                    //if(white_space_count > 0)
                    //begin
                        //param_value = {8'b100000, param_value[20*8:9]};
                        //white_space_count = 0;
                    //end
                    //param_value = {tmp, param_value[20*8:9]};
                //end
                //else if(extract_param_name == 1)
                //begin
                    //param_name = {tmp, param_name[50*8:9]};
                    //param_name_char_count = param_name_char_count + 1;
                //end
            //end
        //end
        //reg_string = reg_string >> 8;  // shift 1 byte to the right
    //end

    //// for the case whether param_name is the left most part of the reg_string
    //if(extract_param_name == 1)
    //begin
        //param_name = param_name >> (8 * (50 - param_name_char_count));

        //if(param_name == compare_param_name)
            //param_found = 1;
    //end

    //if (param_found == 1)
        //GET_PARAMETER_VALUE = param_value;   // return the value of the parameter been looking for
    //else
        //GET_PARAMETER_VALUE = "";  // return empty string if parameter not found

//end
//endfunction

//endmodule // ALTERA_MF_HINT_EVALUATION

////START_MODULE_NAME------------------------------------------------------------
////
//// Module Name     :  ALTERA_DEVICE_FAMILIES
////
//// Description     :  Common Altera device families comparison
////
//// Limitation      :
////
//// Results expected:
////
////END_MODULE_NAME--------------------------------------------------------------

//// BEGINNING OF MODULE
//`timescale 1 ps / 1 ps

//// MODULE DECLARATION
//module ALTERA_DEVICE_FAMILIES;

//function IS_FAMILY_ARRIA10;
    //input[8*20:1] device;
    //reg is_arria10;
//begin
    //if ((device == "Arria 10") || (device == "ARRIA 10") || (device == "arria 10") || (device == "Arria10") || (device == "ARRIA10") || (device == "arria10") || (device == "Arria VI") || (device == "ARRIA VI") || (device == "arria vi") || (device == "ArriaVI") || (device == "ARRIAVI") || (device == "arriavi") || (device == "Night Fury") || (device == "NIGHT FURY") || (device == "night fury") || (device == "nightfury") || (device == "NIGHTFURY") || (device == "Arria 10 (GX/SX/GT)") || (device == "ARRIA 10 (GX/SX/GT)") || (device == "arria 10 (gx/sx/gt)") || (device == "Arria10(GX/SX/GT)") || (device == "ARRIA10(GX/SX/GT)") || (device == "arria10(gx/sx/gt)") || (device == "Arria 10 (GX)") || (device == "ARRIA 10 (GX)") || (device == "arria 10 (gx)") || (device == "Arria10(GX)") || (device == "ARRIA10(GX)") || (device == "arria10(gx)") || (device == "Arria 10 (SX)") || (device == "ARRIA 10 (SX)") || (device == "arria 10 (sx)") || (device == "Arria10(SX)") || (device == "ARRIA10(SX)") || (device == "arria10(sx)") || (device == "Arria 10 (GT)") || (device == "ARRIA 10 (GT)") || (device == "arria 10 (gt)") || (device == "Arria10(GT)") || (device == "ARRIA10(GT)") || (device == "arria10(gt)"))
        //is_arria10 = 1;
    //else
        //is_arria10 = 0;

    //IS_FAMILY_ARRIA10  = is_arria10;
//end
//endfunction //IS_FAMILY_ARRIA10

//function IS_FAMILY_ARRIAGX;
    //input[8*20:1] device;
    //reg is_arriagx;
//begin
    //if ((device == "Arria GX") || (device == "ARRIA GX") || (device == "arria gx") || (device == "ArriaGX") || (device == "ARRIAGX") || (device == "arriagx") || (device == "Stratix II GX Lite") || (device == "STRATIX II GX LITE") || (device == "stratix ii gx lite") || (device == "StratixIIGXLite") || (device == "STRATIXIIGXLITE") || (device == "stratixiigxlite"))
        //is_arriagx = 1;
    //else
        //is_arriagx = 0;

    //IS_FAMILY_ARRIAGX  = is_arriagx;
//end
//endfunction //IS_FAMILY_ARRIAGX

//function IS_FAMILY_ARRIAIIGX;
    //input[8*20:1] device;
    //reg is_arriaiigx;
//begin
    //if ((device == "Arria II GX") || (device == "ARRIA II GX") || (device == "arria ii gx") || (device == "ArriaIIGX") || (device == "ARRIAIIGX") || (device == "arriaiigx") || (device == "Arria IIGX") || (device == "ARRIA IIGX") || (device == "arria iigx") || (device == "ArriaII GX") || (device == "ARRIAII GX") || (device == "arriaii gx") || (device == "Arria II") || (device == "ARRIA II") || (device == "arria ii") || (device == "ArriaII") || (device == "ARRIAII") || (device == "arriaii") || (device == "Arria II (GX/E)") || (device == "ARRIA II (GX/E)") || (device == "arria ii (gx/e)") || (device == "ArriaII(GX/E)") || (device == "ARRIAII(GX/E)") || (device == "arriaii(gx/e)") || (device == "PIRANHA") || (device == "piranha"))
        //is_arriaiigx = 1;
    //else
        //is_arriaiigx = 0;

    //IS_FAMILY_ARRIAIIGX  = is_arriaiigx;
//end
//endfunction //IS_FAMILY_ARRIAIIGX

//function IS_FAMILY_ARRIAIIGZ;
    //input[8*20:1] device;
    //reg is_arriaiigz;
//begin
    //if ((device == "Arria II GZ") || (device == "ARRIA II GZ") || (device == "arria ii gz") || (device == "ArriaII GZ") || (device == "ARRIAII GZ") || (device == "arriaii gz") || (device == "Arria IIGZ") || (device == "ARRIA IIGZ") || (device == "arria iigz") || (device == "ArriaIIGZ") || (device == "ARRIAIIGZ") || (device == "arriaiigz"))
        //is_arriaiigz = 1;
    //else
        //is_arriaiigz = 0;

    //IS_FAMILY_ARRIAIIGZ  = is_arriaiigz;
//end
//endfunction //IS_FAMILY_ARRIAIIGZ

//function IS_FAMILY_ARRIAVGZ;
    //input[8*20:1] device;
    //reg is_arriavgz;
//begin
    //if ((device == "Arria V GZ") || (device == "ARRIA V GZ") || (device == "arria v gz") || (device == "ArriaVGZ") || (device == "ARRIAVGZ") || (device == "arriavgz"))
        //is_arriavgz = 1;
    //else
        //is_arriavgz = 0;

    //IS_FAMILY_ARRIAVGZ  = is_arriavgz;
//end
//endfunction //IS_FAMILY_ARRIAVGZ

//function IS_FAMILY_ARRIAV;
    //input[8*20:1] device;
    //reg is_arriav;
//begin
    //if ((device == "Arria V") || (device == "ARRIA V") || (device == "arria v") || (device == "Arria V (GT/GX)") || (device == "ARRIA V (GT/GX)") || (device == "arria v (gt/gx)") || (device == "ArriaV(GT/GX)") || (device == "ARRIAV(GT/GX)") || (device == "arriav(gt/gx)") || (device == "ArriaV") || (device == "ARRIAV") || (device == "arriav") || (device == "Arria V (GT/GX/ST/SX)") || (device == "ARRIA V (GT/GX/ST/SX)") || (device == "arria v (gt/gx/st/sx)") || (device == "ArriaV(GT/GX/ST/SX)") || (device == "ARRIAV(GT/GX/ST/SX)") || (device == "arriav(gt/gx/st/sx)") || (device == "Arria V (GT)") || (device == "ARRIA V (GT)") || (device == "arria v (gt)") || (device == "ArriaV(GT)") || (device == "ARRIAV(GT)") || (device == "arriav(gt)") || (device == "Arria V (GX)") || (device == "ARRIA V (GX)") || (device == "arria v (gx)") || (device == "ArriaV(GX)") || (device == "ARRIAV(GX)") || (device == "arriav(gx)") || (device == "Arria V (ST)") || (device == "ARRIA V (ST)") || (device == "arria v (st)") || (device == "ArriaV(ST)") || (device == "ARRIAV(ST)") || (device == "arriav(st)") || (device == "Arria V (SX)") || (device == "ARRIA V (SX)") || (device == "arria v (sx)") || (device == "ArriaV(SX)") || (device == "ARRIAV(SX)") || (device == "arriav(sx)"))
        //is_arriav = 1;
    //else
        //is_arriav = 0;

    //IS_FAMILY_ARRIAV  = is_arriav;
//end
//endfunction //IS_FAMILY_ARRIAV

//function IS_FAMILY_CYCLONEII;
    //input[8*20:1] device;
    //reg is_cycloneii;
//begin
    //if ((device == "Cyclone II") || (device == "CYCLONE II") || (device == "cyclone ii") || (device == "Cycloneii") || (device == "CYCLONEII") || (device == "cycloneii") || (device == "Magellan") || (device == "MAGELLAN") || (device == "magellan") || (device == "CycloneII") || (device == "CYCLONEII") || (device == "cycloneii"))
        //is_cycloneii = 1;
    //else
        //is_cycloneii = 0;

    //IS_FAMILY_CYCLONEII  = is_cycloneii;
//end
//endfunction //IS_FAMILY_CYCLONEII

//function IS_FAMILY_CYCLONEIIILS;
    //input[8*20:1] device;
    //reg is_cycloneiiils;
//begin
    //if ((device == "Cyclone III LS") || (device == "CYCLONE III LS") || (device == "cyclone iii ls") || (device == "CycloneIIILS") || (device == "CYCLONEIIILS") || (device == "cycloneiiils") || (device == "Cyclone III LPS") || (device == "CYCLONE III LPS") || (device == "cyclone iii lps") || (device == "Cyclone LPS") || (device == "CYCLONE LPS") || (device == "cyclone lps") || (device == "CycloneLPS") || (device == "CYCLONELPS") || (device == "cyclonelps") || (device == "Tarpon") || (device == "TARPON") || (device == "tarpon") || (device == "Cyclone IIIE") || (device == "CYCLONE IIIE") || (device == "cyclone iiie"))
        //is_cycloneiiils = 1;
    //else
        //is_cycloneiiils = 0;

    //IS_FAMILY_CYCLONEIIILS  = is_cycloneiiils;
//end
//endfunction //IS_FAMILY_CYCLONEIIILS

//function IS_FAMILY_CYCLONEIII;
    //input[8*20:1] device;
    //reg is_cycloneiii;
//begin
    //if ((device == "Cyclone III") || (device == "CYCLONE III") || (device == "cyclone iii") || (device == "CycloneIII") || (device == "CYCLONEIII") || (device == "cycloneiii") || (device == "Barracuda") || (device == "BARRACUDA") || (device == "barracuda") || (device == "Cuda") || (device == "CUDA") || (device == "cuda") || (device == "CIII") || (device == "ciii"))
        //is_cycloneiii = 1;
    //else
        //is_cycloneiii = 0;

    //IS_FAMILY_CYCLONEIII  = is_cycloneiii;
//end
//endfunction //IS_FAMILY_CYCLONEIII

//function IS_FAMILY_CYCLONEIVE;
    //input[8*20:1] device;
    //reg is_cycloneive;
//begin
    //if ((device == "Cyclone IV E") || (device == "CYCLONE IV E") || (device == "cyclone iv e") || (device == "CycloneIV E") || (device == "CYCLONEIV E") || (device == "cycloneiv e") || (device == "Cyclone IVE") || (device == "CYCLONE IVE") || (device == "cyclone ive") || (device == "CycloneIVE") || (device == "CYCLONEIVE") || (device == "cycloneive"))
        //is_cycloneive = 1;
    //else
        //is_cycloneive = 0;

    //IS_FAMILY_CYCLONEIVE  = is_cycloneive;
//end
//endfunction //IS_FAMILY_CYCLONEIVE

//function IS_FAMILY_CYCLONEIVGX;
    //input[8*20:1] device;
    //reg is_cycloneivgx;
//begin
    //if ((device == "Cyclone IV GX") || (device == "CYCLONE IV GX") || (device == "cyclone iv gx") || (device == "Cyclone IVGX") || (device == "CYCLONE IVGX") || (device == "cyclone ivgx") || (device == "CycloneIV GX") || (device == "CYCLONEIV GX") || (device == "cycloneiv gx") || (device == "CycloneIVGX") || (device == "CYCLONEIVGX") || (device == "cycloneivgx") || (device == "Cyclone IV") || (device == "CYCLONE IV") || (device == "cyclone iv") || (device == "CycloneIV") || (device == "CYCLONEIV") || (device == "cycloneiv") || (device == "Cyclone IV (GX)") || (device == "CYCLONE IV (GX)") || (device == "cyclone iv (gx)") || (device == "CycloneIV(GX)") || (device == "CYCLONEIV(GX)") || (device == "cycloneiv(gx)") || (device == "Cyclone III GX") || (device == "CYCLONE III GX") || (device == "cyclone iii gx") || (device == "CycloneIII GX") || (device == "CYCLONEIII GX") || (device == "cycloneiii gx") || (device == "Cyclone IIIGX") || (device == "CYCLONE IIIGX") || (device == "cyclone iiigx") || (device == "CycloneIIIGX") || (device == "CYCLONEIIIGX") || (device == "cycloneiiigx") || (device == "Cyclone III GL") || (device == "CYCLONE III GL") || (device == "cyclone iii gl") || (device == "CycloneIII GL") || (device == "CYCLONEIII GL") || (device == "cycloneiii gl") || (device == "Cyclone IIIGL") || (device == "CYCLONE IIIGL") || (device == "cyclone iiigl") || (device == "CycloneIIIGL") || (device == "CYCLONEIIIGL") || (device == "cycloneiiigl") || (device == "Stingray") || (device == "STINGRAY") || (device == "stingray"))
        //is_cycloneivgx = 1;
    //else
        //is_cycloneivgx = 0;

    //IS_FAMILY_CYCLONEIVGX  = is_cycloneivgx;
//end
//endfunction //IS_FAMILY_CYCLONEIVGX

//function IS_FAMILY_CYCLONEV;
    //input[8*20:1] device;
    //reg is_cyclonev;
//begin
    //if ((device == "Cyclone V") || (device == "CYCLONE V") || (device == "cyclone v") || (device == "CycloneV") || (device == "CYCLONEV") || (device == "cyclonev") || (device == "Cyclone V (GT/GX/E/SX)") || (device == "CYCLONE V (GT/GX/E/SX)") || (device == "cyclone v (gt/gx/e/sx)") || (device == "CycloneV(GT/GX/E/SX)") || (device == "CYCLONEV(GT/GX/E/SX)") || (device == "cyclonev(gt/gx/e/sx)") || (device == "Cyclone V (E/GX/GT/SX/SE/ST)") || (device == "CYCLONE V (E/GX/GT/SX/SE/ST)") || (device == "cyclone v (e/gx/gt/sx/se/st)") || (device == "CycloneV(E/GX/GT/SX/SE/ST)") || (device == "CYCLONEV(E/GX/GT/SX/SE/ST)") || (device == "cyclonev(e/gx/gt/sx/se/st)") || (device == "Cyclone V (E)") || (device == "CYCLONE V (E)") || (device == "cyclone v (e)") || (device == "CycloneV(E)") || (device == "CYCLONEV(E)") || (device == "cyclonev(e)") || (device == "Cyclone V (GX)") || (device == "CYCLONE V (GX)") || (device == "cyclone v (gx)") || (device == "CycloneV(GX)") || (device == "CYCLONEV(GX)") || (device == "cyclonev(gx)") || (device == "Cyclone V (GT)") || (device == "CYCLONE V (GT)") || (device == "cyclone v (gt)") || (device == "CycloneV(GT)") || (device == "CYCLONEV(GT)") || (device == "cyclonev(gt)") || (device == "Cyclone V (SX)") || (device == "CYCLONE V (SX)") || (device == "cyclone v (sx)") || (device == "CycloneV(SX)") || (device == "CYCLONEV(SX)") || (device == "cyclonev(sx)") || (device == "Cyclone V (SE)") || (device == "CYCLONE V (SE)") || (device == "cyclone v (se)") || (device == "CycloneV(SE)") || (device == "CYCLONEV(SE)") || (device == "cyclonev(se)") || (device == "Cyclone V (ST)") || (device == "CYCLONE V (ST)") || (device == "cyclone v (st)") || (device == "CycloneV(ST)") || (device == "CYCLONEV(ST)") || (device == "cyclonev(st)"))
        //is_cyclonev = 1;
    //else
        //is_cyclonev = 0;

    //IS_FAMILY_CYCLONEV  = is_cyclonev;
//end
//endfunction //IS_FAMILY_CYCLONEV

//function IS_FAMILY_CYCLONE;
    //input[8*20:1] device;
    //reg is_cyclone;
//begin
    //if ((device == "Cyclone") || (device == "CYCLONE") || (device == "cyclone") || (device == "ACEX2K") || (device == "acex2k") || (device == "ACEX 2K") || (device == "acex 2k") || (device == "Tornado") || (device == "TORNADO") || (device == "tornado"))
        //is_cyclone = 1;
    //else
        //is_cyclone = 0;

    //IS_FAMILY_CYCLONE  = is_cyclone;
//end
//endfunction //IS_FAMILY_CYCLONE

//function IS_FAMILY_HARDCOPYII;
    //input[8*20:1] device;
    //reg is_hardcopyii;
//begin
    //if ((device == "HardCopy II") || (device == "HARDCOPY II") || (device == "hardcopy ii") || (device == "HardCopyII") || (device == "HARDCOPYII") || (device == "hardcopyii") || (device == "Fusion") || (device == "FUSION") || (device == "fusion"))
        //is_hardcopyii = 1;
    //else
        //is_hardcopyii = 0;

    //IS_FAMILY_HARDCOPYII  = is_hardcopyii;
//end
//endfunction //IS_FAMILY_HARDCOPYII

//function IS_FAMILY_HARDCOPYIII;
    //input[8*20:1] device;
    //reg is_hardcopyiii;
//begin
    //if ((device == "HardCopy III") || (device == "HARDCOPY III") || (device == "hardcopy iii") || (device == "HardCopyIII") || (device == "HARDCOPYIII") || (device == "hardcopyiii") || (device == "HCX") || (device == "hcx"))
        //is_hardcopyiii = 1;
    //else
        //is_hardcopyiii = 0;

    //IS_FAMILY_HARDCOPYIII  = is_hardcopyiii;
//end
//endfunction //IS_FAMILY_HARDCOPYIII

//function IS_FAMILY_HARDCOPYIV;
    //input[8*20:1] device;
    //reg is_hardcopyiv;
//begin
    //if ((device == "HardCopy IV") || (device == "HARDCOPY IV") || (device == "hardcopy iv") || (device == "HardCopyIV") || (device == "HARDCOPYIV") || (device == "hardcopyiv") || (device == "HardCopy IV (GX)") || (device == "HARDCOPY IV (GX)") || (device == "hardcopy iv (gx)") || (device == "HardCopy IV (E)") || (device == "HARDCOPY IV (E)") || (device == "hardcopy iv (e)") || (device == "HardCopyIV(GX)") || (device == "HARDCOPYIV(GX)") || (device == "hardcopyiv(gx)") || (device == "HardCopyIV(E)") || (device == "HARDCOPYIV(E)") || (device == "hardcopyiv(e)") || (device == "HCXIV") || (device == "hcxiv") || (device == "HardCopy IV (GX/E)") || (device == "HARDCOPY IV (GX/E)") || (device == "hardcopy iv (gx/e)") || (device == "HardCopy IV (E/GX)") || (device == "HARDCOPY IV (E/GX)") || (device == "hardcopy iv (e/gx)") || (device == "HardCopyIV(GX/E)") || (device == "HARDCOPYIV(GX/E)") || (device == "hardcopyiv(gx/e)") || (device == "HardCopyIV(E/GX)") || (device == "HARDCOPYIV(E/GX)") || (device == "hardcopyiv(e/gx)"))
        //is_hardcopyiv = 1;
    //else
        //is_hardcopyiv = 0;

    //IS_FAMILY_HARDCOPYIV  = is_hardcopyiv;
//end
//endfunction //IS_FAMILY_HARDCOPYIV

//function IS_FAMILY_MAX10FPGA;
    //input[8*20:1] device;
    //reg is_max10fpga;
//begin
    //if ((device == "MAX 10 FPGA") || (device == "max 10 fpga") || (device == "Zippleback") || (device == "ZIPPLEBACK") || (device == "zippleback") || (device == "MAX10FPGA") || (device == "max10fpga") || (device == "MAX 10 FPGA (DA/DF/DC/SF/SC)") || (device == "max 10 fpga (da/df/dc/sf/sc)") || (device == "MAX10FPGA(DA/DF/DC/SF/SC)") || (device == "max10fpga(da/df/dc/sf/sc)") || (device == "MAX 10 FPGA (DA)") || (device == "max 10 fpga (da)") || (device == "MAX10FPGA(DA)") || (device == "max10fpga(da)") || (device == "MAX 10 FPGA (DF)") || (device == "max 10 fpga (df)") || (device == "MAX10FPGA(DF)") || (device == "max10fpga(df)") || (device == "MAX 10 FPGA (DC)") || (device == "max 10 fpga (dc)") || (device == "MAX10FPGA(DC)") || (device == "max10fpga(dc)") || (device == "MAX 10 FPGA (SF)") || (device == "max 10 fpga (sf)") || (device == "MAX10FPGA(SF)") || (device == "max10fpga(sf)") || (device == "MAX 10 FPGA (SC)") || (device == "max 10 fpga (sc)") || (device == "MAX10FPGA(SC)") || (device == "max10fpga(sc)"))
        //is_max10fpga = 1;
    //else
        //is_max10fpga = 0;

    //IS_FAMILY_MAX10FPGA  = is_max10fpga;
//end
//endfunction //IS_FAMILY_MAX10FPGA

//function IS_FAMILY_MAXII;
    //input[8*20:1] device;
    //reg is_maxii;
//begin
    //if ((device == "MAX II") || (device == "max ii") || (device == "MAXII") || (device == "maxii") || (device == "Tsunami") || (device == "TSUNAMI") || (device == "tsunami"))
        //is_maxii = 1;
    //else
        //is_maxii = 0;

    //IS_FAMILY_MAXII  = is_maxii;
//end
//endfunction //IS_FAMILY_MAXII

//function IS_FAMILY_MAXV;
    //input[8*20:1] device;
    //reg is_maxv;
//begin
    //if ((device == "MAX V") || (device == "max v") || (device == "MAXV") || (device == "maxv") || (device == "Jade") || (device == "JADE") || (device == "jade"))
        //is_maxv = 1;
    //else
        //is_maxv = 0;

    //IS_FAMILY_MAXV  = is_maxv;
//end
//endfunction //IS_FAMILY_MAXV

//function IS_FAMILY_STRATIXGX;
    //input[8*20:1] device;
    //reg is_stratixgx;
//begin
    //if ((device == "Stratix GX") || (device == "STRATIX GX") || (device == "stratix gx") || (device == "Stratix-GX") || (device == "STRATIX-GX") || (device == "stratix-gx") || (device == "StratixGX") || (device == "STRATIXGX") || (device == "stratixgx") || (device == "Aurora") || (device == "AURORA") || (device == "aurora"))
        //is_stratixgx = 1;
    //else
        //is_stratixgx = 0;

    //IS_FAMILY_STRATIXGX  = is_stratixgx;
//end
//endfunction //IS_FAMILY_STRATIXGX

//function IS_FAMILY_STRATIXIIGX;
    //input[8*20:1] device;
    //reg is_stratixiigx;
//begin
    //if ((device == "Stratix II GX") || (device == "STRATIX II GX") || (device == "stratix ii gx") || (device == "StratixIIGX") || (device == "STRATIXIIGX") || (device == "stratixiigx"))
        //is_stratixiigx = 1;
    //else
        //is_stratixiigx = 0;

    //IS_FAMILY_STRATIXIIGX  = is_stratixiigx;
//end
//endfunction //IS_FAMILY_STRATIXIIGX

//function IS_FAMILY_STRATIXII;
    //input[8*20:1] device;
    //reg is_stratixii;
//begin
    //if ((device == "Stratix II") || (device == "STRATIX II") || (device == "stratix ii") || (device == "StratixII") || (device == "STRATIXII") || (device == "stratixii") || (device == "Armstrong") || (device == "ARMSTRONG") || (device == "armstrong"))
        //is_stratixii = 1;
    //else
        //is_stratixii = 0;

    //IS_FAMILY_STRATIXII  = is_stratixii;
//end
//endfunction //IS_FAMILY_STRATIXII

//function IS_FAMILY_STRATIXIII;
    //input[8*20:1] device;
    //reg is_stratixiii;
//begin
    //if ((device == "Stratix III") || (device == "STRATIX III") || (device == "stratix iii") || (device == "StratixIII") || (device == "STRATIXIII") || (device == "stratixiii") || (device == "Titan") || (device == "TITAN") || (device == "titan") || (device == "SIII") || (device == "siii"))
        //is_stratixiii = 1;
    //else
        //is_stratixiii = 0;

    //IS_FAMILY_STRATIXIII  = is_stratixiii;
//end
//endfunction //IS_FAMILY_STRATIXIII

//function IS_FAMILY_STRATIXIV;
    //input[8*20:1] device;
    //reg is_stratixiv;
//begin
    //if ((device == "Stratix IV") || (device == "STRATIX IV") || (device == "stratix iv") || (device == "TGX") || (device == "tgx") || (device == "StratixIV") || (device == "STRATIXIV") || (device == "stratixiv") || (device == "Stratix IV (GT)") || (device == "STRATIX IV (GT)") || (device == "stratix iv (gt)") || (device == "Stratix IV (GX)") || (device == "STRATIX IV (GX)") || (device == "stratix iv (gx)") || (device == "Stratix IV (E)") || (device == "STRATIX IV (E)") || (device == "stratix iv (e)") || (device == "StratixIV(GT)") || (device == "STRATIXIV(GT)") || (device == "stratixiv(gt)") || (device == "StratixIV(GX)") || (device == "STRATIXIV(GX)") || (device == "stratixiv(gx)") || (device == "StratixIV(E)") || (device == "STRATIXIV(E)") || (device == "stratixiv(e)") || (device == "StratixIIIGX") || (device == "STRATIXIIIGX") || (device == "stratixiiigx") || (device == "Stratix IV (GT/GX/E)") || (device == "STRATIX IV (GT/GX/E)") || (device == "stratix iv (gt/gx/e)") || (device == "Stratix IV (GT/E/GX)") || (device == "STRATIX IV (GT/E/GX)") || (device == "stratix iv (gt/e/gx)") || (device == "Stratix IV (E/GT/GX)") || (device == "STRATIX IV (E/GT/GX)") || (device == "stratix iv (e/gt/gx)") || (device == "Stratix IV (E/GX/GT)") || (device == "STRATIX IV (E/GX/GT)") || (device == "stratix iv (e/gx/gt)") || (device == "StratixIV(GT/GX/E)") || (device == "STRATIXIV(GT/GX/E)") || (device == "stratixiv(gt/gx/e)") || (device == "StratixIV(GT/E/GX)") || (device == "STRATIXIV(GT/E/GX)") || (device == "stratixiv(gt/e/gx)") || (device == "StratixIV(E/GX/GT)") || (device == "STRATIXIV(E/GX/GT)") || (device == "stratixiv(e/gx/gt)") || (device == "StratixIV(E/GT/GX)") || (device == "STRATIXIV(E/GT/GX)") || (device == "stratixiv(e/gt/gx)") || (device == "Stratix IV (GX/E)") || (device == "STRATIX IV (GX/E)") || (device == "stratix iv (gx/e)") || (device == "StratixIV(GX/E)") || (device == "STRATIXIV(GX/E)") || (device == "stratixiv(gx/e)"))
        //is_stratixiv = 1;
    //else
        //is_stratixiv = 0;

    //IS_FAMILY_STRATIXIV  = is_stratixiv;
//end
//endfunction //IS_FAMILY_STRATIXIV

//function IS_FAMILY_STRATIXV;
    //input[8*20:1] device;
    //reg is_stratixv;
//begin
    //if ((device == "Stratix V") || (device == "STRATIX V") || (device == "stratix v") || (device == "StratixV") || (device == "STRATIXV") || (device == "stratixv") || (device == "Stratix V (GS)") || (device == "STRATIX V (GS)") || (device == "stratix v (gs)") || (device == "StratixV(GS)") || (device == "STRATIXV(GS)") || (device == "stratixv(gs)") || (device == "Stratix V (GT)") || (device == "STRATIX V (GT)") || (device == "stratix v (gt)") || (device == "StratixV(GT)") || (device == "STRATIXV(GT)") || (device == "stratixv(gt)") || (device == "Stratix V (GX)") || (device == "STRATIX V (GX)") || (device == "stratix v (gx)") || (device == "StratixV(GX)") || (device == "STRATIXV(GX)") || (device == "stratixv(gx)") || (device == "Stratix V (GS/GX)") || (device == "STRATIX V (GS/GX)") || (device == "stratix v (gs/gx)") || (device == "StratixV(GS/GX)") || (device == "STRATIXV(GS/GX)") || (device == "stratixv(gs/gx)") || (device == "Stratix V (GS/GT)") || (device == "STRATIX V (GS/GT)") || (device == "stratix v (gs/gt)") || (device == "StratixV(GS/GT)") || (device == "STRATIXV(GS/GT)") || (device == "stratixv(gs/gt)") || (device == "Stratix V (GT/GX)") || (device == "STRATIX V (GT/GX)") || (device == "stratix v (gt/gx)") || (device == "StratixV(GT/GX)") || (device == "STRATIXV(GT/GX)") || (device == "stratixv(gt/gx)") || (device == "Stratix V (GX/GS)") || (device == "STRATIX V (GX/GS)") || (device == "stratix v (gx/gs)") || (device == "StratixV(GX/GS)") || (device == "STRATIXV(GX/GS)") || (device == "stratixv(gx/gs)") || (device == "Stratix V (GT/GS)") || (device == "STRATIX V (GT/GS)") || (device == "stratix v (gt/gs)") || (device == "StratixV(GT/GS)") || (device == "STRATIXV(GT/GS)") || (device == "stratixv(gt/gs)") || (device == "Stratix V (GX/GT)") || (device == "STRATIX V (GX/GT)") || (device == "stratix v (gx/gt)") || (device == "StratixV(GX/GT)") || (device == "STRATIXV(GX/GT)") || (device == "stratixv(gx/gt)") || (device == "Stratix V (GS/GT/GX)") || (device == "STRATIX V (GS/GT/GX)") || (device == "stratix v (gs/gt/gx)") || (device == "Stratix V (GS/GX/GT)") || (device == "STRATIX V (GS/GX/GT)") || (device == "stratix v (gs/gx/gt)") || (device == "Stratix V (GT/GS/GX)") || (device == "STRATIX V (GT/GS/GX)") || (device == "stratix v (gt/gs/gx)") || (device == "Stratix V (GT/GX/GS)") || (device == "STRATIX V (GT/GX/GS)") || (device == "stratix v (gt/gx/gs)") || (device == "Stratix V (GX/GS/GT)") || (device == "STRATIX V (GX/GS/GT)") || (device == "stratix v (gx/gs/gt)") || (device == "Stratix V (GX/GT/GS)") || (device == "STRATIX V (GX/GT/GS)") || (device == "stratix v (gx/gt/gs)") || (device == "StratixV(GS/GT/GX)") || (device == "STRATIXV(GS/GT/GX)") || (device == "stratixv(gs/gt/gx)") || (device == "StratixV(GS/GX/GT)") || (device == "STRATIXV(GS/GX/GT)") || (device == "stratixv(gs/gx/gt)") || (device == "StratixV(GT/GS/GX)") || (device == "STRATIXV(GT/GS/GX)") || (device == "stratixv(gt/gs/gx)") || (device == "StratixV(GT/GX/GS)") || (device == "STRATIXV(GT/GX/GS)") || (device == "stratixv(gt/gx/gs)") || (device == "StratixV(GX/GS/GT)") || (device == "STRATIXV(GX/GS/GT)") || (device == "stratixv(gx/gs/gt)") || (device == "StratixV(GX/GT/GS)") || (device == "STRATIXV(GX/GT/GS)") || (device == "stratixv(gx/gt/gs)") || (device == "Stratix V (GS/GT/GX/E)") || (device == "STRATIX V (GS/GT/GX/E)") || (device == "stratix v (gs/gt/gx/e)") || (device == "StratixV(GS/GT/GX/E)") || (device == "STRATIXV(GS/GT/GX/E)") || (device == "stratixv(gs/gt/gx/e)") || (device == "Stratix V (E)") || (device == "STRATIX V (E)") || (device == "stratix v (e)") || (device == "StratixV(E)") || (device == "STRATIXV(E)") || (device == "stratixv(e)"))
        //is_stratixv = 1;
    //else
        //is_stratixv = 0;

    //IS_FAMILY_STRATIXV  = is_stratixv;
//end
//endfunction //IS_FAMILY_STRATIXV

//function IS_FAMILY_STRATIX;
    //input[8*20:1] device;
    //reg is_stratix;
//begin
    //if ((device == "Stratix") || (device == "STRATIX") || (device == "stratix") || (device == "Yeager") || (device == "YEAGER") || (device == "yeager"))
        //is_stratix = 1;
    //else
        //is_stratix = 0;

    //IS_FAMILY_STRATIX  = is_stratix;
//end
//endfunction //IS_FAMILY_STRATIX

//function FEATURE_FAMILY_STRATIXGX;
    //input[8*20:1] device;
    //reg var_family_stratixgx;
//begin
    //if (IS_FAMILY_STRATIXGX(device) )
        //var_family_stratixgx = 1;
    //else
        //var_family_stratixgx = 0;

    //FEATURE_FAMILY_STRATIXGX  = var_family_stratixgx;
//end
//endfunction //FEATURE_FAMILY_STRATIXGX

//function FEATURE_FAMILY_CYCLONE;
    //input[8*20:1] device;
    //reg var_family_cyclone;
//begin
    //if (IS_FAMILY_CYCLONE(device) )
        //var_family_cyclone = 1;
    //else
        //var_family_cyclone = 0;

    //FEATURE_FAMILY_CYCLONE  = var_family_cyclone;
//end
//endfunction //FEATURE_FAMILY_CYCLONE

//function FEATURE_FAMILY_STRATIXIIGX;
    //input[8*20:1] device;
    //reg var_family_stratixiigx;
//begin
    //if (IS_FAMILY_STRATIXIIGX(device) || IS_FAMILY_ARRIAGX(device) )
        //var_family_stratixiigx = 1;
    //else
        //var_family_stratixiigx = 0;

    //FEATURE_FAMILY_STRATIXIIGX  = var_family_stratixiigx;
//end
//endfunction //FEATURE_FAMILY_STRATIXIIGX

//function FEATURE_FAMILY_STRATIXIII;
    //input[8*20:1] device;
    //reg var_family_stratixiii;
//begin
    //if (IS_FAMILY_STRATIXIII(device) || FEATURE_FAMILY_STRATIXIV(device) || FEATURE_FAMILY_HARDCOPYIII(device) )
        //var_family_stratixiii = 1;
    //else
        //var_family_stratixiii = 0;

    //FEATURE_FAMILY_STRATIXIII  = var_family_stratixiii;
//end
//endfunction //FEATURE_FAMILY_STRATIXIII

//function FEATURE_FAMILY_ARRIAVGZ;
    //input[8*20:1] device;
    //reg var_family_arriavgz;
//begin
    //if (IS_FAMILY_ARRIAVGZ(device) )
        //var_family_arriavgz = 1;
    //else
        //var_family_arriavgz = 0;

    //FEATURE_FAMILY_ARRIAVGZ  = var_family_arriavgz;
//end
//endfunction //FEATURE_FAMILY_ARRIAVGZ

//function FEATURE_FAMILY_STRATIXV;
    //input[8*20:1] device;
    //reg var_family_stratixv;
//begin
    //if (IS_FAMILY_STRATIXV(device) || FEATURE_FAMILY_ARRIAVGZ(device) )
        //var_family_stratixv = 1;
    //else
        //var_family_stratixv = 0;

    //FEATURE_FAMILY_STRATIXV  = var_family_stratixv;
//end
//endfunction //FEATURE_FAMILY_STRATIXV

//function FEATURE_FAMILY_ARRIA10;
    //input[8*20:1] device;
    //reg var_family_arria10;
//begin
    //if (IS_FAMILY_ARRIA10(device) || IS_FAMILY_ARRIA10(device) )
        //var_family_arria10 = 1;
    //else
        //var_family_arria10 = 0;

    //FEATURE_FAMILY_ARRIA10  = var_family_arria10;
//end
//endfunction //FEATURE_FAMILY_ARRIA10

//function FEATURE_FAMILY_STRATIXII;
    //input[8*20:1] device;
    //reg var_family_stratixii;
//begin
    //if (IS_FAMILY_STRATIXII(device) || IS_FAMILY_HARDCOPYII(device) || FEATURE_FAMILY_STRATIXIIGX(device) || FEATURE_FAMILY_STRATIXIII(device) )
        //var_family_stratixii = 1;
    //else
        //var_family_stratixii = 0;

    //FEATURE_FAMILY_STRATIXII  = var_family_stratixii;
//end
//endfunction //FEATURE_FAMILY_STRATIXII

//function FEATURE_FAMILY_CYCLONEIVGX;
    //input[8*20:1] device;
    //reg var_family_cycloneivgx;
//begin
    //if (IS_FAMILY_CYCLONEIVGX(device) || IS_FAMILY_CYCLONEIVGX(device) )
        //var_family_cycloneivgx = 1;
    //else
        //var_family_cycloneivgx = 0;

    //FEATURE_FAMILY_CYCLONEIVGX  = var_family_cycloneivgx;
//end
//endfunction //FEATURE_FAMILY_CYCLONEIVGX

//function FEATURE_FAMILY_CYCLONEIVE;
    //input[8*20:1] device;
    //reg var_family_cycloneive;
//begin
    //if (IS_FAMILY_CYCLONEIVE(device) )
        //var_family_cycloneive = 1;
    //else
        //var_family_cycloneive = 0;

    //FEATURE_FAMILY_CYCLONEIVE  = var_family_cycloneive;
//end
//endfunction //FEATURE_FAMILY_CYCLONEIVE

//function FEATURE_FAMILY_CYCLONEIII;
    //input[8*20:1] device;
    //reg var_family_cycloneiii;
//begin
    //if (IS_FAMILY_CYCLONEIII(device) || IS_FAMILY_CYCLONEIIILS(device) || FEATURE_FAMILY_CYCLONEIVGX(device) || FEATURE_FAMILY_CYCLONEIVE(device) || FEATURE_FAMILY_MAX10FPGA(device) )
        //var_family_cycloneiii = 1;
    //else
        //var_family_cycloneiii = 0;

    //FEATURE_FAMILY_CYCLONEIII  = var_family_cycloneiii;
//end
//endfunction //FEATURE_FAMILY_CYCLONEIII

//function FEATURE_FAMILY_STRATIX_HC;
    //input[8*20:1] device;
    //reg var_family_stratix_hc;
//begin
    //if ((device == "StratixHC") )
        //var_family_stratix_hc = 1;
    //else
        //var_family_stratix_hc = 0;

    //FEATURE_FAMILY_STRATIX_HC  = var_family_stratix_hc;
//end
//endfunction //FEATURE_FAMILY_STRATIX_HC

//function FEATURE_FAMILY_STRATIX;
    //input[8*20:1] device;
    //reg var_family_stratix;
//begin
    //if (IS_FAMILY_STRATIX(device) || FEATURE_FAMILY_STRATIX_HC(device) || FEATURE_FAMILY_STRATIXGX(device) || FEATURE_FAMILY_CYCLONE(device) || FEATURE_FAMILY_STRATIXII(device) || FEATURE_FAMILY_MAXII(device) || FEATURE_FAMILY_CYCLONEII(device) )
        //var_family_stratix = 1;
    //else
        //var_family_stratix = 0;

    //FEATURE_FAMILY_STRATIX  = var_family_stratix;
//end
//endfunction //FEATURE_FAMILY_STRATIX

//function FEATURE_FAMILY_MAXII;
    //input[8*20:1] device;
    //reg var_family_maxii;
//begin
    //if (IS_FAMILY_MAXII(device) || FEATURE_FAMILY_MAXV(device) )
        //var_family_maxii = 1;
    //else
        //var_family_maxii = 0;

    //FEATURE_FAMILY_MAXII  = var_family_maxii;
//end
//endfunction //FEATURE_FAMILY_MAXII

//function FEATURE_FAMILY_MAXV;
    //input[8*20:1] device;
    //reg var_family_maxv;
//begin
    //if (IS_FAMILY_MAXV(device) )
        //var_family_maxv = 1;
    //else
        //var_family_maxv = 0;

    //FEATURE_FAMILY_MAXV  = var_family_maxv;
//end
//endfunction //FEATURE_FAMILY_MAXV

//function FEATURE_FAMILY_CYCLONEII;
    //input[8*20:1] device;
    //reg var_family_cycloneii;
//begin
    //if (IS_FAMILY_CYCLONEII(device) || FEATURE_FAMILY_CYCLONEIII(device) )
        //var_family_cycloneii = 1;
    //else
        //var_family_cycloneii = 0;

    //FEATURE_FAMILY_CYCLONEII  = var_family_cycloneii;
//end
//endfunction //FEATURE_FAMILY_CYCLONEII

//function FEATURE_FAMILY_STRATIXIV;
    //input[8*20:1] device;
    //reg var_family_stratixiv;
//begin
    //if (IS_FAMILY_STRATIXIV(device) || IS_FAMILY_ARRIAIIGX(device) || FEATURE_FAMILY_HARDCOPYIV(device) || FEATURE_FAMILY_STRATIXV(device) || FEATURE_FAMILY_ARRIAV(device) || FEATURE_FAMILY_ARRIAIIGZ(device) || FEATURE_FAMILY_ARRIA10(device) )
        //var_family_stratixiv = 1;
    //else
        //var_family_stratixiv = 0;

    //FEATURE_FAMILY_STRATIXIV  = var_family_stratixiv;
//end
//endfunction //FEATURE_FAMILY_STRATIXIV

//function FEATURE_FAMILY_ARRIAIIGZ;
    //input[8*20:1] device;
    //reg var_family_arriaiigz;
//begin
    //if (IS_FAMILY_ARRIAIIGZ(device) )
        //var_family_arriaiigz = 1;
    //else
        //var_family_arriaiigz = 0;

    //FEATURE_FAMILY_ARRIAIIGZ  = var_family_arriaiigz;
//end
//endfunction //FEATURE_FAMILY_ARRIAIIGZ

//function FEATURE_FAMILY_ARRIAIIGX;
    //input[8*20:1] device;
    //reg var_family_arriaiigx;
//begin
    //if (IS_FAMILY_ARRIAIIGX(device) )
        //var_family_arriaiigx = 1;
    //else
        //var_family_arriaiigx = 0;

    //FEATURE_FAMILY_ARRIAIIGX  = var_family_arriaiigx;
//end
//endfunction //FEATURE_FAMILY_ARRIAIIGX

//function FEATURE_FAMILY_HARDCOPYIII;
    //input[8*20:1] device;
    //reg var_family_hardcopyiii;
//begin
    //if (IS_FAMILY_HARDCOPYIII(device) || IS_FAMILY_HARDCOPYIII(device) )
        //var_family_hardcopyiii = 1;
    //else
        //var_family_hardcopyiii = 0;

    //FEATURE_FAMILY_HARDCOPYIII  = var_family_hardcopyiii;
//end
//endfunction //FEATURE_FAMILY_HARDCOPYIII

//function FEATURE_FAMILY_HARDCOPYIV;
    //input[8*20:1] device;
    //reg var_family_hardcopyiv;
//begin
    //if (IS_FAMILY_HARDCOPYIV(device) || IS_FAMILY_HARDCOPYIV(device) )
        //var_family_hardcopyiv = 1;
    //else
        //var_family_hardcopyiv = 0;

    //FEATURE_FAMILY_HARDCOPYIV  = var_family_hardcopyiv;
//end
//endfunction //FEATURE_FAMILY_HARDCOPYIV

//function FEATURE_FAMILY_CYCLONEV;
    //input[8*20:1] device;
    //reg var_family_cyclonev;
//begin
    //if (IS_FAMILY_CYCLONEV(device) )
        //var_family_cyclonev = 1;
    //else
        //var_family_cyclonev = 0;

    //FEATURE_FAMILY_CYCLONEV  = var_family_cyclonev;
//end
//endfunction //FEATURE_FAMILY_CYCLONEV

//function FEATURE_FAMILY_ARRIAV;
    //input[8*20:1] device;
    //reg var_family_arriav;
//begin
    //if (IS_FAMILY_ARRIAV(device) || FEATURE_FAMILY_CYCLONEV(device) )
        //var_family_arriav = 1;
    //else
        //var_family_arriav = 0;

    //FEATURE_FAMILY_ARRIAV  = var_family_arriav;
//end
//endfunction //FEATURE_FAMILY_ARRIAV

//function FEATURE_FAMILY_MAX10FPGA;
    //input[8*20:1] device;
    //reg var_family_max10fpga;
//begin
    //if (IS_FAMILY_MAX10FPGA(device) )
        //var_family_max10fpga = 1;
    //else
        //var_family_max10fpga = 0;

    //FEATURE_FAMILY_MAX10FPGA  = var_family_max10fpga;
//end
//endfunction //FEATURE_FAMILY_MAX10FPGA

//function FEATURE_FAMILY_BASE_STRATIXII;
    //input[8*20:1] device;
    //reg var_family_base_stratixii;
//begin
    //if (IS_FAMILY_STRATIXII(device) || IS_FAMILY_HARDCOPYII(device) || FEATURE_FAMILY_STRATIXIIGX(device) )
        //var_family_base_stratixii = 1;
    //else
        //var_family_base_stratixii = 0;

    //FEATURE_FAMILY_BASE_STRATIXII  = var_family_base_stratixii;
//end
//endfunction //FEATURE_FAMILY_BASE_STRATIXII

//function FEATURE_FAMILY_BASE_STRATIX;
    //input[8*20:1] device;
    //reg var_family_base_stratix;
//begin
    //if (IS_FAMILY_STRATIX(device) || IS_FAMILY_STRATIXGX(device) )
        //var_family_base_stratix = 1;
    //else
        //var_family_base_stratix = 0;

    //FEATURE_FAMILY_BASE_STRATIX  = var_family_base_stratix;
//end
//endfunction //FEATURE_FAMILY_BASE_STRATIX

//function FEATURE_FAMILY_BASE_CYCLONEII;
    //input[8*20:1] device;
    //reg var_family_base_cycloneii;
//begin
    //if (IS_FAMILY_CYCLONEII(device) )
        //var_family_base_cycloneii = 1;
    //else
        //var_family_base_cycloneii = 0;

    //FEATURE_FAMILY_BASE_CYCLONEII  = var_family_base_cycloneii;
//end
//endfunction //FEATURE_FAMILY_BASE_CYCLONEII

//function FEATURE_FAMILY_BASE_CYCLONE;
    //input[8*20:1] device;
    //reg var_family_base_cyclone;
//begin
    //if (IS_FAMILY_CYCLONE(device) )
        //var_family_base_cyclone = 1;
    //else
        //var_family_base_cyclone = 0;

    //FEATURE_FAMILY_BASE_CYCLONE  = var_family_base_cyclone;
//end
//endfunction //FEATURE_FAMILY_BASE_CYCLONE

//function FEATURE_FAMILY_HAS_ALTERA_MULT_ADD_FLOW;
    //input[8*20:1] device;
    //reg var_family_has_altera_mult_add_flow;
//begin
    //if (FEATURE_FAMILY_STRATIXV(device) || FEATURE_FAMILY_ARRIAV(device) || FEATURE_FAMILY_CYCLONEV(device) || FEATURE_FAMILY_ARRIA10(device) )
        //var_family_has_altera_mult_add_flow = 1;
    //else
        //var_family_has_altera_mult_add_flow = 0;

    //FEATURE_FAMILY_HAS_ALTERA_MULT_ADD_FLOW  = var_family_has_altera_mult_add_flow;
//end
//endfunction //FEATURE_FAMILY_HAS_ALTERA_MULT_ADD_FLOW

//function FEATURE_FAMILY_IS_ALTMULT_ADD_EOL;
    //input[8*20:1] device;
    //reg var_family_is_altmult_add_eol;
//begin
    //if (FEATURE_FAMILY_ARRIA10(device) )
        //var_family_is_altmult_add_eol = 1;
    //else
        //var_family_is_altmult_add_eol = 0;

    //FEATURE_FAMILY_IS_ALTMULT_ADD_EOL  = var_family_is_altmult_add_eol;
//end
//endfunction //FEATURE_FAMILY_IS_ALTMULT_ADD_EOL

//function FEATURE_FAMILY_HAS_STRATIXII_STYLE_RAM;
    //input[8*20:1] device;
    //reg var_family_has_stratixii_style_ram;
//begin
    //if (FEATURE_FAMILY_STRATIXII(device) || FEATURE_FAMILY_CYCLONEII(device) )
        //var_family_has_stratixii_style_ram = 1;
    //else
        //var_family_has_stratixii_style_ram = 0;

    //FEATURE_FAMILY_HAS_STRATIXII_STYLE_RAM  = var_family_has_stratixii_style_ram;
//end
//endfunction //FEATURE_FAMILY_HAS_STRATIXII_STYLE_RAM

//function FEATURE_FAMILY_HAS_STRATIXIII_STYLE_RAM;
    //input[8*20:1] device;
    //reg var_family_has_stratixiii_style_ram;
//begin
    //if (FEATURE_FAMILY_STRATIXIII(device) || FEATURE_FAMILY_CYCLONEIII(device) )
        //var_family_has_stratixiii_style_ram = 1;
    //else
        //var_family_has_stratixiii_style_ram = 0;

    //FEATURE_FAMILY_HAS_STRATIXIII_STYLE_RAM  = var_family_has_stratixiii_style_ram;
//end
//endfunction //FEATURE_FAMILY_HAS_STRATIXIII_STYLE_RAM

//function FEATURE_FAMILY_HAS_STRATIX_STYLE_PLL;
    //input[8*20:1] device;
    //reg var_family_has_stratix_style_pll;
//begin
    //if (FEATURE_FAMILY_CYCLONE(device) || FEATURE_FAMILY_STRATIX_HC(device) || IS_FAMILY_STRATIX(device) || FEATURE_FAMILY_STRATIXGX(device) )
        //var_family_has_stratix_style_pll = 1;
    //else
        //var_family_has_stratix_style_pll = 0;

    //FEATURE_FAMILY_HAS_STRATIX_STYLE_PLL  = var_family_has_stratix_style_pll;
//end
//endfunction //FEATURE_FAMILY_HAS_STRATIX_STYLE_PLL

//function FEATURE_FAMILY_HAS_STRATIXII_STYLE_PLL;
    //input[8*20:1] device;
    //reg var_family_has_stratixii_style_pll;
//begin
    //if (FEATURE_FAMILY_STRATIXII(device) && ! FEATURE_FAMILY_STRATIXIII(device) || FEATURE_FAMILY_CYCLONEII(device) && ! FEATURE_FAMILY_CYCLONEIII(device) )
        //var_family_has_stratixii_style_pll = 1;
    //else
        //var_family_has_stratixii_style_pll = 0;

    //FEATURE_FAMILY_HAS_STRATIXII_STYLE_PLL  = var_family_has_stratixii_style_pll;
//end
//endfunction //FEATURE_FAMILY_HAS_STRATIXII_STYLE_PLL

//function FEATURE_FAMILY_HAS_INVERTED_OUTPUT_DDIO;
    //input[8*20:1] device;
    //reg var_family_has_inverted_output_ddio;
//begin
    //if (FEATURE_FAMILY_CYCLONEII(device) )
        //var_family_has_inverted_output_ddio = 1;
    //else
        //var_family_has_inverted_output_ddio = 0;

    //FEATURE_FAMILY_HAS_INVERTED_OUTPUT_DDIO  = var_family_has_inverted_output_ddio;
//end
//endfunction //FEATURE_FAMILY_HAS_INVERTED_OUTPUT_DDIO

//function IS_VALID_FAMILY;
    //input[8*20:1] device;
    //reg is_valid;
//begin
    //if (((device == "Arria 10") || (device == "ARRIA 10") || (device == "arria 10") || (device == "Arria10") || (device == "ARRIA10") || (device == "arria10") || (device == "Arria VI") || (device == "ARRIA VI") || (device == "arria vi") || (device == "ArriaVI") || (device == "ARRIAVI") || (device == "arriavi") || (device == "Night Fury") || (device == "NIGHT FURY") || (device == "night fury") || (device == "nightfury") || (device == "NIGHTFURY") || (device == "Arria 10 (GX/SX/GT)") || (device == "ARRIA 10 (GX/SX/GT)") || (device == "arria 10 (gx/sx/gt)") || (device == "Arria10(GX/SX/GT)") || (device == "ARRIA10(GX/SX/GT)") || (device == "arria10(gx/sx/gt)") || (device == "Arria 10 (GX)") || (device == "ARRIA 10 (GX)") || (device == "arria 10 (gx)") || (device == "Arria10(GX)") || (device == "ARRIA10(GX)") || (device == "arria10(gx)") || (device == "Arria 10 (SX)") || (device == "ARRIA 10 (SX)") || (device == "arria 10 (sx)") || (device == "Arria10(SX)") || (device == "ARRIA10(SX)") || (device == "arria10(sx)") || (device == "Arria 10 (GT)") || (device == "ARRIA 10 (GT)") || (device == "arria 10 (gt)") || (device == "Arria10(GT)") || (device == "ARRIA10(GT)") || (device == "arria10(gt)"))
    //|| ((device == "Arria GX") || (device == "ARRIA GX") || (device == "arria gx") || (device == "ArriaGX") || (device == "ARRIAGX") || (device == "arriagx") || (device == "Stratix II GX Lite") || (device == "STRATIX II GX LITE") || (device == "stratix ii gx lite") || (device == "StratixIIGXLite") || (device == "STRATIXIIGXLITE") || (device == "stratixiigxlite"))
    //|| ((device == "Arria II GX") || (device == "ARRIA II GX") || (device == "arria ii gx") || (device == "ArriaIIGX") || (device == "ARRIAIIGX") || (device == "arriaiigx") || (device == "Arria IIGX") || (device == "ARRIA IIGX") || (device == "arria iigx") || (device == "ArriaII GX") || (device == "ARRIAII GX") || (device == "arriaii gx") || (device == "Arria II") || (device == "ARRIA II") || (device == "arria ii") || (device == "ArriaII") || (device == "ARRIAII") || (device == "arriaii") || (device == "Arria II (GX/E)") || (device == "ARRIA II (GX/E)") || (device == "arria ii (gx/e)") || (device == "ArriaII(GX/E)") || (device == "ARRIAII(GX/E)") || (device == "arriaii(gx/e)") || (device == "PIRANHA") || (device == "piranha"))
    //|| ((device == "Arria II GZ") || (device == "ARRIA II GZ") || (device == "arria ii gz") || (device == "ArriaII GZ") || (device == "ARRIAII GZ") || (device == "arriaii gz") || (device == "Arria IIGZ") || (device == "ARRIA IIGZ") || (device == "arria iigz") || (device == "ArriaIIGZ") || (device == "ARRIAIIGZ") || (device == "arriaiigz"))
    //|| ((device == "Arria V GZ") || (device == "ARRIA V GZ") || (device == "arria v gz") || (device == "ArriaVGZ") || (device == "ARRIAVGZ") || (device == "arriavgz"))
    //|| ((device == "Arria V") || (device == "ARRIA V") || (device == "arria v") || (device == "Arria V (GT/GX)") || (device == "ARRIA V (GT/GX)") || (device == "arria v (gt/gx)") || (device == "ArriaV(GT/GX)") || (device == "ARRIAV(GT/GX)") || (device == "arriav(gt/gx)") || (device == "ArriaV") || (device == "ARRIAV") || (device == "arriav") || (device == "Arria V (GT/GX/ST/SX)") || (device == "ARRIA V (GT/GX/ST/SX)") || (device == "arria v (gt/gx/st/sx)") || (device == "ArriaV(GT/GX/ST/SX)") || (device == "ARRIAV(GT/GX/ST/SX)") || (device == "arriav(gt/gx/st/sx)") || (device == "Arria V (GT)") || (device == "ARRIA V (GT)") || (device == "arria v (gt)") || (device == "ArriaV(GT)") || (device == "ARRIAV(GT)") || (device == "arriav(gt)") || (device == "Arria V (GX)") || (device == "ARRIA V (GX)") || (device == "arria v (gx)") || (device == "ArriaV(GX)") || (device == "ARRIAV(GX)") || (device == "arriav(gx)") || (device == "Arria V (ST)") || (device == "ARRIA V (ST)") || (device == "arria v (st)") || (device == "ArriaV(ST)") || (device == "ARRIAV(ST)") || (device == "arriav(st)") || (device == "Arria V (SX)") || (device == "ARRIA V (SX)") || (device == "arria v (sx)") || (device == "ArriaV(SX)") || (device == "ARRIAV(SX)") || (device == "arriav(sx)"))
    //|| ((device == "BS") || (device == "bs"))
    //|| ((device == "Cyclone II") || (device == "CYCLONE II") || (device == "cyclone ii") || (device == "Cycloneii") || (device == "CYCLONEII") || (device == "cycloneii") || (device == "Magellan") || (device == "MAGELLAN") || (device == "magellan") || (device == "CycloneII") || (device == "CYCLONEII") || (device == "cycloneii"))
    //|| ((device == "Cyclone III LS") || (device == "CYCLONE III LS") || (device == "cyclone iii ls") || (device == "CycloneIIILS") || (device == "CYCLONEIIILS") || (device == "cycloneiiils") || (device == "Cyclone III LPS") || (device == "CYCLONE III LPS") || (device == "cyclone iii lps") || (device == "Cyclone LPS") || (device == "CYCLONE LPS") || (device == "cyclone lps") || (device == "CycloneLPS") || (device == "CYCLONELPS") || (device == "cyclonelps") || (device == "Tarpon") || (device == "TARPON") || (device == "tarpon") || (device == "Cyclone IIIE") || (device == "CYCLONE IIIE") || (device == "cyclone iiie"))
    //|| ((device == "Cyclone III") || (device == "CYCLONE III") || (device == "cyclone iii") || (device == "CycloneIII") || (device == "CYCLONEIII") || (device == "cycloneiii") || (device == "Barracuda") || (device == "BARRACUDA") || (device == "barracuda") || (device == "Cuda") || (device == "CUDA") || (device == "cuda") || (device == "CIII") || (device == "ciii"))
    //|| ((device == "Cyclone IV E") || (device == "CYCLONE IV E") || (device == "cyclone iv e") || (device == "CycloneIV E") || (device == "CYCLONEIV E") || (device == "cycloneiv e") || (device == "Cyclone IVE") || (device == "CYCLONE IVE") || (device == "cyclone ive") || (device == "CycloneIVE") || (device == "CYCLONEIVE") || (device == "cycloneive"))
    //|| ((device == "Cyclone IV GX") || (device == "CYCLONE IV GX") || (device == "cyclone iv gx") || (device == "Cyclone IVGX") || (device == "CYCLONE IVGX") || (device == "cyclone ivgx") || (device == "CycloneIV GX") || (device == "CYCLONEIV GX") || (device == "cycloneiv gx") || (device == "CycloneIVGX") || (device == "CYCLONEIVGX") || (device == "cycloneivgx") || (device == "Cyclone IV") || (device == "CYCLONE IV") || (device == "cyclone iv") || (device == "CycloneIV") || (device == "CYCLONEIV") || (device == "cycloneiv") || (device == "Cyclone IV (GX)") || (device == "CYCLONE IV (GX)") || (device == "cyclone iv (gx)") || (device == "CycloneIV(GX)") || (device == "CYCLONEIV(GX)") || (device == "cycloneiv(gx)") || (device == "Cyclone III GX") || (device == "CYCLONE III GX") || (device == "cyclone iii gx") || (device == "CycloneIII GX") || (device == "CYCLONEIII GX") || (device == "cycloneiii gx") || (device == "Cyclone IIIGX") || (device == "CYCLONE IIIGX") || (device == "cyclone iiigx") || (device == "CycloneIIIGX") || (device == "CYCLONEIIIGX") || (device == "cycloneiiigx") || (device == "Cyclone III GL") || (device == "CYCLONE III GL") || (device == "cyclone iii gl") || (device == "CycloneIII GL") || (device == "CYCLONEIII GL") || (device == "cycloneiii gl") || (device == "Cyclone IIIGL") || (device == "CYCLONE IIIGL") || (device == "cyclone iiigl") || (device == "CycloneIIIGL") || (device == "CYCLONEIIIGL") || (device == "cycloneiiigl") || (device == "Stingray") || (device == "STINGRAY") || (device == "stingray"))
    //|| ((device == "Cyclone V") || (device == "CYCLONE V") || (device == "cyclone v") || (device == "CycloneV") || (device == "CYCLONEV") || (device == "cyclonev") || (device == "Cyclone V (GT/GX/E/SX)") || (device == "CYCLONE V (GT/GX/E/SX)") || (device == "cyclone v (gt/gx/e/sx)") || (device == "CycloneV(GT/GX/E/SX)") || (device == "CYCLONEV(GT/GX/E/SX)") || (device == "cyclonev(gt/gx/e/sx)") || (device == "Cyclone V (E/GX/GT/SX/SE/ST)") || (device == "CYCLONE V (E/GX/GT/SX/SE/ST)") || (device == "cyclone v (e/gx/gt/sx/se/st)") || (device == "CycloneV(E/GX/GT/SX/SE/ST)") || (device == "CYCLONEV(E/GX/GT/SX/SE/ST)") || (device == "cyclonev(e/gx/gt/sx/se/st)") || (device == "Cyclone V (E)") || (device == "CYCLONE V (E)") || (device == "cyclone v (e)") || (device == "CycloneV(E)") || (device == "CYCLONEV(E)") || (device == "cyclonev(e)") || (device == "Cyclone V (GX)") || (device == "CYCLONE V (GX)") || (device == "cyclone v (gx)") || (device == "CycloneV(GX)") || (device == "CYCLONEV(GX)") || (device == "cyclonev(gx)") || (device == "Cyclone V (GT)") || (device == "CYCLONE V (GT)") || (device == "cyclone v (gt)") || (device == "CycloneV(GT)") || (device == "CYCLONEV(GT)") || (device == "cyclonev(gt)") || (device == "Cyclone V (SX)") || (device == "CYCLONE V (SX)") || (device == "cyclone v (sx)") || (device == "CycloneV(SX)") || (device == "CYCLONEV(SX)") || (device == "cyclonev(sx)") || (device == "Cyclone V (SE)") || (device == "CYCLONE V (SE)") || (device == "cyclone v (se)") || (device == "CycloneV(SE)") || (device == "CYCLONEV(SE)") || (device == "cyclonev(se)") || (device == "Cyclone V (ST)") || (device == "CYCLONE V (ST)") || (device == "cyclone v (st)") || (device == "CycloneV(ST)") || (device == "CYCLONEV(ST)") || (device == "cyclonev(st)"))
    //|| ((device == "Cyclone") || (device == "CYCLONE") || (device == "cyclone") || (device == "ACEX2K") || (device == "acex2k") || (device == "ACEX 2K") || (device == "acex 2k") || (device == "Tornado") || (device == "TORNADO") || (device == "tornado"))
    //|| ((device == "HardCopy II") || (device == "HARDCOPY II") || (device == "hardcopy ii") || (device == "HardCopyII") || (device == "HARDCOPYII") || (device == "hardcopyii") || (device == "Fusion") || (device == "FUSION") || (device == "fusion"))
    //|| ((device == "HardCopy III") || (device == "HARDCOPY III") || (device == "hardcopy iii") || (device == "HardCopyIII") || (device == "HARDCOPYIII") || (device == "hardcopyiii") || (device == "HCX") || (device == "hcx"))
    //|| ((device == "HardCopy IV") || (device == "HARDCOPY IV") || (device == "hardcopy iv") || (device == "HardCopyIV") || (device == "HARDCOPYIV") || (device == "hardcopyiv") || (device == "HardCopy IV (GX)") || (device == "HARDCOPY IV (GX)") || (device == "hardcopy iv (gx)") || (device == "HardCopy IV (E)") || (device == "HARDCOPY IV (E)") || (device == "hardcopy iv (e)") || (device == "HardCopyIV(GX)") || (device == "HARDCOPYIV(GX)") || (device == "hardcopyiv(gx)") || (device == "HardCopyIV(E)") || (device == "HARDCOPYIV(E)") || (device == "hardcopyiv(e)") || (device == "HCXIV") || (device == "hcxiv") || (device == "HardCopy IV (GX/E)") || (device == "HARDCOPY IV (GX/E)") || (device == "hardcopy iv (gx/e)") || (device == "HardCopy IV (E/GX)") || (device == "HARDCOPY IV (E/GX)") || (device == "hardcopy iv (e/gx)") || (device == "HardCopyIV(GX/E)") || (device == "HARDCOPYIV(GX/E)") || (device == "hardcopyiv(gx/e)") || (device == "HardCopyIV(E/GX)") || (device == "HARDCOPYIV(E/GX)") || (device == "hardcopyiv(e/gx)"))
    //|| ((device == "MAX 10 FPGA") || (device == "max 10 fpga") || (device == "Zippleback") || (device == "ZIPPLEBACK") || (device == "zippleback") || (device == "MAX10FPGA") || (device == "max10fpga") || (device == "MAX 10 FPGA (DA/DF/DC/SF/SC)") || (device == "max 10 fpga (da/df/dc/sf/sc)") || (device == "MAX10FPGA(DA/DF/DC/SF/SC)") || (device == "max10fpga(da/df/dc/sf/sc)") || (device == "MAX 10 FPGA (DA)") || (device == "max 10 fpga (da)") || (device == "MAX10FPGA(DA)") || (device == "max10fpga(da)") || (device == "MAX 10 FPGA (DF)") || (device == "max 10 fpga (df)") || (device == "MAX10FPGA(DF)") || (device == "max10fpga(df)") || (device == "MAX 10 FPGA (DC)") || (device == "max 10 fpga (dc)") || (device == "MAX10FPGA(DC)") || (device == "max10fpga(dc)") || (device == "MAX 10 FPGA (SF)") || (device == "max 10 fpga (sf)") || (device == "MAX10FPGA(SF)") || (device == "max10fpga(sf)") || (device == "MAX 10 FPGA (SC)") || (device == "max 10 fpga (sc)") || (device == "MAX10FPGA(SC)") || (device == "max10fpga(sc)"))
    //|| ((device == "MAX II") || (device == "max ii") || (device == "MAXII") || (device == "maxii") || (device == "Tsunami") || (device == "TSUNAMI") || (device == "tsunami"))
    //|| ((device == "MAX V") || (device == "max v") || (device == "MAXV") || (device == "maxv") || (device == "Jade") || (device == "JADE") || (device == "jade"))
    //|| ((device == "MAX3000A") || (device == "max3000a") || (device == "MAX 3000A") || (device == "max 3000a"))
    //|| ((device == "MAX7000A") || (device == "max7000a") || (device == "MAX 7000A") || (device == "max 7000a"))
    //|| ((device == "MAX7000AE") || (device == "max7000ae") || (device == "MAX 7000AE") || (device == "max 7000ae"))
    //|| ((device == "MAX7000B") || (device == "max7000b") || (device == "MAX 7000B") || (device == "max 7000b"))
    //|| ((device == "MAX7000S") || (device == "max7000s") || (device == "MAX 7000S") || (device == "max 7000s"))
    //|| ((device == "Stratix GX") || (device == "STRATIX GX") || (device == "stratix gx") || (device == "Stratix-GX") || (device == "STRATIX-GX") || (device == "stratix-gx") || (device == "StratixGX") || (device == "STRATIXGX") || (device == "stratixgx") || (device == "Aurora") || (device == "AURORA") || (device == "aurora"))
    //|| ((device == "Stratix II GX") || (device == "STRATIX II GX") || (device == "stratix ii gx") || (device == "StratixIIGX") || (device == "STRATIXIIGX") || (device == "stratixiigx"))
    //|| ((device == "Stratix II") || (device == "STRATIX II") || (device == "stratix ii") || (device == "StratixII") || (device == "STRATIXII") || (device == "stratixii") || (device == "Armstrong") || (device == "ARMSTRONG") || (device == "armstrong"))
    //|| ((device == "Stratix III") || (device == "STRATIX III") || (device == "stratix iii") || (device == "StratixIII") || (device == "STRATIXIII") || (device == "stratixiii") || (device == "Titan") || (device == "TITAN") || (device == "titan") || (device == "SIII") || (device == "siii"))
    //|| ((device == "Stratix IV") || (device == "STRATIX IV") || (device == "stratix iv") || (device == "TGX") || (device == "tgx") || (device == "StratixIV") || (device == "STRATIXIV") || (device == "stratixiv") || (device == "Stratix IV (GT)") || (device == "STRATIX IV (GT)") || (device == "stratix iv (gt)") || (device == "Stratix IV (GX)") || (device == "STRATIX IV (GX)") || (device == "stratix iv (gx)") || (device == "Stratix IV (E)") || (device == "STRATIX IV (E)") || (device == "stratix iv (e)") || (device == "StratixIV(GT)") || (device == "STRATIXIV(GT)") || (device == "stratixiv(gt)") || (device == "StratixIV(GX)") || (device == "STRATIXIV(GX)") || (device == "stratixiv(gx)") || (device == "StratixIV(E)") || (device == "STRATIXIV(E)") || (device == "stratixiv(e)") || (device == "StratixIIIGX") || (device == "STRATIXIIIGX") || (device == "stratixiiigx") || (device == "Stratix IV (GT/GX/E)") || (device == "STRATIX IV (GT/GX/E)") || (device == "stratix iv (gt/gx/e)") || (device == "Stratix IV (GT/E/GX)") || (device == "STRATIX IV (GT/E/GX)") || (device == "stratix iv (gt/e/gx)") || (device == "Stratix IV (E/GT/GX)") || (device == "STRATIX IV (E/GT/GX)") || (device == "stratix iv (e/gt/gx)") || (device == "Stratix IV (E/GX/GT)") || (device == "STRATIX IV (E/GX/GT)") || (device == "stratix iv (e/gx/gt)") || (device == "StratixIV(GT/GX/E)") || (device == "STRATIXIV(GT/GX/E)") || (device == "stratixiv(gt/gx/e)") || (device == "StratixIV(GT/E/GX)") || (device == "STRATIXIV(GT/E/GX)") || (device == "stratixiv(gt/e/gx)") || (device == "StratixIV(E/GX/GT)") || (device == "STRATIXIV(E/GX/GT)") || (device == "stratixiv(e/gx/gt)") || (device == "StratixIV(E/GT/GX)") || (device == "STRATIXIV(E/GT/GX)") || (device == "stratixiv(e/gt/gx)") || (device == "Stratix IV (GX/E)") || (device == "STRATIX IV (GX/E)") || (device == "stratix iv (gx/e)") || (device == "StratixIV(GX/E)") || (device == "STRATIXIV(GX/E)") || (device == "stratixiv(gx/e)"))
    //|| ((device == "Stratix V") || (device == "STRATIX V") || (device == "stratix v") || (device == "StratixV") || (device == "STRATIXV") || (device == "stratixv") || (device == "Stratix V (GS)") || (device == "STRATIX V (GS)") || (device == "stratix v (gs)") || (device == "StratixV(GS)") || (device == "STRATIXV(GS)") || (device == "stratixv(gs)") || (device == "Stratix V (GT)") || (device == "STRATIX V (GT)") || (device == "stratix v (gt)") || (device == "StratixV(GT)") || (device == "STRATIXV(GT)") || (device == "stratixv(gt)") || (device == "Stratix V (GX)") || (device == "STRATIX V (GX)") || (device == "stratix v (gx)") || (device == "StratixV(GX)") || (device == "STRATIXV(GX)") || (device == "stratixv(gx)") || (device == "Stratix V (GS/GX)") || (device == "STRATIX V (GS/GX)") || (device == "stratix v (gs/gx)") || (device == "StratixV(GS/GX)") || (device == "STRATIXV(GS/GX)") || (device == "stratixv(gs/gx)") || (device == "Stratix V (GS/GT)") || (device == "STRATIX V (GS/GT)") || (device == "stratix v (gs/gt)") || (device == "StratixV(GS/GT)") || (device == "STRATIXV(GS/GT)") || (device == "stratixv(gs/gt)") || (device == "Stratix V (GT/GX)") || (device == "STRATIX V (GT/GX)") || (device == "stratix v (gt/gx)") || (device == "StratixV(GT/GX)") || (device == "STRATIXV(GT/GX)") || (device == "stratixv(gt/gx)") || (device == "Stratix V (GX/GS)") || (device == "STRATIX V (GX/GS)") || (device == "stratix v (gx/gs)") || (device == "StratixV(GX/GS)") || (device == "STRATIXV(GX/GS)") || (device == "stratixv(gx/gs)") || (device == "Stratix V (GT/GS)") || (device == "STRATIX V (GT/GS)") || (device == "stratix v (gt/gs)") || (device == "StratixV(GT/GS)") || (device == "STRATIXV(GT/GS)") || (device == "stratixv(gt/gs)") || (device == "Stratix V (GX/GT)") || (device == "STRATIX V (GX/GT)") || (device == "stratix v (gx/gt)") || (device == "StratixV(GX/GT)") || (device == "STRATIXV(GX/GT)") || (device == "stratixv(gx/gt)") || (device == "Stratix V (GS/GT/GX)") || (device == "STRATIX V (GS/GT/GX)") || (device == "stratix v (gs/gt/gx)") || (device == "Stratix V (GS/GX/GT)") || (device == "STRATIX V (GS/GX/GT)") || (device == "stratix v (gs/gx/gt)") || (device == "Stratix V (GT/GS/GX)") || (device == "STRATIX V (GT/GS/GX)") || (device == "stratix v (gt/gs/gx)") || (device == "Stratix V (GT/GX/GS)") || (device == "STRATIX V (GT/GX/GS)") || (device == "stratix v (gt/gx/gs)") || (device == "Stratix V (GX/GS/GT)") || (device == "STRATIX V (GX/GS/GT)") || (device == "stratix v (gx/gs/gt)") || (device == "Stratix V (GX/GT/GS)") || (device == "STRATIX V (GX/GT/GS)") || (device == "stratix v (gx/gt/gs)") || (device == "StratixV(GS/GT/GX)") || (device == "STRATIXV(GS/GT/GX)") || (device == "stratixv(gs/gt/gx)") || (device == "StratixV(GS/GX/GT)") || (device == "STRATIXV(GS/GX/GT)") || (device == "stratixv(gs/gx/gt)") || (device == "StratixV(GT/GS/GX)") || (device == "STRATIXV(GT/GS/GX)") || (device == "stratixv(gt/gs/gx)") || (device == "StratixV(GT/GX/GS)") || (device == "STRATIXV(GT/GX/GS)") || (device == "stratixv(gt/gx/gs)") || (device == "StratixV(GX/GS/GT)") || (device == "STRATIXV(GX/GS/GT)") || (device == "stratixv(gx/gs/gt)") || (device == "StratixV(GX/GT/GS)") || (device == "STRATIXV(GX/GT/GS)") || (device == "stratixv(gx/gt/gs)") || (device == "Stratix V (GS/GT/GX/E)") || (device == "STRATIX V (GS/GT/GX/E)") || (device == "stratix v (gs/gt/gx/e)") || (device == "StratixV(GS/GT/GX/E)") || (device == "STRATIXV(GS/GT/GX/E)") || (device == "stratixv(gs/gt/gx/e)") || (device == "Stratix V (E)") || (device == "STRATIX V (E)") || (device == "stratix v (e)") || (device == "StratixV(E)") || (device == "STRATIXV(E)") || (device == "stratixv(e)"))
    //|| ((device == "Stratix") || (device == "STRATIX") || (device == "stratix") || (device == "Yeager") || (device == "YEAGER") || (device == "yeager"))
    //|| ((device == "eFPGA 28 HPM") || (device == "EFPGA 28 HPM") || (device == "efpga 28 hpm") || (device == "eFPGA28HPM") || (device == "EFPGA28HPM") || (device == "efpga28hpm") || (device == "Bedrock") || (device == "BEDROCK") || (device == "bedrock")))
        //is_valid = 1;
    //else
        //is_valid = 0;

    //IS_VALID_FAMILY = is_valid;
//end
//endfunction // IS_VALID_FAMILY


/*endmodule // ALTERA_DEVICE_FAMILIES*/

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

`timescale 1 ps / 1 ps

// BEGINNING OF MODULE

// MODULE DECLARATION

module altsyncram   (
                    wren_a,
                    wren_b,
                    rden_a,
                    rden_b,
                    data_a,
                    data_b,
                    address_a,
                    address_b,
                    clock0,
                    clock1,
                    clocken0,
                    clocken1,
                    clocken2,
                    clocken3,
                    aclr0,
                    aclr1,
                    byteena_a,
                    byteena_b,
                    addressstall_a,
                    addressstall_b,
                    q_a,
                    q_b,
                    eccstatus
                    );

// GLOBAL PARAMETER DECLARATION

    // PORT A PARAMETERS
    parameter width_a          = 1;
    parameter widthad_a        = 1;
    parameter numwords_a       = 0;
    parameter outdata_reg_a    = "UNREGISTERED";
    parameter address_aclr_a   = "NONE";
    parameter outdata_aclr_a   = "NONE";
    parameter indata_aclr_a    = "NONE";
    parameter wrcontrol_aclr_a = "NONE";
    parameter byteena_aclr_a   = "NONE";
    parameter width_byteena_a  = 1;

    // PORT B PARAMETERS
    parameter width_b                   = 1;
    parameter widthad_b                 = 1;
    parameter numwords_b                = 0;
    parameter rdcontrol_reg_b           = "CLOCK1";
    parameter address_reg_b             = "CLOCK1";
    parameter outdata_reg_b             = "UNREGISTERED";
    parameter outdata_aclr_b            = "NONE";
    parameter rdcontrol_aclr_b          = "NONE";
    parameter indata_reg_b              = "CLOCK1";
    parameter wrcontrol_wraddress_reg_b = "CLOCK1";
    parameter byteena_reg_b             = "CLOCK1";
    parameter indata_aclr_b             = "NONE";
    parameter wrcontrol_aclr_b          = "NONE";
    parameter address_aclr_b            = "NONE";
    parameter byteena_aclr_b            = "NONE";
    parameter width_byteena_b           = 1;

    // STRATIX II RELATED PARAMETERS
    parameter clock_enable_input_a  = "NORMAL";
    parameter clock_enable_output_a = "NORMAL";
    parameter clock_enable_input_b  = "NORMAL";
    parameter clock_enable_output_b = "NORMAL";

    parameter clock_enable_core_a = "USE_INPUT_CLKEN";
    parameter clock_enable_core_b = "USE_INPUT_CLKEN";
    parameter read_during_write_mode_port_a = "NEW_DATA_NO_NBE_READ";
    parameter read_during_write_mode_port_b = "NEW_DATA_NO_NBE_READ";

    // ECC STATUS RELATED PARAMETERS
    parameter enable_ecc = "FALSE";
    parameter width_eccstatus = 3;
	parameter ecc_pipeline_stage_enabled = "FALSE";

    // GLOBAL PARAMETERS
    parameter operation_mode                     = "BIDIR_DUAL_PORT";
    parameter byte_size                          = 0;
    parameter read_during_write_mode_mixed_ports = "DONT_CARE";
    parameter ram_block_type                     = "AUTO";
    parameter init_file                          = "UNUSED";
    parameter init_file_layout                   = "UNUSED";
    parameter maximum_depth                      = 0;
    parameter intended_device_family             = "Stratix";

    parameter lpm_hint                           = "UNUSED";
    parameter lpm_type                           = "altsyncram";

    parameter implement_in_les                 = "OFF";
    
    parameter power_up_uninitialized            = "FALSE";
    
// SIMULATION_ONLY_PARAMETERS_BEGIN

    parameter sim_show_memory_data_in_port_b_layout  = "OFF";

// SIMULATION_ONLY_PARAMETERS_END
    
// LOCAL_PARAMETERS_BEGIN
    
    parameter is_lutram = ((ram_block_type == "LUTRAM") || (ram_block_type == "MLAB"))? 1 : 0;
    
    parameter is_bidir_and_wrcontrol_addb_clk0 =    (((operation_mode == "BIDIR_DUAL_PORT") && (address_reg_b == "CLOCK0"))? 
                                                    1 : 0);

    parameter is_bidir_and_wrcontrol_addb_clk1 =    (((operation_mode == "BIDIR_DUAL_PORT") && (address_reg_b == "CLOCK1"))? 
                                                    1 : 0);

    parameter check_simultaneous_read_write =   (((operation_mode == "BIDIR_DUAL_PORT") || (operation_mode == "DUAL_PORT")) && 
                                                ((ram_block_type == "M-RAM") || 
                                                    (ram_block_type == "MEGARAM") || 
                                                    ((ram_block_type == "AUTO") && ((read_during_write_mode_mixed_ports == "DONT_CARE") || (read_during_write_mode_mixed_ports == "CONSTRAINED_DONT_CARE"))) ||
                                                    ((is_lutram == 1) && ((read_during_write_mode_mixed_ports != "OLD_DATA") || (outdata_reg_b == "UNREGISTERED")))))? 1 : 0;

    parameter dual_port_addreg_b_clk0 = (((operation_mode == "DUAL_PORT") && (address_reg_b == "CLOCK0"))? 1: 0);

    parameter dual_port_addreg_b_clk1 = (((operation_mode == "DUAL_PORT") && (address_reg_b == "CLOCK1"))? 1: 0);

    parameter i_byte_size_tmp = (width_byteena_a > 1)? width_a / width_byteena_a : 8;
    
    parameter i_lutram_read = (((is_lutram == 1) && (read_during_write_mode_port_a == "DONT_CARE")) ||
                                ((is_lutram == 1) && (outdata_reg_a == "UNREGISTERED") && (operation_mode == "SINGLE_PORT")))? 1 : 0;

   parameter enable_mem_data_b_reading =  (sim_show_memory_data_in_port_b_layout == "ON") && ((operation_mode == "BIDIR_DUAL_PORT") || (operation_mode == "DUAL_PORT")) ? 1 : 0;

   parameter family_arriav = ((intended_device_family == "Arria V") || (intended_device_family == "ARRIA V") || (intended_device_family == "arria v") || (intended_device_family == "ArriaV") || (intended_device_family == "ARRIAV") || (intended_device_family == "arriav") || (intended_device_family == "Arria V (GS)") || (intended_device_family == "ARRIA V (GS)") || (intended_device_family == "arria v (gs)") || (intended_device_family == "ArriaV(GS)") || (intended_device_family == "ARRIAV(GS)") || (intended_device_family == "arriav(gs)") || (intended_device_family == "Arria V (GX)") || (intended_device_family == "ARRIA V (GX)") || (intended_device_family == "arria v (gx)") || (intended_device_family == "ArriaV(GX)") || (intended_device_family == "ARRIAV(GX)") || (intended_device_family == "arriav(gx)") || (intended_device_family == "Arria V (GS/GX)") || (intended_device_family == "ARRIA V (GS/GX)") || (intended_device_family == "arria v (gs/gx)") || (intended_device_family == "ArriaV(GS/GX)") || (intended_device_family == "ARRIAV(GS/GX)") || (intended_device_family == "arriav(gs/gx)") || (intended_device_family == "Arria V (GX/GS)") || (intended_device_family == "ARRIA V (GX/GS)") || (intended_device_family == "arria v (gx/gs)") || (intended_device_family == "ArriaV(GX/GS)") || (intended_device_family == "ARRIAV(GX/GS)") || (intended_device_family == "arriav(gx/gs)")) ? 1 : 0;

   parameter family_cyclonev = ((intended_device_family == "Cyclone V") || (intended_device_family == "CYCLONE V") || (intended_device_family == "cyclone v") || (intended_device_family == "CycloneV") || (intended_device_family == "CYCLONEV") || (intended_device_family == "cyclonev") || (intended_device_family == "Cyclone V (GS)") || (intended_device_family == "CYCLONE V (GS)") || (intended_device_family == "cyclone v (gs)") || (intended_device_family == "CycloneV(GS)") || (intended_device_family == "CYCLONEV(GS)") || (intended_device_family == "cyclonev(gs)") || (intended_device_family == "Cyclone V (GX)") || (intended_device_family == "CYCLONE V (GX)") || (intended_device_family == "cyclone v (gx)") || (intended_device_family == "CycloneV(GX)") || (intended_device_family == "CYCLONEV(GX)") || (intended_device_family == "cyclonev(gx)") || (intended_device_family == "Cyclone V (GS/GX)") || (intended_device_family == "CYCLONE V (GS/GX)") || (intended_device_family == "cyclone v (gs/gx)") || (intended_device_family == "CycloneV(GS/GX)") || (intended_device_family == "CYCLONEV(GS/GX)") || (intended_device_family == "cyclonev(gs/gx)") || (intended_device_family == "Cyclone V (GX/GS)") || (intended_device_family == "CYCLONE V (GX/GS)") || (intended_device_family == "cyclone v (gx/gs)") || (intended_device_family == "CycloneV(GX/GS)") || (intended_device_family == "CYCLONEV(GX/GS)") || (intended_device_family == "cyclonev(gx/gs)")) ? 1 : 0;
   
   parameter family_base_arriav = ((family_arriav == 1) || (family_cyclonev == 1)) ? 1 : 0 ;

   parameter family_arria10 = ((intended_device_family == "Arria 10") || (intended_device_family == "ARRIA 10") || (intended_device_family == "arria 10") || (intended_device_family == "Arria10") || (intended_device_family == "ARRIA10") || (intended_device_family == "arria10")) ? 1 : 0;
   
   parameter family_arriavi = ((intended_device_family == "Arria VI") || (intended_device_family == "ARRIA VI") || (intended_device_family == "arria vi") || (intended_device_family == "ArriaVI") || (intended_device_family == "ARRIAVI") || (intended_device_family == "arriavi") || (intended_device_family == "arria vi")) ? 1 : 0;

   parameter family_nightfury = ((intended_device_family == "Nightfury") || (intended_device_family == "NIGHTFURY") || (intended_device_family == "nightfury") || (intended_device_family == "Night Fury")  || (intended_device_family == "NIGHT FURY") || (intended_device_family == "night fury") || (family_arriavi == 1) || (family_arria10 == 1)) ? 1 : 0;
   
   parameter family_arriavgz = ((intended_device_family == "Arria V GZ") || (intended_device_family == "ARRIA V GZ") || (intended_device_family == "arria v gz") || (intended_device_family == "ArriaVGZ")  || (intended_device_family == "ARRIAVGZ")  || (intended_device_family == "arriavgz")) ? 1 : 0;

   parameter family_stratixv = ((intended_device_family == "Stratix V") || (intended_device_family == "STRATIX V") || (intended_device_family == "stratix v") || (intended_device_family == "StratixV") || (intended_device_family == "STRATIXV") || (intended_device_family == "stratixv") || (intended_device_family == "Stratix V (GS)") || (intended_device_family == "STRATIX V (GS)") || (intended_device_family == "stratix v (gs)") || (intended_device_family == "StratixV(GS)") || (intended_device_family == "STRATIXV(GS)") || (intended_device_family == "stratixv(gs)") || (intended_device_family == "Stratix V (GX)") || (intended_device_family == "STRATIX V (GX)") || (intended_device_family == "stratix v (gx)") || (intended_device_family == "StratixV(GX)") || (intended_device_family == "STRATIXV(GX)") || (intended_device_family == "stratixv(gx)") || (intended_device_family == "Stratix V (GS/GX)") || (intended_device_family == "STRATIX V (GS/GX)") || (intended_device_family == "stratix v (gs/gx)") || (intended_device_family == "StratixV(GS/GX)") || (intended_device_family == "STRATIXV(GS/GX)") || (intended_device_family == "stratixv(gs/gx)") || (intended_device_family == "Stratix V (GX/GS)") || (intended_device_family == "STRATIX V (GX/GS)") || (intended_device_family == "stratix v (gx/gs)") || (intended_device_family == "StratixV(GX/GS)") || (intended_device_family == "STRATIXV(GX/GS)") || (intended_device_family == "stratixv(gx/gs)") || (family_base_arriav == 1)  || (family_nightfury == 1) || (family_arriavgz == 1)) ? 1 : 0;
    
   parameter family_hardcopyiv = ((intended_device_family == "HardCopy IV") || (intended_device_family == "HARDCOPY IV") || (intended_device_family == "hardcopy iv") || (intended_device_family == "HardCopyIV") || (intended_device_family == "HARDCOPYIV") || (intended_device_family == "hardcopyiv") || (intended_device_family == "HardCopy IV (GX)") || (intended_device_family == "HARDCOPY IV (GX)") || (intended_device_family == "hardcopy iv (gx)") || (intended_device_family == "HardCopy IV (E)") || (intended_device_family == "HARDCOPY IV (E)") || (intended_device_family == "hardcopy iv (e)") || (intended_device_family == "HardCopyIV(GX)") || (intended_device_family == "HARDCOPYIV(GX)") || (intended_device_family == "hardcopyiv(gx)") || (intended_device_family == "HardCopyIV(E)") || (intended_device_family == "HARDCOPYIV(E)") || (intended_device_family == "hardcopyiv(e)") || (intended_device_family == "HCXIV") || (intended_device_family == "hcxiv") || (intended_device_family == "HardCopy IV (GX/E)") || (intended_device_family == "HARDCOPY IV (GX/E)") || (intended_device_family == "hardcopy iv (gx/e)") || (intended_device_family == "HardCopy IV (E/GX)") || (intended_device_family == "HARDCOPY IV (E/GX)") || (intended_device_family == "hardcopy iv (e/gx)") || (intended_device_family == "HardCopyIV(GX/E)") || (intended_device_family == "HARDCOPYIV(GX/E)") || (intended_device_family == "hardcopyiv(gx/e)") || (intended_device_family == "HardCopyIV(E/GX)") || (intended_device_family == "HARDCOPYIV(E/GX)") || (intended_device_family == "hardcopyiv(e/gx)")) ? 1 : 0 ;
   
   parameter family_hardcopyiii = ((intended_device_family == "HardCopy III") || (intended_device_family == "HARDCOPY III") || (intended_device_family == "hardcopy iii") || (intended_device_family == "HardCopyIII") || (intended_device_family == "HARDCOPYIII") || (intended_device_family == "hardcopyiii") || (intended_device_family == "HCX") || (intended_device_family == "hcx")) ? 1 : 0;
   
   parameter family_hardcopyii = ((intended_device_family == "HardCopy II") || (intended_device_family == "HARDCOPY II") || (intended_device_family == "hardcopy ii") || (intended_device_family == "HardCopyII") || (intended_device_family == "HARDCOPYII") || (intended_device_family == "hardcopyii") || (intended_device_family == "Fusion") || (intended_device_family == "FUSION") || (intended_device_family == "fusion")) ? 1 : 0 ;
   
   parameter family_arriaiigz = ((intended_device_family == "Arria II GZ") || (intended_device_family == "ARRIA II GZ") || (intended_device_family == "arria ii gz") || (intended_device_family == "ArriaII GZ") || (intended_device_family == "ARRIAII GZ") || (intended_device_family == "arriaii gz") || (intended_device_family == "Arria IIGZ") || (intended_device_family == "ARRIA IIGZ") || (intended_device_family == "arria iigz") || (intended_device_family == "ArriaIIGZ") || (intended_device_family == "ARRIAIIGZ") || (intended_device_family == "arriaii gz")) ? 1 : 0 ;
   parameter family_arriaiigx = ((intended_device_family == "Arria II GX") || (intended_device_family == "ARRIA II GX") || (intended_device_family == "arria ii gx") || (intended_device_family == "ArriaIIGX") || (intended_device_family == "ARRIAIIGX") || (intended_device_family == "arriaiigx") || (intended_device_family == "Arria IIGX") || (intended_device_family == "ARRIA IIGX") || (intended_device_family == "arria iigx") || (intended_device_family == "ArriaII GX") || (intended_device_family == "ARRIAII GX") || (intended_device_family == "arriaii gx") || (intended_device_family == "Arria II") || (intended_device_family == "ARRIA II") || (intended_device_family == "arria ii") || (intended_device_family == "ArriaII") || (intended_device_family == "ARRIAII") || (intended_device_family == "arriaii") || (intended_device_family == "Arria II (GX/E)") || (intended_device_family == "ARRIA II (GX/E)") || (intended_device_family == "arria ii (gx/e)") || (intended_device_family == "ArriaII(GX/E)") || (intended_device_family == "ARRIAII(GX/E)") || (intended_device_family == "arriaii(gx/e)") || (intended_device_family == "PIRANHA") || (intended_device_family == "piranha")) ? 1 : 0 ;

   parameter family_stratixiii = ((intended_device_family == "Stratix III") || (intended_device_family == "STRATIX III") || (intended_device_family == "stratix iii") || (intended_device_family == "StratixIII") || (intended_device_family == "STRATIXIII") || (intended_device_family == "stratixiii") || (intended_device_family == "Titan") || (intended_device_family == "TITAN") || (intended_device_family == "titan") || (intended_device_family == "SIII") || (intended_device_family == "siii") || (intended_device_family == "Stratix IV") || (intended_device_family == "STRATIX IV") || (intended_device_family == "stratix iv") || (intended_device_family == "TGX") || (intended_device_family == "tgx") || (intended_device_family == "StratixIV") || (intended_device_family == "STRATIXIV") || (intended_device_family == "stratixiv") || (intended_device_family == "Stratix IV (GT)") || (intended_device_family == "STRATIX IV (GT)") || (intended_device_family == "stratix iv (gt)") || (intended_device_family == "Stratix IV (GX)") || (intended_device_family == "STRATIX IV (GX)") || (intended_device_family == "stratix iv (gx)") || (intended_device_family == "Stratix IV (E)") || (intended_device_family == "STRATIX IV (E)") || (intended_device_family == "stratix iv (e)") || (intended_device_family == "StratixIV(GT)") || (intended_device_family == "STRATIXIV(GT)") || (intended_device_family == "stratixiv(gt)") || (intended_device_family == "StratixIV(GX)") || (intended_device_family == "STRATIXIV(GX)") || (intended_device_family == "stratixiv(gx)") || (intended_device_family == "StratixIV(E)") || (intended_device_family == "STRATIXIV(E)") || (intended_device_family == "stratixiv(e)") || (intended_device_family == "StratixIIIGX") || (intended_device_family == "STRATIXIIIGX") || (intended_device_family == "stratixiiigx") || (intended_device_family == "Stratix IV (GT/GX/E)") || (intended_device_family == "STRATIX IV (GT/GX/E)") || (intended_device_family == "stratix iv (gt/gx/e)") || (intended_device_family == "Stratix IV (GT/E/GX)") || (intended_device_family == "STRATIX IV (GT/E/GX)") || (intended_device_family == "stratix iv (gt/e/gx)") || (intended_device_family == "Stratix IV (E/GT/GX)") || (intended_device_family == "STRATIX IV (E/GT/GX)") || (intended_device_family == "stratix iv (e/gt/gx)") || (intended_device_family == "Stratix IV (E/GX/GT)") || (intended_device_family == "STRATIX IV (E/GX/GT)") || (intended_device_family == "stratix iv (e/gx/gt)") || (intended_device_family == "StratixIV(GT/GX/E)") || (intended_device_family == "STRATIXIV(GT/GX/E)") || (intended_device_family == "stratixiv(gt/gx/e)") || (intended_device_family == "StratixIV(GT/E/GX)") || (intended_device_family == "STRATIXIV(GT/E/GX)") || (intended_device_family == "stratixiv(gt/e/gx)") || (intended_device_family == "StratixIV(E/GX/GT)") || (intended_device_family == "STRATIXIV(E/GX/GT)") || (intended_device_family == "stratixiv(e/gx/gt)") || (intended_device_family == "StratixIV(E/GT/GX)") || (intended_device_family == "STRATIXIV(E/GT/GX)") || (intended_device_family == "stratixiv(e/gt/gx)") || (intended_device_family == "Stratix IV (GX/E)") || (intended_device_family == "STRATIX IV (GX/E)") || (intended_device_family == "stratix iv (gx/e)") || (intended_device_family == "StratixIV(GX/E)") || (intended_device_family == "STRATIXIV(GX/E)") || (intended_device_family == "stratixiv(gx/e)") || (family_arriaiigx == 1) || (family_hardcopyiv == 1) || (family_hardcopyiii == 1) || (family_stratixv == 1) || (family_arriaiigz == 1) || (family_base_arriav == 1)) ? 1 : 0 ;
   
   parameter family_zippleback = ((intended_device_family == "MAX 10 FPGA") || (intended_device_family == "max 10 fpga") || (intended_device_family == "Zippleback") || (intended_device_family == "ZIPPLEBACK")|| (intended_device_family == "zippleback")|| (intended_device_family == "MAX10FPGA")|| (intended_device_family == "max10fpga")|| (intended_device_family == "MAX 10 FPGA (DA/DF/DC/SF/SC)")|| (intended_device_family == "max 10 fpga (da/df/dc/sf/sc)")|| (intended_device_family == "MAX10FPGA(DA/DF/DC/SF/SC)")|| (intended_device_family == "max10fpga(da/df/dc/sf/sc)")|| (intended_device_family == "MAX 10 FPGA (DA)")|| (intended_device_family == "max 10 fpga (da)")|| (intended_device_family == "MAX10FPGA(DA)")|| (intended_device_family == "max10fpga(da)")|| (intended_device_family == "MAX 10 FPGA (DF)")|| (intended_device_family == "max 10 fpga (df)")|| (intended_device_family == "MAX10FPGA(DF)")|| (intended_device_family == "max10fpga(df)")|| (intended_device_family == "MAX 10 FPGA (DC)")|| (intended_device_family == "max 10 fpga (dc)")|| (intended_device_family == "MAX10FPGA(DC)")|| (intended_device_family == "max10fpga(dc)")|| (intended_device_family == "MAX 10 FPGA (SF)")|| (intended_device_family == "max 10 fpga (sf)")|| (intended_device_family == "MAX10FPGA(SF)")|| (intended_device_family == "max10fpga(sf)")|| (intended_device_family == "MAX 10 FPGA (SC)")|| (intended_device_family == "max 10 fpga (sc)")|| (intended_device_family == "MAX10FPGA(SC)")|| (intended_device_family == "max10fpga(sc)")) ? 1 : 0 ;
   
   parameter family_cycloneiii = ((intended_device_family == "Cyclone III") || (intended_device_family == "CYCLONE III") || (intended_device_family == "cyclone iii") || (intended_device_family == "CycloneIII") || (intended_device_family == "CYCLONEIII") || (intended_device_family == "cycloneiii") || (intended_device_family == "Barracuda") || (intended_device_family == "BARRACUDA") || (intended_device_family == "barracuda") || (intended_device_family == "Cuda") || (intended_device_family == "CUDA") || (intended_device_family == "cuda") || (intended_device_family == "CIII") || (intended_device_family == "ciii") || (intended_device_family == "Cyclone III LS") || (intended_device_family == "CYCLONE III LS") || (intended_device_family == "cyclone iii ls") || (intended_device_family == "CycloneIIILS") || (intended_device_family == "CYCLONEIIILS") || (intended_device_family == "cycloneiiils") || (intended_device_family == "Cyclone III LPS") || (intended_device_family == "CYCLONE III LPS") || (intended_device_family == "cyclone iii lps") || (intended_device_family == "Cyclone LPS") || (intended_device_family == "CYCLONE LPS") || (intended_device_family == "cyclone lps") || (intended_device_family == "CycloneLPS") || (intended_device_family == "CYCLONELPS") || (intended_device_family == "cyclonelps") || (intended_device_family == "Tarpon") || (intended_device_family == "TARPON") || (intended_device_family == "tarpon") || (intended_device_family == "Cyclone IIIE") || (intended_device_family == "CYCLONE IIIE") || (intended_device_family == "cyclone iiie") || (intended_device_family == "Cyclone IV GX") || (intended_device_family == "CYCLONE IV GX") || (intended_device_family == "cyclone iv gx") || (intended_device_family == "Cyclone IVGX") || (intended_device_family == "CYCLONE IVGX") || (intended_device_family == "cyclone ivgx") || (intended_device_family == "CycloneIV GX") || (intended_device_family == "CYCLONEIV GX") || (intended_device_family == "cycloneiv gx") || (intended_device_family == "CycloneIVGX") || (intended_device_family == "CYCLONEIVGX") || (intended_device_family == "cycloneivgx") || (intended_device_family == "Cyclone IV") || (intended_device_family == "CYCLONE IV") || (intended_device_family == "cyclone iv") || (intended_device_family == "CycloneIV") || (intended_device_family == "CYCLONEIV") || (intended_device_family == "cycloneiv") || (intended_device_family == "Cyclone IV (GX)") || (intended_device_family == "CYCLONE IV (GX)") || (intended_device_family == "cyclone iv (gx)") || (intended_device_family == "CycloneIV(GX)") || (intended_device_family == "CYCLONEIV(GX)") || (intended_device_family == "cycloneiv(gx)") || (intended_device_family == "Cyclone III GX") || (intended_device_family == "CYCLONE III GX") || (intended_device_family == "cyclone iii gx") || (intended_device_family == "CycloneIII GX") || (intended_device_family == "CYCLONEIII GX") || (intended_device_family == "cycloneiii gx") || (intended_device_family == "Cyclone IIIGX") || (intended_device_family == "CYCLONE IIIGX") || (intended_device_family == "cyclone iiigx") || (intended_device_family == "CycloneIIIGX") || (intended_device_family == "CYCLONEIIIGX") || (intended_device_family == "cycloneiiigx") || (intended_device_family == "Cyclone III GL") || (intended_device_family == "CYCLONE III GL") || (intended_device_family == "cyclone iii gl") || (intended_device_family == "CycloneIII GL") || (intended_device_family == "CYCLONEIII GL") || (intended_device_family == "cycloneiii gl") || (intended_device_family == "Cyclone IIIGL") || (intended_device_family == "CYCLONE IIIGL") || (intended_device_family == "cyclone iiigl") || (intended_device_family == "CycloneIIIGL") || (intended_device_family == "CYCLONEIIIGL") || (intended_device_family == "cycloneiiigl") || (intended_device_family == "Stingray") || (intended_device_family == "STINGRAY") || (intended_device_family == "stingray") || (intended_device_family == "Cyclone IV E") || (intended_device_family == "CYCLONE IV E") || (intended_device_family == "cyclone iv e") || (intended_device_family == "CycloneIV E") || (intended_device_family == "CYCLONEIV E") || (intended_device_family == "cycloneiv e") || (intended_device_family == "Cyclone IVE") || (intended_device_family == "CYCLONE IVE") || (intended_device_family == "cyclone ive") || (intended_device_family == "CycloneIVE") || (intended_device_family == "CYCLONEIVE") || (intended_device_family == "cycloneive") || family_zippleback) ? 1 : 0 ;

   parameter family_cyclone = ((intended_device_family == "Cyclone") || (intended_device_family == "CYCLONE") || (intended_device_family == "cyclone") || (intended_device_family == "ACEX2K") || (intended_device_family == "acex2k") || (intended_device_family == "ACEX 2K") || (intended_device_family == "acex 2k") || (intended_device_family == "Tornado") || (intended_device_family == "TORNADO") || (intended_device_family == "tornado")) ? 1 : 0 ;
   
   parameter family_base_cycloneii = ((intended_device_family == "Cyclone II") || (intended_device_family == "CYCLONE II") || (intended_device_family == "cyclone ii") || (intended_device_family == "Cycloneii") || (intended_device_family == "CYCLONEII") || (intended_device_family == "cycloneii") || (intended_device_family == "Magellan") || (intended_device_family == "MAGELLAN") || (intended_device_family == "magellan")) ? 1 : 0 ;
   
   parameter family_cycloneii = ((family_base_cycloneii == 1) || (family_cycloneiii == 1)) ? 1 : 0 ;
   
   parameter family_base_stratix = ((intended_device_family == "Stratix") || (intended_device_family == "STRATIX") || (intended_device_family == "stratix") || (intended_device_family == "Yeager") || (intended_device_family == "YEAGER") || (intended_device_family == "yeager") || (intended_device_family == "Stratix GX") || (intended_device_family == "STRATIX GX") || (intended_device_family == "stratix gx") || (intended_device_family == "Stratix-GX") || (intended_device_family == "STRATIX-GX") || (intended_device_family == "stratix-gx") || (intended_device_family == "StratixGX") || (intended_device_family == "STRATIXGX") || (intended_device_family == "stratixgx") || (intended_device_family == "Aurora") || (intended_device_family == "AURORA") || (intended_device_family == "aurora")) ? 1 : 0 ;
   
   parameter family_base_stratixii = ((intended_device_family == "Stratix II") || (intended_device_family == "STRATIX II") || (intended_device_family == "stratix ii") || (intended_device_family == "StratixII") || (intended_device_family == "STRATIXII") || (intended_device_family == "stratixii") || (intended_device_family == "Armstrong") || (intended_device_family == "ARMSTRONG") || (intended_device_family == "armstrong") || (intended_device_family == "Stratix II GX") || (intended_device_family == "STRATIX II GX") || (intended_device_family == "stratix ii gx") || (intended_device_family == "StratixIIGX") || (intended_device_family == "STRATIXIIGX") || (intended_device_family == "stratixiigx") || (intended_device_family == "Arria GX") || (intended_device_family == "ARRIA GX") || (intended_device_family == "arria gx") || (intended_device_family == "ArriaGX") || (intended_device_family == "ARRIAGX") || (intended_device_family == "arriagx") || (intended_device_family == "Stratix II GX Lite") || (intended_device_family == "STRATIX II GX LITE") || (intended_device_family == "stratix ii gx lite") || (intended_device_family == "StratixIIGXLite") || (intended_device_family == "STRATIXIIGXLITE") || (intended_device_family == "stratixiigxlite") || (family_hardcopyii == 1)) ? 1 : 0 ;
   
   parameter family_has_lutram = ((family_stratixiii == 1) || (family_stratixv == 1) || (family_base_arriav == 1) || (family_nightfury == 1)) ? 1 : 0 ;
   parameter family_has_stratixv_style_ram = ((family_base_arriav == 1) || (family_stratixv == 1) || (family_nightfury == 1)) ? 1 : 0 ;
   parameter family_has_stratixiii_style_ram = ((family_stratixiii == 1) || (family_cycloneiii == 1)) ? 1 : 0;

   parameter family_has_m512 = (((intended_device_family == "StratixHC") || (family_base_stratix == 1) || (family_base_stratixii == 1)) && (family_hardcopyii == 0)) ? 1 : 0;
   
   parameter family_has_megaram = (((intended_device_family == "StratixHC") || (family_base_stratix == 1) || (family_base_stratixii == 1) || (family_stratixiii == 1)) && (family_arriaiigx == 0) && (family_stratixv == 0) && (family_base_arriav == 0)) ? 1 : 0 ;

   parameter family_has_stratixi_style_ram = ((intended_device_family == "StratixHC") || (family_base_stratix == 1) || (family_cyclone == 1)) ? 1 : 0;
   
   parameter is_write_on_positive_edge = (((ram_block_type == "M-RAM") || (ram_block_type == "MEGARAM")) || (ram_block_type == "M9K") || (ram_block_type == "M20K") || (ram_block_type == "M10K") || (ram_block_type == "M144K") || ((family_has_stratixv_style_ram == 1) && (is_lutram == 1)) || (((family_has_stratixv_style_ram == 1) || (family_has_stratixiii_style_ram == 1)) && (ram_block_type == "AUTO"))) ? 1 : 0; 

   parameter lutram_single_port_fast_read = ((is_lutram == 1) && ((read_during_write_mode_port_a == "DONT_CARE") || (outdata_reg_a == "UNREGISTERED")) && (operation_mode == "SINGLE_PORT")) ? 1 : 0;
            
   parameter lutram_dual_port_fast_read = ((is_lutram == 1) && ((read_during_write_mode_mixed_ports == "NEW_DATA") || (read_during_write_mode_mixed_ports == "DONT_CARE") || (read_during_write_mode_mixed_ports == "CONSTRAINED_DONT_CARE") || ((read_during_write_mode_mixed_ports == "OLD_DATA") && (outdata_reg_b == "UNREGISTERED")))) ? 1 : 0;
            
   parameter s3_address_aclr_a =  ((family_has_stratixv_style_ram || family_stratixiii) && (is_lutram != 1) && (outdata_reg_a != "CLOCK0") && (outdata_reg_a != "CLOCK1")) ? 1 : 0;

   parameter s3_address_aclr_b =  ((family_has_stratixv_style_ram || family_stratixiii) && (is_lutram != 1) && (outdata_reg_b != "CLOCK0") && (outdata_reg_b != "CLOCK1")) ? 1 : 0;

   parameter i_address_aclr_family_a = ((((family_has_stratixv_style_ram == 1) || (family_has_stratixiii_style_ram == 1)) && (operation_mode != "ROM")) || (family_base_stratixii == 1 || family_base_cycloneii == 1)) ? 1 : 0;
    
   parameter i_address_aclr_family_b = ((((family_has_stratixv_style_ram == 1) || (family_has_stratixiii_style_ram == 1)) && (operation_mode != "DUAL_PORT")) || ((is_lutram == 1) && (operation_mode == "DUAL_PORT") && (read_during_write_mode_mixed_ports == "OLD_DATA")) || (family_base_stratixii == 1 || family_base_cycloneii == 1)) ? 1 : 0;

// LOCAL_PARAMETERS_END

// INPUT PORT DECLARATION

    input  wren_a; // Port A write/read enable input
    input  wren_b; // Port B write enable input
    input  rden_a; // Port A read enable input
    input  rden_b; // Port B read enable input
    input  [width_a-1:0] data_a; // Port A data input
    input  [width_b-1:0] data_b; // Port B data input
    input  [widthad_a-1:0] address_a; // Port A address input
    input  [widthad_b-1:0] address_b; // Port B address input

    // clock inputs on both ports and here are their usage
    // Port A -- 1. all input registers must be clocked by clock0.
    //           2. output register can be clocked by either clock0, clock1 or none.
    // Port B -- 1. all input registered must be clocked by either clock0 or clock1.
    //           2. output register can be clocked by either clock0, clock1 or none.
    input  clock0;
    input  clock1;

    // clock enable inputs and here are their usage
    // clocken0 -- can only be used for enabling clock0.
    // clocken1 -- can only be used for enabling clock1.
    // clocken2 -- as an alternative for enabling clock0.
    // clocken3 -- as an alternative for enabling clock1.
    input  clocken0;
    input  clocken1;
    input  clocken2;
    input  clocken3;

    // clear inputs on both ports and here are their usage
    // Port A -- 1. all input registers can only be cleared by clear0 or none.
    //           2. output register can be cleared by either clear0, clear1 or none.
    // Port B -- 1. all input registers can be cleared by clear0, clear1 or none.
    //           2. output register can be cleared by either clear0, clear1 or none.
    input  aclr0;
    input  aclr1;

    input [width_byteena_a-1:0] byteena_a; // Port A byte enable input
    input [width_byteena_b-1:0] byteena_b; // Port B byte enable input

    // Stratix II related ports
    input addressstall_a;
    input addressstall_b;



// OUTPUT PORT DECLARATION

    output [width_a-1:0] q_a; // Port A output
    output [width_b-1:0] q_b; // Port B output

    output [width_eccstatus-1:0] eccstatus;   // ECC status flags

// INTERNAL REGISTERS DECLARATION

    reg [width_a-1:0] mem_data [0:(1<<widthad_a)-1];
    reg [width_b-1:0] mem_data_b [0:(1<<widthad_b)-1];
    reg [width_a-1:0] i_data_reg_a;
    reg [width_a-1:0] temp_wa;
    reg [width_a-1:0] temp_wa2;
    reg [width_a-1:0] temp_wa2b;
    reg [width_a-1:0] init_temp;
    reg [width_b-1:0] i_data_reg_b;
    reg [width_b-1:0] temp_wb;
    reg [width_b-1:0] temp_wb2;
    reg temp;
    reg [width_a-1:0] i_q_reg_a;
    reg [width_a-1:0] i_q_tmp_a;
    reg [width_a-1:0] i_q_tmp2_a;
    reg [width_b-1:0] i_q_reg_b;
    reg [width_b-1:0] i_q_tmp_b;
    reg [width_b-1:0] i_q_tmp2_b;
    reg [width_b-1:0] i_q_output_latch;
    reg [width_a-1:0] i_byteena_mask_reg_a;
    reg [width_b-1:0] i_byteena_mask_reg_b;
    reg [widthad_a-1:0] i_address_reg_a;
    reg [widthad_b-1:0] i_address_reg_b;
	
	reg [width_b-1:0] i_q_ecc_reg_b;
    reg [width_b-1:0] i_q_ecc_tmp_b;
	
    reg [widthad_a-1:0] i_original_address_a;
    
    reg [width_a-1:0] i_byteena_mask_reg_a_tmp;
    reg [width_b-1:0] i_byteena_mask_reg_b_tmp;
    reg [width_a-1:0] i_byteena_mask_reg_a_out;
    reg [width_b-1:0] i_byteena_mask_reg_b_out;
    reg [width_a-1:0] i_byteena_mask_reg_a_x;
    reg [width_b-1:0] i_byteena_mask_reg_b_x;
    reg [width_a-1:0] i_byteena_mask_reg_a_out_b;
    reg [width_b-1:0] i_byteena_mask_reg_b_out_a;


    reg [8*256:1] ram_initf;
    reg i_wren_reg_a;
    reg i_wren_reg_b;
    reg i_rden_reg_a;
    reg i_rden_reg_b;
    reg i_read_flag_a;
    reg i_read_flag_b;
    reg i_write_flag_a;
    reg i_write_flag_b;
    reg good_to_go_a;
    reg good_to_go_b;
    reg [31:0] file_desc;
    reg init_file_b_port;
    reg i_nmram_write_a;
    reg i_nmram_write_b;

    reg [width_a - 1: 0] wa_mult_x;
    reg [width_a - 1: 0] wa_mult_x_ii;
    reg [width_a - 1: 0] wa_mult_x_iii;
    reg [widthad_a + width_a - 1:0] add_reg_a_mult_wa;
    reg [widthad_b + width_b -1:0] add_reg_b_mult_wb;
    reg [widthad_a + width_a - 1:0] add_reg_a_mult_wa_pl_wa;
    reg [widthad_b + width_b -1:0] add_reg_b_mult_wb_pl_wb;

    reg same_clock_pulse0;
    reg same_clock_pulse1;
    
    reg [width_b - 1 : 0] i_original_data_b;
    reg [width_a - 1 : 0] i_original_data_a;
    
    reg i_address_aclr_a_flag;
    reg i_address_aclr_a_prev;
    reg i_address_aclr_b_flag;
    reg i_address_aclr_b_prev;
    reg i_outdata_aclr_a_prev;
    reg i_outdata_aclr_b_prev;
    reg i_force_reread_a;
    reg i_force_reread_a1;
    reg i_force_reread_b;
    reg i_force_reread_b1;
    reg i_force_reread_a_signal;
    reg i_force_reread_b_signal;

// INTERNAL PARAMETER
    reg [21*8:0] cread_during_write_mode_mixed_ports;
    reg [7*8:0] i_ram_block_type;
    integer i_byte_size;
    
    wire i_good_to_write_a;
    wire i_good_to_write_b;
    reg i_good_to_write_a2;
    reg i_good_to_write_b2;

    reg i_core_clocken_a_reg;
    reg i_core_clocken0_b_reg;
    reg i_core_clocken1_b_reg;

// INTERNAL WIRE DECLARATIONS

    wire i_indata_aclr_a;
    wire i_address_aclr_a;
    wire i_wrcontrol_aclr_a;
    wire i_indata_aclr_b;
    wire i_address_aclr_b;
    wire i_wrcontrol_aclr_b;
    wire i_outdata_aclr_a;
    wire i_outdata_aclr_b;
    wire i_rdcontrol_aclr_b;
    wire i_byteena_aclr_a;
    wire i_byteena_aclr_b;
    wire i_outdata_clken_a;
    wire i_outdata_clken_b;
    wire i_outlatch_clken_a;
    wire i_outlatch_clken_b;	
    wire i_clocken0;
    wire i_clocken1_b;
    wire i_clocken0_b;
    wire i_core_clocken_a;
    wire i_core_clocken_b;
    wire i_core_clocken0_b;
    wire i_core_clocken1_b;

// INTERNAL TRI DECLARATION

    tri0 wren_a;
    tri0 wren_b;
    tri1 rden_a;
    tri1 rden_b;
    tri1 clock0;
    tri1 clocken0;
    tri1 clocken1;
    tri1 clocken2;
    tri1 clocken3;
    tri0 aclr0;
    tri0 aclr1;
    tri0 addressstall_a;
    tri0 addressstall_b;
    tri1 [width_byteena_a-1:0] i_byteena_a;
    tri1 [width_byteena_b-1:0] i_byteena_b;


// LOCAL INTEGER DECLARATION

    integer i_numwords_a;
    integer i_numwords_b;
    integer i_aclr_flag_a;
    integer i_aclr_flag_b;
    integer i_q_tmp2_a_idx;

    // for loop iterators
    integer init_i;
    integer i;
    integer i2;
    integer i3;
    integer i4;
    integer i5;
    integer j;
    integer j2;
    integer j3;
    integer k;
    integer k2;
    integer k3;
    integer k4;
    
    // For temporary calculation
    integer i_div_wa;
    integer i_div_wb;
    integer j_plus_i2;
    integer j2_plus_i5;
    integer j3_plus_i5;
    integer j_plus_i2_div_a;
    integer j2_plus_i5_div_a;
    integer j3_plus_i5_div_a;
    integer j3_plus_i5_div_b;
    integer i_byteena_count;
    integer port_a_bit_count_low;
    integer port_a_bit_count_high;
    integer port_b_bit_count_low;
    integer port_b_bit_count_high;

    time i_data_write_time_a;

    // ------------------------
    // COMPONENT INSTANTIATIONS
    // ------------------------
    ALTERA_DEVICE_FAMILIES dev ();
    ALTERA_MF_MEMORY_INITIALIZATION mem ();

// INITIAL CONSTRUCT BLOCK

    initial
    begin
		

        i_numwords_a = (numwords_a != 0) ? numwords_a : (1 << widthad_a);
        i_numwords_b = (numwords_b != 0) ? numwords_b : (1 << widthad_b);
        
        if (family_has_stratixv_style_ram == 1)
        begin
            if ((((is_lutram == 1) || (ram_block_type == "M10K")) && (family_base_arriav == 1)) ||
                (((is_lutram == 1) || (ram_block_type == "M20K")) && (family_stratixv == 1)))
                i_ram_block_type = ram_block_type;
            else
                i_ram_block_type = "AUTO";
        end
        else if (family_has_stratixiii_style_ram == 1)
        begin
            if ((ram_block_type == "M-RAM") || (ram_block_type == "MEGARAM"))
                i_ram_block_type = "M144K";
            else if ((((ram_block_type == "M144K") || (is_lutram == 1)) && (family_stratixiii == 1)) ||
                    (ram_block_type == "M9K"))
                i_ram_block_type = ram_block_type;
            else
                i_ram_block_type = "AUTO";
        end
        else
        begin
            if ((ram_block_type != "AUTO") &&
                (ram_block_type != "M-RAM") && (ram_block_type != "MEGARAM") &&
                (ram_block_type != "M512") &&
                (ram_block_type != "M4K"))
                i_ram_block_type = "AUTO";
            else
                i_ram_block_type = ram_block_type;
        end
	
        if ((family_cyclone == 1) || (family_cycloneii == 1))
            cread_during_write_mode_mixed_ports = "OLD_DATA";
        else if (read_during_write_mode_mixed_ports == "UNUSED")
            cread_during_write_mode_mixed_ports = "DONT_CARE";
        else
            cread_during_write_mode_mixed_ports = read_during_write_mode_mixed_ports;
            
        i_byte_size = (byte_size > 0) ? byte_size
                        : ((((family_has_stratixi_style_ram == 1) || family_cycloneiii == 1) && (i_byte_size_tmp != 8) && (i_byte_size_tmp != 9)) ||
                            (((family_base_stratixii == 1) || (family_base_cycloneii == 1)) && (i_byte_size_tmp != 1) && (i_byte_size_tmp != 2) && (i_byte_size_tmp != 4) && (i_byte_size_tmp != 8) && (i_byte_size_tmp != 9)) ||
                            (((family_has_stratixv_style_ram == 1) || (family_has_stratixiii_style_ram == 1)) && (i_byte_size_tmp != 5) && (i_byte_size_tmp !=10) && (i_byte_size_tmp != 8) && (i_byte_size_tmp != 9))) ?
                            8 : i_byte_size_tmp;
            
        // Parameter Checking
        if ((operation_mode != "BIDIR_DUAL_PORT") && (operation_mode != "SINGLE_PORT") &&
            (operation_mode != "DUAL_PORT") && (operation_mode != "ROM"))
        begin
            $display("Error: Not a valid operation mode.");
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end

        if ((family_base_arriav == 1) &&
            (ram_block_type != "M10K") && (is_lutram != 1) && (ram_block_type != "AUTO"))
        begin
            $display("Warning: RAM_BLOCK_TYPE HAS AN INVALID VALUE. IT CAN ONLY BE M10K, LUTRAM OR AUTO for %s device family. This parameter will take AUTO as its value", intended_device_family);
            $display("Time: %0t  Instance: %m", $time);
        end
        
        if ((family_base_arriav != 1) && (family_stratixv == 1) &&
            (ram_block_type != "M20K") && (is_lutram != 1) && (ram_block_type != "AUTO"))
        begin
            $display("Warning: RAM_BLOCK_TYPE HAS AN INVALID VALUE. IT CAN ONLY BE M20K, LUTRAM OR AUTO for %s device family. This parameter will take AUTO as its value", intended_device_family);
            $display("Time: %0t  Instance: %m", $time);
        end
        
        if ((family_stratixv != 1) && (family_stratixiii == 1) &&
            (ram_block_type != "M9K") && (ram_block_type != "M144K") && (is_lutram != 1) &&
            (ram_block_type != "AUTO") && (((ram_block_type == "M-RAM") || (ram_block_type == "MEGARAM")) != 1))
        begin
            $display("Warning: RAM_BLOCK_TYPE HAS AN INVALID VALUE. IT CAN ONLY BE M9K, M144K, LUTRAM OR AUTO for %s device family. This parameter will take AUTO as its value", intended_device_family);
            $display("Time: %0t  Instance: %m", $time);
        end
        
        if (i_ram_block_type != ram_block_type)
        begin
            $display("Warning: RAM block type is assumed as %s", i_ram_block_type);
            $display("Time: %0t  Instance: %m", $time);
        end


        if ((cread_during_write_mode_mixed_ports != "DONT_CARE") &&
            (cread_during_write_mode_mixed_ports != "CONSTRAINED_DONT_CARE") &&
            (cread_during_write_mode_mixed_ports != "OLD_DATA") && 
            (cread_during_write_mode_mixed_ports != "NEW_DATA"))
        begin
            $display("Error: Invalid value for read_during_write_mode_mixed_ports parameter. It has to be OLD_DATA or DONT_CARE or CONSTRAINED_DONT_CARE or NEW_DATA");
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end
        
        if ((cread_during_write_mode_mixed_ports != read_during_write_mode_mixed_ports) && ((operation_mode != "SINGLE_PORT") && (operation_mode != "ROM")))
        begin
            $display("Warning: read_during_write_mode_mixed_ports is assumed as %s", cread_during_write_mode_mixed_ports);
            $display("Time: %0t  Instance: %m", $time);
        end
        
        if ((is_lutram != 1) && (cread_during_write_mode_mixed_ports == "CONSTRAINED_DONT_CARE"))
        begin
            $display("Warning: read_during_write_mode_mixed_ports cannot be set to CONSTRAINED_DONT_CARE for non-LUTRAM ram block type. This will cause incorrect simulation result.");
            $display("Time: %0t  Instance: %m", $time);
        end

        if ((is_lutram != 1) && (cread_during_write_mode_mixed_ports == "NEW_DATA"))
        begin
            $display("Warning: read_during_write_mode_mixed_ports cannot be set to NEW_DATA for non-LUTRAM ram block type. This will cause incorrect simulation result.");
            $display("Time: %0t  Instance: %m", $time);
        end

        if (((i_ram_block_type == "M-RAM") || (i_ram_block_type == "MEGARAM")) && init_file != "UNUSED")
        begin
            $display("Error: M-RAM block type doesn't support the use of an initialization file");
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end

        if ((i_byte_size != 8) && (i_byte_size != 9) && (family_has_stratixi_style_ram == 1))
        begin
            $display("Error: byte_size HAS TO BE EITHER 8 or 9");
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end

        if ((i_byte_size != 8) && (i_byte_size != 9) && (i_byte_size != 1) &&
            (i_byte_size != 2) && (i_byte_size != 4) && 
            ((family_base_stratixii == 1) || (family_base_cycloneii == 1)))
        begin
            $display("Error: byte_size has to be either 1, 2, 4, 8 or 9 for %s device family", intended_device_family);
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end

        if ((i_byte_size != 5) && (i_byte_size != 8) && (i_byte_size != 9) && (i_byte_size != 10) &&
            ((family_has_stratixv_style_ram == 1) || (family_has_stratixiii_style_ram == 1)))
        begin
            $display("Error: byte_size has to be either 5,8,9 or 10 for %s device family", intended_device_family);
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end

        if (width_a <= 0)
        begin
            $display("Error: Invalid value for WIDTH_A parameter");
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end

        if ((width_b <= 0) &&
            ((operation_mode != "SINGLE_PORT") && (operation_mode != "ROM")))
        begin
            $display("Error: Invalid value for WIDTH_B parameter");
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end

        if (widthad_a <= 0)
        begin
            $display("Error: Invalid value for WIDTHAD_A parameter");
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end

        if ((widthad_b <= 0) &&
            ((operation_mode != "SINGLE_PORT") && (operation_mode != "ROM")))
        begin
            $display("Error: Invalid value for WIDTHAD_B parameter");
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end

        if ((operation_mode == "ROM") &&
            ((i_ram_block_type == "M-RAM") || (i_ram_block_type == "MEGARAM")))
        begin
            $display("Error: ROM mode does not support RAM_BLOCK_TYPE = M-RAM");
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end

        if (((wrcontrol_aclr_a != "NONE") && (wrcontrol_aclr_a != "UNUSED")) && (i_ram_block_type == "M512") && (operation_mode == "SINGLE_PORT"))
        begin
            $display("Error: Wren_a cannot have clear in single port mode for M512 block");
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end

        if ((operation_mode == "DUAL_PORT") && (i_numwords_a * width_a != i_numwords_b * width_b))
        begin
            $display("Error: Total number of bits of port A and port B should be the same for dual port mode");
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end

        if (((rdcontrol_aclr_b != "NONE") && (rdcontrol_aclr_b != "UNUSED")) && (i_ram_block_type == "M512") && (operation_mode == "DUAL_PORT"))
        begin
            $display("Error: rden_b cannot have clear in simple dual port mode for M512 block");
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end

        if ((operation_mode == "BIDIR_DUAL_PORT") && (i_numwords_a * width_a != i_numwords_b * width_b))
        begin
            $display("Error: Total number of bits of port A and port B should be the same for bidir dual port mode");
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end

        if ((operation_mode == "BIDIR_DUAL_PORT") && (i_ram_block_type == "M512"))
        begin
            $display("Error: M512 block type doesn't support bidir dual mode");
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end

        if (((i_ram_block_type == "M-RAM") || (i_ram_block_type == "MEGARAM")) &&
            (cread_during_write_mode_mixed_ports == "OLD_DATA"))
        begin
            $display("Error: M-RAM doesn't support OLD_DATA value for READ_DURING_WRITE_MODE_MIXED_PORTS parameter");
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end

        if ((family_has_stratixi_style_ram == 1) &&
            (clock_enable_input_a == "BYPASS"))
        begin
            $display("Error: BYPASS value for CLOCK_ENABLE_INPUT_A is not supported in %s device family", intended_device_family);
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end

        if ((family_has_stratixi_style_ram == 1) &&
            (clock_enable_output_a == "BYPASS"))
        begin
            $display("Error: BYPASS value for CLOCK_ENABLE_OUTPUT_A is not supported in %s device family", intended_device_family);
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end

        if ((family_has_stratixi_style_ram == 1) &&
            (clock_enable_input_b == "BYPASS") &&
			((operation_mode == "BIDIR_DUAL_PORT") || (operation_mode == "DUAL_PORT")))
        begin
            $display("Error: BYPASS value for CLOCK_ENABLE_INPUT_B is not supported in %s device family", intended_device_family);
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end

        if ((family_has_stratixi_style_ram == 1) &&
            (clock_enable_output_b == "BYPASS") &&
			((operation_mode == "BIDIR_DUAL_PORT") || (operation_mode == "DUAL_PORT")))
        begin
            $display("Error: BYPASS value for CLOCK_ENABLE_OUTPUT_B is not supported in %s device family", intended_device_family);
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end

        if ((implement_in_les != "OFF") && (implement_in_les != "ON"))
        begin
            $display("Error: Illegal value for implement_in_les parameter");
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end
        
        if (((family_has_m512) == 0) && (i_ram_block_type == "M512"))
        begin
            $display("Error: M512 value for RAM_BLOCK_TYPE parameter is not supported in %s device family", intended_device_family);
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end
        
        if (((family_has_megaram) == 0) && 
            ((i_ram_block_type == "M-RAM") || (i_ram_block_type == "MEGARAM")))
        begin
            $display("Error: MEGARAM value for RAM_BLOCK_TYPE parameter is not supported in %s device family", intended_device_family);
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end
        
        if (((init_file == "UNUSED") || (init_file == "")) &&
            (operation_mode == "ROM"))
        begin
            $display("Error! Altsyncram needs data file for memory initialization in ROM mode.");
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end

        if (((family_base_stratixii == 1) || (family_base_cycloneii == 1)) &&
            (((indata_aclr_a != "UNUSED") && (indata_aclr_a != "NONE")) ||
            ((wrcontrol_aclr_a != "UNUSED") && (wrcontrol_aclr_a != "NONE")) ||
            ((byteena_aclr_a  != "UNUSED") && (byteena_aclr_a != "NONE")) ||
            ((address_aclr_a != "UNUSED") && (address_aclr_a != "NONE") && (operation_mode != "ROM")) ||
            ((indata_aclr_b != "UNUSED") && (indata_aclr_b != "NONE")) ||
            ((rdcontrol_aclr_b != "UNUSED") && (rdcontrol_aclr_b != "NONE")) ||
            ((wrcontrol_aclr_b != "UNUSED") && (wrcontrol_aclr_b != "NONE")) ||
            ((byteena_aclr_b != "UNUSED") && (byteena_aclr_b != "NONE")) ||
            ((address_aclr_b != "UNUSED") && (address_aclr_b != "NONE") && (operation_mode != "DUAL_PORT"))))
        begin
            $display("Warning: %s device family does not support aclr signal on input ports. The aclr to input ports will be ignored.", intended_device_family);
            $display("Time: %0t  Instance: %m", $time);
        end

        if (((family_has_stratixv_style_ram == 1) || (family_has_stratixiii_style_ram == 1)) &&
            (((indata_aclr_a != "UNUSED") && (indata_aclr_a != "NONE")) ||
            ((wrcontrol_aclr_a != "UNUSED") && (wrcontrol_aclr_a != "NONE")) ||
            ((byteena_aclr_a  != "UNUSED") && (byteena_aclr_a != "NONE")) ||
            ((address_aclr_a != "UNUSED") && (address_aclr_a != "NONE") && (operation_mode != "ROM")) ||
            ((indata_aclr_b != "UNUSED") && (indata_aclr_b != "NONE")) ||
            ((rdcontrol_aclr_b != "UNUSED") && (rdcontrol_aclr_b != "NONE")) ||
            ((wrcontrol_aclr_b != "UNUSED") && (wrcontrol_aclr_b != "NONE")) ||
            ((byteena_aclr_b != "UNUSED") && (byteena_aclr_b != "NONE")) ||
            ((address_aclr_b != "UNUSED") && (address_aclr_b != "NONE") && (operation_mode != "DUAL_PORT"))))
        begin
            $display("Warning: %s device family does not support aclr signal on input ports. The aclr to input ports will be ignored.", intended_device_family);
            $display("Time: %0t  Instance: %m", $time);
        end

        if (((family_has_stratixv_style_ram != 1) && (family_has_stratixiii_style_ram != 1))
            && (read_during_write_mode_port_a != "NEW_DATA_NO_NBE_READ"))
        begin
            $display("Warning: %s value for read_during_write_mode_port_a is not supported in %s device family, it might cause incorrect behavioural simulation result", read_during_write_mode_port_a, intended_device_family);
            $display("Time: %0t  Instance: %m", $time);
        end

        if (((family_has_stratixv_style_ram != 1) && (family_has_stratixiii_style_ram != 1))
            && (read_during_write_mode_port_b != "NEW_DATA_NO_NBE_READ"))
        begin
            $display("Warning: %s value for read_during_write_mode_port_b is not supported in %s device family, it might cause incorrect behavioural simulation result", read_during_write_mode_port_b, intended_device_family);
            $display("Time: %0t  Instance: %m", $time);
        end
// SPR 249576: Enable don't care as RDW setting in MegaFunctions - eliminates checking for ram_block_type = "AUTO"
        if (!((is_lutram == 1) || ((i_ram_block_type == "AUTO") && (family_has_lutram == 1)) || 
            ((i_ram_block_type != "AUTO") && ((family_has_stratixv_style_ram == 1) || (family_has_stratixiii_style_ram == 1)))) && 
            (operation_mode != "SINGLE_PORT") && (read_during_write_mode_port_a == "DONT_CARE"))
        begin
            $display("Error: %s value for read_during_write_mode_port_a is not supported in %s device family for %s ram block type in %s operation_mode", 
                read_during_write_mode_port_a, intended_device_family, i_ram_block_type, operation_mode);
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end
        
        if ((is_lutram != 1) && (i_ram_block_type != "AUTO") && 
            ((read_during_write_mode_mixed_ports == "NEW_DATA") || (read_during_write_mode_mixed_ports == "CONSTRAINED_DONT_CARE")))
        begin
            $display("Error: %s value for read_during_write_mode_mixed_ports is not supported in %s RAM block type", read_during_write_mode_mixed_ports, i_ram_block_type);
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end
        
        if ((operation_mode == "DUAL_PORT") && (outdata_reg_b != "CLOCK0") && (is_lutram == 1) && (read_during_write_mode_mixed_ports == "OLD_DATA"))
        begin
            $display("Warning: Value for read_during_write_mode_mixed_ports of instance is not honoured in DUAL PORT operation mode when output registers are not clocked by clock0 for LUTRAM.");
            $display("Time: %0t  Instance: %m", $time);
        end

        if (((family_has_stratixv_style_ram == 1) || (family_has_stratixiii_style_ram == 1)) 
            && ((indata_aclr_a != "NONE") && (indata_aclr_a != "UNUSED")))
        begin
            $display("Warning: %s value for indata_aclr_a is not supported in %s device family. The aclr to data_a registers will be ignored.", indata_aclr_a, intended_device_family);
            $display("Time: %0t  Instance: %m", $time);
        end

        if (((family_has_stratixv_style_ram == 1) || (family_has_stratixiii_style_ram == 1)) 
            && ((wrcontrol_aclr_a != "NONE") && (wrcontrol_aclr_a != "UNUSED")))
        begin
            $display("Warning: %s value for wrcontrol_aclr_a is not supported in %s device family. The aclr to write control registers of port A will be ignored.", wrcontrol_aclr_a, intended_device_family);
            $display("Time: %0t  Instance: %m", $time);
        end

        if (((family_has_stratixv_style_ram == 1) || (family_has_stratixiii_style_ram == 1)) 
            && ((byteena_aclr_a != "NONE") && (byteena_aclr_a != "UNUSED")))
        begin
            $display("Warning: %s value for byteena_aclr_a is not supported in %s device family. The aclr to byteena_a registers will be ignored.", byteena_aclr_a, intended_device_family);
            $display("Time: %0t  Instance: %m", $time);
        end

        if (((family_has_stratixv_style_ram == 1) || (family_has_stratixiii_style_ram == 1)) 
            && ((address_aclr_a != "NONE") && (address_aclr_a != "UNUSED")) && (operation_mode != "ROM"))
        begin
            $display("Warning: %s value for address_aclr_a is not supported for write port in %s device family. The aclr to address_a registers will be ignored.", byteena_aclr_a, intended_device_family);
            $display("Time: %0t  Instance: %m", $time);
        end

        if (((family_has_stratixv_style_ram == 1) || (family_has_stratixiii_style_ram == 1)) 
            && ((indata_aclr_b != "NONE") && (indata_aclr_b != "UNUSED")))
        begin
            $display("Warning: %s value for indata_aclr_b is not supported in %s device family. The aclr to data_b registers will be ignored.", indata_aclr_b, intended_device_family);
            $display("Time: %0t  Instance: %m", $time);
        end

        if (((family_has_stratixv_style_ram == 1) || (family_has_stratixiii_style_ram == 1)) 
            && ((rdcontrol_aclr_b != "NONE") && (rdcontrol_aclr_b != "UNUSED")))
        begin
            $display("Warning: %s value for rdcontrol_aclr_b is not supported in %s device family. The aclr to read control registers will be ignored.", rdcontrol_aclr_b, intended_device_family);
            $display("Time: %0t  Instance: %m", $time);
        end

        if (((family_has_stratixv_style_ram == 1) || (family_has_stratixiii_style_ram == 1)) 
            && ((wrcontrol_aclr_b != "NONE") && (wrcontrol_aclr_b != "UNUSED")))
        begin
            $display("Warning: %s value for wrcontrol_aclr_b is not supported in %s device family. The aclr to write control registers will be ignored.", wrcontrol_aclr_b, intended_device_family);
            $display("Time: %0t  Instance: %m", $time);
        end

        if (((family_has_stratixv_style_ram == 1) || (family_has_stratixiii_style_ram == 1)) 
            && ((byteena_aclr_b != "NONE") && (byteena_aclr_b != "UNUSED")))
        begin
            $display("Warning: %s value for byteena_aclr_b is not supported in %s device family. The aclr to byteena_a register will be ignored.", byteena_aclr_b, intended_device_family);
            $display("Time: %0t  Instance: %m", $time);
        end
        
        if (((family_has_stratixv_style_ram == 1) || (family_has_stratixiii_style_ram == 1)) 
            && ((address_aclr_b != "NONE") && (address_aclr_b != "UNUSED")) && (operation_mode == "BIDIR_DUAL_PORT"))
        begin
            $display("Warning: %s value for address_aclr_b is not supported for write port in %s device family. The aclr to address_b registers will be ignored.", address_aclr_b, intended_device_family);
            $display("Time: %0t  Instance: %m", $time);
        end
    
        if ((is_lutram == 1) && (read_during_write_mode_mixed_ports == "OLD_DATA")
            && ((address_aclr_b != "NONE") && (address_aclr_b != "UNUSED")) && (operation_mode == "DUAL_PORT"))
        begin
            $display("Warning : aclr signal for address_b is ignored for RAM block type %s when read_during_write_mode_mixed_ports is set to OLD_DATA", ram_block_type);
            $display("Time: %0t  Instance: %m", $time);
        end

        if ((((family_has_stratixv_style_ram != 1) && (family_has_stratixiii_style_ram != 1)))
            && ((clock_enable_core_a != clock_enable_input_a) && (clock_enable_core_a != "USE_INPUT_CLKEN")))
        begin
            $display("Warning: clock_enable_core_a value must be USE_INPUT_CLKEN or same as clock_enable_input_a in %s device family. It will be set to clock_enable_input_a value.", intended_device_family);
            $display("Time: %0t  Instance: %m", $time);
        end

        if ((((family_has_stratixv_style_ram != 1) && (family_has_stratixiii_style_ram != 1)))
            && ((clock_enable_core_b != clock_enable_input_b) && (clock_enable_core_b != "USE_INPUT_CLKEN")))
        begin
            $display("Warning: clock_enable_core_b must be USE_INPUT_CLKEN or same as clock_enable_input_b in %s device family. It will be set to clock_enable_input_b value.", intended_device_family);
            $display("Time: %0t  Instance: %m", $time);
        end

        if (((family_has_stratixv_style_ram != 1) && (family_has_stratixiii_style_ram != 1))
            && (clock_enable_input_a == "ALTERNATE"))
        begin
            $display("Error: %s value for clock_enable_input_a is not supported in %s device family.", clock_enable_input_a, intended_device_family);
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end

        if (((family_has_stratixv_style_ram != 1) && (family_has_stratixiii_style_ram != 1))
            && (clock_enable_input_b == "ALTERNATE"))
        begin
            $display("Error: %s value for clock_enable_input_b is not supported in %s device family.", clock_enable_input_b, intended_device_family);
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end

       if((enable_ecc == "TRUE") && (((i_ram_block_type != "M20K") && (i_ram_block_type != "M144K")) || (operation_mode != "DUAL_PORT")))
        begin
            $display("Error: %s value for enable_ecc is not supported in %s ram block type for %s device family in %s operation mode", enable_ecc, i_ram_block_type, intended_device_family, operation_mode);
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end
 
		if ((i_ram_block_type != "M20K") && (ecc_pipeline_stage_enabled == "TRUE"))
        begin
            $display("Error: %s value for ecc_pipeline_stage_enabled is not supported in %s ram block type.", ecc_pipeline_stage_enabled, i_ram_block_type);
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end

		if ((outdata_reg_b == "UNREGISTERED") && (ecc_pipeline_stage_enabled == "TRUE"))
        begin
            $display("Error: %s value for ecc_pipeline_stage_enabled is not supported when output_reg_b is set to %s.", ecc_pipeline_stage_enabled, outdata_reg_b);
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end		
		
		//Setting this to only warning because in synthesis it will ignore the ecc_pipeline_stage_enabled parameter when enable_ecc is set to false
		if((ecc_pipeline_stage_enabled == "TRUE") && (enable_ecc != "TRUE"))
		begin
            $display("Warning: %s value for ecc_pipeline_stage_enabled is not supported when enable_ecc is set to %s", ecc_pipeline_stage_enabled, enable_ecc);
            $display("Time: %0t  Instance: %m", $time);
		end
		
        if (((i_ram_block_type == "M20K") || (i_ram_block_type == "M144K")) && (enable_ecc == "TRUE") && (read_during_write_mode_mixed_ports == "OLD_DATA"))
        begin
            $display("Error : ECC is not supported for read-before-write mode.");
            $display("Time: %0t  Instance: %m", $time);
            $finish;
        end
        
        if (operation_mode != "DUAL_PORT")
        begin
            if ((outdata_reg_a != "CLOCK0") && (outdata_reg_a != "CLOCK1") && (outdata_reg_a != "UNUSED")  && (outdata_reg_a != "UNREGISTERED"))
            begin
                $display("Error: %s value for outdata_reg_a is not supported.", outdata_reg_a);
                $display("Time: %0t  Instance: %m", $time);
                $finish;
            end
        end

        if ((operation_mode == "BIDIR_DUAL_PORT") || (operation_mode == "DUAL_PORT"))
        begin
            if ((address_reg_b != "CLOCK0") && (address_reg_b != "CLOCK1") && (address_reg_b != "UNUSED"))
            begin
                $display("Error: %s value for address_reg_b is not supported.", address_reg_b);
                $display("Time: %0t  Instance: %m", $time);
                $finish;
            end
    
            if ((outdata_reg_b != "CLOCK0") && (outdata_reg_b != "CLOCK1") && (outdata_reg_b != "UNUSED") && (outdata_reg_b != "UNREGISTERED"))
            begin
                $display("Error: %s value for outdata_reg_b is not supported.", outdata_reg_b);
                $display("Time: %0t  Instance: %m", $time);
                $finish;
            end

            if ((rdcontrol_reg_b != "CLOCK0") && (rdcontrol_reg_b != "CLOCK1") && (rdcontrol_reg_b != "UNUSED") && (operation_mode == "DUAL_PORT"))
            begin
                $display("Error: %s value for rdcontrol_reg_b is not supported.", rdcontrol_reg_b);
                $display("Time: %0t  Instance: %m", $time);
                $finish;
            end
    
            if ((indata_reg_b != "CLOCK0") && (indata_reg_b != "CLOCK1") && (indata_reg_b != "UNUSED") && (operation_mode == "BIDIR_DUAL_PORT"))
            begin
                $display("Error: %s value for indata_reg_b is not supported.", indata_reg_b);
                $display("Time: %0t  Instance: %m", $time);
                $finish;
            end
    
            if ((wrcontrol_wraddress_reg_b != "CLOCK0") && (wrcontrol_wraddress_reg_b != "CLOCK1") && (wrcontrol_wraddress_reg_b != "UNUSED") && (operation_mode == "BIDIR_DUAL_PORT"))
            begin
                $display("Error: %s value for wrcontrol_wraddress_reg_b is not supported.", wrcontrol_wraddress_reg_b);
                $display("Time: %0t  Instance: %m", $time);
                $finish;
            end
    
            if ((byteena_reg_b != "CLOCK0") && (byteena_reg_b != "CLOCK1") && (byteena_reg_b != "UNUSED") && (operation_mode == "BIDIR_DUAL_PORT"))
            begin
                $display("Error: %s value for byteena_reg_b is not supported.", byteena_reg_b);
                $display("Time: %0t  Instance: %m", $time);
                $finish;
            end
        end

        // *****************************************
        // legal operations for all operation modes:
        //      |  PORT A  |  PORT B  |
        //      |  RD  WR  |  RD  WR  |
        // BDP  |  x   x   |  x   x   |
        // DP   |      x   |  x       |
        // SP   |  x   x   |          |
        // ROM  |  x       |          |
        // *****************************************


        // Initialize mem_data

        if ((init_file == "UNUSED") || (init_file == ""))
        begin
            if (((family_has_stratixv_style_ram == 1) || (family_has_stratixiii_style_ram == 1)) && (family_hardcopyiii == 0) && (family_hardcopyiv == 0) && (power_up_uninitialized != "TRUE"))
            begin
                wa_mult_x = {width_a{1'b0}};
                for (i = 0; i < (1 << widthad_a); i = i + 1)
                    mem_data[i] = wa_mult_x;
                    
                if (enable_mem_data_b_reading)
                begin
                    for (i = 0; i < (1 << widthad_b); i = i + 1)
                        mem_data_b[i] = {width_b{1'b0}};
                end

            end
            else if (((i_ram_block_type == "M-RAM") ||
                (i_ram_block_type == "MEGARAM") ||
                ((i_ram_block_type == "AUTO") && ((cread_during_write_mode_mixed_ports == "DONT_CARE") || (cread_during_write_mode_mixed_ports == "CONSTRAINED_DONT_CARE"))) ||
                (family_hardcopyii == 1) || 
                (family_hardcopyiii == 1) || 
                (family_hardcopyiv == 1) || 
                (power_up_uninitialized == "TRUE") ) && (implement_in_les == "OFF"))
            begin
                wa_mult_x = {width_a{1'bx}};
                for (i = 0; i < (1 << widthad_a); i = i + 1)
                    mem_data[i] = wa_mult_x;

                if (enable_mem_data_b_reading)
                begin
                    for (i = 0; i < (1 << widthad_b); i = i + 1)
                    mem_data_b[i] = {width_b{1'bx}};
                end
            end
            else
            begin
                wa_mult_x = {width_a{1'b0}};
                for (i = 0; i < (1 << widthad_a); i = i + 1)
                    mem_data[i] = wa_mult_x;
                    
                if (enable_mem_data_b_reading)
                begin
                    for (i = 0; i < (1 << widthad_b); i = i + 1)
                    mem_data_b[i] = {width_b{1'b0}};
                end
            end
        end

        else  // Memory initialization file is used
        begin

            wa_mult_x = {width_a{1'b0}};
            for (i = 0; i < (1 << widthad_a); i = i + 1)
                mem_data[i] = wa_mult_x;
                
            for (i = 0; i < (1 << widthad_b); i = i + 1)
                mem_data_b[i] = {width_b{1'b0}};

            init_file_b_port = 0;

            if ((init_file_layout != "PORT_A") &&
                (init_file_layout != "PORT_B"))
            begin
                if (operation_mode == "DUAL_PORT")
                    init_file_b_port = 1;
                else
                    init_file_b_port = 0;
            end
            else
            begin
                if (init_file_layout == "PORT_A")
                    init_file_b_port = 0;
                else if (init_file_layout == "PORT_B")
                    init_file_b_port = 1;
            end

            if (init_file_b_port)
            begin
                 mem.convert_to_ver_file(init_file, width_b, ram_initf);
                 $readmemh(ram_initf, mem_data_b);

                for (i = 0; i < (i_numwords_b * width_b); i = i + 1)
                begin
                    temp_wb = mem_data_b[i / width_b];
                    i_div_wa = i / width_a;
                    temp_wa = mem_data[i_div_wa];
                    temp_wa[i % width_a] = temp_wb[i % width_b];
                    mem_data[i_div_wa] = temp_wa;
                end
            end
            else
            begin
                mem.convert_to_ver_file(init_file, width_a, ram_initf);
                $readmemh(ram_initf, mem_data);
                
                if (enable_mem_data_b_reading)
                begin                
                    for (i = 0; i < (i_numwords_a * width_a); i = i + 1)
                    begin
                        temp_wa = mem_data[i / width_a];
                        i_div_wb = i / width_b;
                        temp_wb = mem_data_b[i_div_wb];
                        temp_wb[i % width_b] = temp_wa[i % width_a];
                        mem_data_b[i_div_wb] = temp_wb;
                    end
                end
            end
        end
        i_nmram_write_a = 0;
        i_nmram_write_b = 0;

        i_aclr_flag_a = 0;
        i_aclr_flag_b = 0;

        i_outdata_aclr_a_prev = 0;
        i_outdata_aclr_b_prev = 0;
        i_address_aclr_a_prev = 0;
        i_address_aclr_b_prev = 0;
        
        i_force_reread_a = 0;
        i_force_reread_a1 = 0;
        i_force_reread_b = 0;
        i_force_reread_b1 = 0;
        i_force_reread_a_signal = 0;
        i_force_reread_b_signal = 0;
        
        // Initialize internal registers/signals
        i_data_reg_a = 0;
        i_data_reg_b = 0;
        i_address_reg_a = 0;
        i_address_reg_b = 0;
        i_original_address_a = 0;
        i_wren_reg_a = 0;
        i_wren_reg_b = 0;
        i_read_flag_a = 0;
        i_read_flag_b = 0;
        i_write_flag_a = 0;
        i_write_flag_b = 0;
        i_byteena_mask_reg_a_x = 0;
        i_byteena_mask_reg_b_x = 0;
        i_original_data_b = 0;
        i_original_data_a = 0;
        i_data_write_time_a = 0;
        i_core_clocken_a_reg = 0;
        i_core_clocken0_b_reg = 0;
        i_core_clocken1_b_reg = 0;

        i_byteena_mask_reg_a = (family_has_stratixv_style_ram == 1)? {width_a{1'b0}} : {width_a{1'b1}};
        i_byteena_mask_reg_b = (family_has_stratixv_style_ram == 1)? {width_a{1'b0}} : {width_a{1'b1}};
        i_byteena_mask_reg_a_out = (family_has_stratixv_style_ram == 1)? {width_a{1'b0}} : {width_a{1'b1}};
        i_byteena_mask_reg_b_out = (family_has_stratixv_style_ram == 1)? {width_a{1'b0}} : {width_a{1'b1}};
		
        if ((family_has_stratixv_style_ram == 1) || (family_has_stratixiii_style_ram == 1))
        begin
            i_rden_reg_a = 0;
            i_rden_reg_b = 0;
        end
        else
        begin
            i_rden_reg_a = 1;
            i_rden_reg_b = 1;
        end
        


        if (((i_ram_block_type == "M-RAM") ||
                (i_ram_block_type == "MEGARAM") ||
                ((i_ram_block_type == "AUTO") && ((cread_during_write_mode_mixed_ports == "DONT_CARE") || (cread_during_write_mode_mixed_ports == "CONSTRAINED_DONT_CARE")))) && 
                (family_has_stratixv_style_ram != 1) && (family_has_stratixiii_style_ram != 1))
        begin
            i_q_tmp_a = {width_a{1'bx}};
            i_q_tmp_b = {width_b{1'bx}};
            i_q_tmp2_a = {width_a{1'bx}};
            i_q_tmp2_b = {width_b{1'bx}};
            i_q_reg_a = {width_a{1'bx}};
            i_q_reg_b = {width_b{1'bx}};
        end
        else
        begin
            if (is_lutram == 1) 
            begin
                i_q_tmp_a = mem_data[0];
                i_q_tmp2_a = mem_data[0];

                for (init_i = 0; init_i < width_b; init_i = init_i + 1)
                begin
                    init_temp = mem_data[init_i / width_a];
                    i_q_tmp_b[init_i] = init_temp[init_i % width_a];
                    i_q_tmp2_b[init_i] = init_temp[init_i % width_a];
                end

                i_q_reg_a = 0;
                i_q_reg_b = 0;
                i_q_output_latch = 0;
            end
            else
            begin
                i_q_tmp_a = 0;
                i_q_tmp_b = 0;
                i_q_tmp2_a = 0;
                i_q_tmp2_b = 0;
                i_q_reg_a = 0;
                i_q_reg_b = 0;
            end
        end

        good_to_go_a = 0;
        good_to_go_b = 0;

        same_clock_pulse0 = 1'b0;
        same_clock_pulse1 = 1'b0;

        i_byteena_count = 0;
        
        if (((family_hardcopyii == 1)) &&
            (ram_block_type == "M4K") && (operation_mode != "SINGLE_PORT"))
        begin
            i_good_to_write_a2 = 0;
            i_good_to_write_b2 = 0;
        end
        else
        begin
            i_good_to_write_a2 = 1;
            i_good_to_write_b2 = 1;
        end

    end


// SIGNAL ASSIGNMENT

    // Clock enable signal assignment

    // port a clock enable assignments:
    assign i_outdata_clken_a              = (clock_enable_output_a == "BYPASS") ?
                                            1'b1 : ((clock_enable_output_a == "ALTERNATE") && (outdata_reg_a == "CLOCK1")) ?
                                            clocken3 : ((clock_enable_output_a == "ALTERNATE") && (outdata_reg_a == "CLOCK0")) ?
                                            clocken2 : (outdata_reg_a == "CLOCK1") ?
                                            clocken1 : (outdata_reg_a == "CLOCK0") ?
                                            clocken0 : 1'b1;
    // port b clock enable assignments:
    assign i_outdata_clken_b              = (clock_enable_output_b == "BYPASS") ?
                                            1'b1 : ((clock_enable_output_b == "ALTERNATE") && (outdata_reg_b == "CLOCK1")) ?
                                            clocken3 : ((clock_enable_output_b == "ALTERNATE") && (outdata_reg_b == "CLOCK0")) ?
                                            clocken2 : (outdata_reg_b == "CLOCK1") ?
                                            clocken1 : (outdata_reg_b == "CLOCK0") ?
                                            clocken0 : 1'b1;

    // port a output latch clock enable assignments:
    assign i_outlatch_clken_a              = ((clock_enable_output_b == "NORMAL") && (outdata_reg_a == "UNREGISTERED") && (outdata_reg_b == "CLOCK0") && 
											(operation_mode == "BIDIR_DUAL_PORT") && (family_has_stratixv_style_ram == 1))?
                                            clocken0 : 1'b1;
    // port b clock enable assignments:
    assign i_outlatch_clken_b              = ((clock_enable_output_a == "NORMAL") && (outdata_reg_b == "UNREGISTERED") && 
											(operation_mode == "BIDIR_DUAL_PORT") && (family_has_stratixv_style_ram == 1))?
											(((address_reg_b == "CLOCK0") && (outdata_reg_a == "CLOCK0")) ? clocken0 : 
											(((address_reg_b == "CLOCK1") && (outdata_reg_a == "CLOCK1")) ? clocken1 : 1'b1))
											: 1'b1;
											
    assign i_clocken0                     = (clock_enable_input_a == "BYPASS") ?
                                            1'b1 : (clock_enable_input_a == "NORMAL") ?
                                            clocken0 : clocken2;

    assign i_clocken0_b                   = (clock_enable_input_b == "BYPASS") ?
                                            1'b1 : (clock_enable_input_b == "NORMAL") ?
                                            clocken0 : clocken2;

    assign i_clocken1_b                   = (clock_enable_input_b == "BYPASS") ?
                                            1'b1 : (clock_enable_input_b == "NORMAL") ?
                                            clocken1 : clocken3;

    assign i_core_clocken_a              = (((family_has_stratixv_style_ram != 1) && (family_has_stratixiii_style_ram != 1))) ?
                                            i_clocken0 : ((clock_enable_core_a == "BYPASS") ?
                                            1'b1 : ((clock_enable_core_a == "USE_INPUT_CLKEN") ?
                                            i_clocken0 : ((clock_enable_core_a == "NORMAL") ?
                                            clocken0 : clocken2)));
    
    assign i_core_clocken0_b              = (((family_has_stratixv_style_ram != 1) && (family_has_stratixiii_style_ram != 1))) ?
                                            i_clocken0_b : ((clock_enable_core_b == "BYPASS") ?
                                            1'b1 : ((clock_enable_core_b == "USE_INPUT_CLKEN") ?
                                            i_clocken0_b : ((clock_enable_core_b == "NORMAL") ?
                                            clocken0 : clocken2)));

    assign i_core_clocken1_b              = (((family_has_stratixv_style_ram != 1) && (family_has_stratixiii_style_ram != 1))) ?
                                            i_clocken1_b : ((clock_enable_core_b == "BYPASS") ?
                                            1'b1 : ((clock_enable_core_b == "USE_INPUT_CLKEN") ?
                                            i_clocken1_b : ((clock_enable_core_b == "NORMAL") ?
                                            clocken1 : clocken3)));

    assign i_core_clocken_b               = (address_reg_b == "CLOCK0") ?
                                            i_core_clocken0_b : i_core_clocken1_b;

    // Async clear signal assignment

    // port a clear assigments:

    assign i_indata_aclr_a    = (((family_has_stratixv_style_ram == 1) || (family_has_stratixiii_style_ram == 1)) ||
                                (family_base_stratixii == 1 || family_base_cycloneii == 1)) ? 
                                1'b0 : ((indata_aclr_a == "CLEAR0") ? aclr0 : 1'b0);
    assign i_address_aclr_a   = (address_aclr_a == "CLEAR0") ? aclr0 : 1'b0;
    assign i_wrcontrol_aclr_a = (((family_has_stratixv_style_ram == 1) || (family_has_stratixiii_style_ram == 1)) || 
                                (family_base_stratixii == 1 || family_base_cycloneii == 1))?
                                1'b0 : ((wrcontrol_aclr_a == "CLEAR0") ? aclr0 : 1'b0);
    assign i_byteena_aclr_a   = (((family_has_stratixv_style_ram == 1) || (family_has_stratixiii_style_ram == 1)) ||
                                (family_base_stratixii == 1 || family_base_cycloneii == 1)) ?
                                1'b0 : ((byteena_aclr_a == "CLEAR0") ?
                                aclr0 : ((byteena_aclr_a == "CLEAR1") ?
                                aclr1 : 1'b0));
    assign i_outdata_aclr_a   = (outdata_aclr_a == "CLEAR0") ?
                                aclr0 : ((outdata_aclr_a == "CLEAR1") ?
                                aclr1 : 1'b0);
    // port b clear assignments:
    assign i_indata_aclr_b    = (((family_has_stratixv_style_ram == 1) || (family_has_stratixiii_style_ram == 1)) ||
                                (family_base_stratixii == 1 || family_base_cycloneii == 1))?
                                1'b0 : ((indata_aclr_b == "CLEAR0") ?
                                aclr0 : ((indata_aclr_b == "CLEAR1") ?
                                aclr1 : 1'b0));
    assign i_address_aclr_b   = (address_aclr_b == "CLEAR0") ?
                                aclr0 : ((address_aclr_b == "CLEAR1") ?
                                aclr1 : 1'b0);
    assign i_wrcontrol_aclr_b = (((family_has_stratixv_style_ram == 1) || (family_has_stratixiii_style_ram == 1)) ||
                                (family_base_stratixii == 1 || family_base_cycloneii == 1))?
                                1'b0 : ((wrcontrol_aclr_b == "CLEAR0") ?
                                aclr0 : ((wrcontrol_aclr_b == "CLEAR1") ?
                                aclr1 : 1'b0));
    assign i_rdcontrol_aclr_b = (((family_has_stratixv_style_ram == 1) || (family_has_stratixiii_style_ram == 1)) ||
                                (family_base_stratixii == 1 || family_base_cycloneii == 1)) ?
                                1'b0 : ((rdcontrol_aclr_b == "CLEAR0") ?
                                aclr0 : ((rdcontrol_aclr_b == "CLEAR1") ?
                                aclr1 : 1'b0));
    assign i_byteena_aclr_b   = (((family_has_stratixv_style_ram == 1) || (family_has_stratixiii_style_ram == 1)) ||
                                (family_base_stratixii == 1 || family_base_cycloneii == 1)) ?
                                1'b0 : ((byteena_aclr_b == "CLEAR0") ?
                                aclr0 : ((byteena_aclr_b == "CLEAR1") ?
                                aclr1 : 1'b0));
    assign i_outdata_aclr_b   = (outdata_aclr_b == "CLEAR0") ?
                                aclr0 : ((outdata_aclr_b == "CLEAR1") ?
                                aclr1 : 1'b0);

    assign i_byteena_a = byteena_a;
    assign i_byteena_b = byteena_b;
    
    
    // Ready to write setting
    
    assign i_good_to_write_a = (((is_bidir_and_wrcontrol_addb_clk0 == 1) || (dual_port_addreg_b_clk0 == 1)) && (i_core_clocken0_b) && (~clock0)) ?
                                    1'b1 : (((is_bidir_and_wrcontrol_addb_clk1 == 1) || (dual_port_addreg_b_clk1 == 1)) && (i_core_clocken1_b) && (~clock1)) ?
                                    1'b1 : i_good_to_write_a2;
                                    
    assign i_good_to_write_b = ((i_core_clocken0_b) && (~clock0)) ? 1'b1 : i_good_to_write_b2;
    
    always @(i_good_to_write_a)
    begin
        i_good_to_write_a2 = i_good_to_write_a;
    end
    
    always @(i_good_to_write_b)
    begin
        i_good_to_write_b2 = i_good_to_write_b;
    end
    
     
    // Port A inputs registered : indata, address, byeteena, wren
    // Aclr status flags get updated here for M-RAM ram_block_type

    always @(posedge clock0)
    begin
    
        if (i_force_reread_a && i_outlatch_clken_a)
        begin
            i_force_reread_a_signal <= ~ i_force_reread_a_signal;
            i_force_reread_a <= 0;
        end
        
        if (i_force_reread_b && ((is_bidir_and_wrcontrol_addb_clk0 == 1) || (dual_port_addreg_b_clk0 == 1)) && i_outlatch_clken_b)
        begin
            i_force_reread_b_signal <= ~ i_force_reread_b_signal;
            i_force_reread_b <= 0;
        end

        if (clock1)
            same_clock_pulse0 <= 1'b1;
        else
            same_clock_pulse0 <= 1'b0;

        if (i_address_aclr_a && (i_address_aclr_family_a == 0))
            i_address_reg_a <= 0;

        i_core_clocken_a_reg <= i_core_clocken_a;
        i_core_clocken0_b_reg <= i_core_clocken0_b;

        if (i_core_clocken_a)
        begin

            if (i_force_reread_a1)
            begin
                i_force_reread_a_signal <= ~ i_force_reread_a_signal;
                i_force_reread_a1 <= 0;
            end
            i_read_flag_a <= ~ i_read_flag_a;
            if (i_force_reread_b1 && ((is_bidir_and_wrcontrol_addb_clk0 == 1) || (dual_port_addreg_b_clk0 == 1)))
            begin
                i_force_reread_b_signal <= ~ i_force_reread_b_signal;
                i_force_reread_b1 <= 0;
            end
            if (is_write_on_positive_edge == 1)
            begin
                if (i_wren_reg_a || wren_a)
                begin
                    i_write_flag_a <= ~ i_write_flag_a;
                end
                if (operation_mode != "ROM")
                    i_nmram_write_a <= 1'b0;
            end
            else
            begin
                if (operation_mode != "ROM")
                    i_nmram_write_a <= 1'b1;
            end

            if (((family_has_stratixv_style_ram == 1) || (family_stratixiii == 1)) && (is_lutram != 1))
            begin
                good_to_go_a <= 1;
                
                i_rden_reg_a <= rden_a;

                if (i_wrcontrol_aclr_a)
                    i_wren_reg_a <= 0;
                else
                begin
                    i_wren_reg_a <= wren_a;
                end
            end
        end
        else
            i_nmram_write_a <= 1'b0;

        if (i_core_clocken_b)    
            i_address_aclr_b_flag <= 0;

        if (is_lutram)
        begin
            if (i_wrcontrol_aclr_a)
                i_wren_reg_a <= 0;
            else if (i_core_clocken_a)
            begin
                i_wren_reg_a <= wren_a;
            end
        end

        if ((clock_enable_input_a == "BYPASS") ||
            ((clock_enable_input_a == "NORMAL") && clocken0) ||
            ((clock_enable_input_a == "ALTERNATE") && clocken2))
        begin

            // Port A inputs
            
            if (i_indata_aclr_a)
                i_data_reg_a <= 0;
            else
                i_data_reg_a <= data_a;

            if (i_address_aclr_a && (i_address_aclr_family_a == 0))
                i_address_reg_a <= 0;
            else if (!addressstall_a)
                i_address_reg_a <= address_a;

            if (i_byteena_aclr_a)
            begin
                i_byteena_mask_reg_a <= {width_a{1'b1}};
                i_byteena_mask_reg_a_out <= 0;
                i_byteena_mask_reg_a_x <= 0;
                i_byteena_mask_reg_a_out_b <= {width_a{1'bx}};
            end
            else
            begin
               
                if (width_byteena_a == 1)
                begin
                    i_byteena_mask_reg_a <= {width_a{i_byteena_a[0]}};
                    i_byteena_mask_reg_a_out <= (i_byteena_a[0])? {width_a{1'b0}} : {width_a{1'bx}};
                    i_byteena_mask_reg_a_out_b <= (i_byteena_a[0])? {width_a{1'bx}} : {width_a{1'b0}};
                    i_byteena_mask_reg_a_x <= ((i_byteena_a[0]) || (i_byteena_a[0] == 1'b0))? {width_a{1'b0}} : {width_a{1'bx}};
                end
                else
                    for (k = 0; k < width_a; k = k+1)
                    begin
                        i_byteena_mask_reg_a[k] <= i_byteena_a[k/i_byte_size];
                        i_byteena_mask_reg_a_out_b[k] <= (i_byteena_a[k/i_byte_size])? 1'bx: 1'b0;
                        i_byteena_mask_reg_a_out[k] <= (i_byteena_a[k/i_byte_size])? 1'b0: 1'bx;
                        i_byteena_mask_reg_a_x[k] <= ((i_byteena_a[k/i_byte_size]) || (i_byteena_a[k/i_byte_size] == 1'b0))? 1'b0: 1'bx;
                    end
               
            end

            if (((family_has_stratixv_style_ram == 0) && (family_stratixiii == 0)) || 
                (is_lutram == 1))
            begin
                good_to_go_a <= 1;
            
                i_rden_reg_a <= rden_a;
                
                if (i_wrcontrol_aclr_a)
                    i_wren_reg_a <= 0;
                else
                begin
                    i_wren_reg_a <= wren_a;
                end
            end

        end
        
        
        if (i_indata_aclr_a)
            i_data_reg_a <= 0;

        if (i_address_aclr_a && (i_address_aclr_family_a == 0))
            i_address_reg_a <= 0;

        if (i_byteena_aclr_a)
        begin
            i_byteena_mask_reg_a <= {width_a{1'b1}};
            i_byteena_mask_reg_a_out <= 0;
            i_byteena_mask_reg_a_x <= 0;
            i_byteena_mask_reg_a_out_b <= {width_a{1'bx}};
        end
        
        
        // Port B

        if (is_bidir_and_wrcontrol_addb_clk0)
        begin

            if (i_core_clocken0_b)
            begin
                if ((family_has_stratixv_style_ram == 1) || (family_stratixiii == 1))
                begin
                    good_to_go_b <= 1;
                    
                    i_rden_reg_b <= rden_b;
    
                    if (i_wrcontrol_aclr_b)
                        i_wren_reg_b <= 0;
                    else
                    begin
                        i_wren_reg_b <= wren_b;
                    end
                end
                
                i_read_flag_b <= ~i_read_flag_b;
                    
                if (is_write_on_positive_edge == 1)
                begin
                    if (i_wren_reg_b || wren_b)
                    begin
                        i_write_flag_b <= ~ i_write_flag_b;
                    end
                    i_nmram_write_b <= 1'b0;
                end
                else
                    i_nmram_write_b <= 1'b1;
            
            end
            else
                i_nmram_write_b <= 1'b0;
                
                
            if ((clock_enable_input_b == "BYPASS") ||
                ((clock_enable_input_b == "NORMAL") && clocken0) ||
                ((clock_enable_input_b == "ALTERNATE") && clocken2))
            begin

                // Port B inputs

                if (i_indata_aclr_b)
                    i_data_reg_b <= 0;
                else
                    i_data_reg_b <= data_b;
        

                if ((family_has_stratixv_style_ram == 0) && (family_stratixiii == 0))
                begin
                    good_to_go_b <= 1;
                
                    i_rden_reg_b <= rden_b;
    
                    if (i_wrcontrol_aclr_b)
                        i_wren_reg_b <= 0;
                    else
                    begin
                        i_wren_reg_b <= wren_b;
                    end
                end

                if (i_address_aclr_b && (i_address_aclr_family_b == 0))
                    i_address_reg_b <= 0;
                else if (!addressstall_b)
                    i_address_reg_b <= address_b;

                if (i_byteena_aclr_b)
                begin
                    i_byteena_mask_reg_b <= {width_b{1'b1}};
                    i_byteena_mask_reg_b_out <= 0;
                    i_byteena_mask_reg_b_x <= 0;
                    i_byteena_mask_reg_b_out_a <= {width_b{1'bx}};
                end
                else
                begin
                   
                    if (width_byteena_b == 1)
                    begin
                        i_byteena_mask_reg_b <= {width_b{i_byteena_b[0]}};
                        i_byteena_mask_reg_b_out_a <= (i_byteena_b[0])? {width_b{1'bx}} : {width_b{1'b0}};
                        i_byteena_mask_reg_b_out <= (i_byteena_b[0])? {width_b{1'b0}} : {width_b{1'bx}};
                        i_byteena_mask_reg_b_x <= ((i_byteena_b[0]) || (i_byteena_b[0] == 1'b0))? {width_b{1'b0}} : {width_b{1'bx}};
                    end
                    else
                        for (k2 = 0; k2 < width_b; k2 = k2 + 1)
                        begin
                            i_byteena_mask_reg_b[k2] <= i_byteena_b[k2/i_byte_size];
                            i_byteena_mask_reg_b_out_a[k2] <= (i_byteena_b[k2/i_byte_size])? 1'bx : 1'b0;
                            i_byteena_mask_reg_b_out[k2] <= (i_byteena_b[k2/i_byte_size])? 1'b0 : 1'bx;
                            i_byteena_mask_reg_b_x[k2] <= ((i_byteena_b[k2/i_byte_size]) || (i_byteena_b[k2/i_byte_size] == 1'b0))? 1'b0 : 1'bx;
                        end
                    
                end

            end
            
            
            if (i_indata_aclr_b)
                i_data_reg_b <= 0;

            if (i_wrcontrol_aclr_b)
                i_wren_reg_b <= 0;

            if (i_address_aclr_b && (i_address_aclr_family_b == 0))
                i_address_reg_b <= 0;

            if (i_byteena_aclr_b)
            begin
                i_byteena_mask_reg_b <= {width_b{1'b1}};
                i_byteena_mask_reg_b_out <= 0;
                i_byteena_mask_reg_b_x <= 0;
                i_byteena_mask_reg_b_out_a <= {width_b{1'bx}};
            end
        end
            
        if (dual_port_addreg_b_clk0)
        begin
            if (i_address_aclr_b && (i_address_aclr_family_b == 0))
                i_address_reg_b <= 0;

            if (i_core_clocken0_b)
            begin
                if (((family_has_stratixv_style_ram == 1) || (family_stratixiii == 1)) && !is_lutram)
                begin
                    good_to_go_b <= 1;
                    
                    if (i_rdcontrol_aclr_b)
                        i_rden_reg_b <= 1'b1;
                    else
                        i_rden_reg_b <= rden_b;
                end
                
                i_read_flag_b <= ~ i_read_flag_b;
            end
            
            if ((clock_enable_input_b == "BYPASS") ||
                ((clock_enable_input_b == "NORMAL") && clocken0) ||
                ((clock_enable_input_b == "ALTERNATE") && clocken2))
            begin
                if (((family_has_stratixv_style_ram == 0) && (family_stratixiii == 0)) || is_lutram)
                begin
                    good_to_go_b <= 1;
                
                    if (i_rdcontrol_aclr_b)
                        i_rden_reg_b <= 1'b1;
                    else
                        i_rden_reg_b <= rden_b;
                end

                if (i_address_aclr_b && (i_address_aclr_family_b == 0))
                    i_address_reg_b <= 0;
                else if (!addressstall_b)
                    i_address_reg_b <= address_b;

            end
            
            
            if (i_rdcontrol_aclr_b)
                i_rden_reg_b <= 1'b1;

            if (i_address_aclr_b && (i_address_aclr_family_b == 0))
                i_address_reg_b <= 0;

        end

    end


    always @(negedge clock0)
    begin
       
        if (clock1)
            same_clock_pulse0 <= 1'b0;

        if (is_write_on_positive_edge == 0)
        begin
            if (i_nmram_write_a == 1'b1)
            begin
                i_write_flag_a <= ~ i_write_flag_a;
                
                if (is_lutram)
                    i_read_flag_a <= ~i_read_flag_a;
            end 

            
            if (is_bidir_and_wrcontrol_addb_clk0)
            begin
                if (i_nmram_write_b == 1'b1)
                    i_write_flag_b <= ~ i_write_flag_b;
            end
        end

        if (i_core_clocken0_b && (lutram_dual_port_fast_read == 1) && (dual_port_addreg_b_clk0 == 1))
        begin
            i_read_flag_b <= ~i_read_flag_b;
        end

    end



    always @(posedge clock1)
    begin
        i_core_clocken1_b_reg <= i_core_clocken1_b;

        if (i_force_reread_b && ((is_bidir_and_wrcontrol_addb_clk1 == 1) || (dual_port_addreg_b_clk1 == 1)))
        begin
            i_force_reread_b_signal <= ~ i_force_reread_b_signal;
            i_force_reread_b <= 0;
        end
        
        if (clock0)
            same_clock_pulse1 <= 1'b1;
        else
            same_clock_pulse1 <= 1'b0;

        if (i_core_clocken_b)    
            i_address_aclr_b_flag <= 0;

        if (is_bidir_and_wrcontrol_addb_clk1)
        begin

            if (i_core_clocken1_b)
            begin
                i_read_flag_b <= ~i_read_flag_b;
    
                if ((family_has_stratixv_style_ram == 1) || (family_stratixiii == 1))
                begin
                    good_to_go_b <= 1;
                    
                    i_rden_reg_b <= rden_b;
    
                    if (i_wrcontrol_aclr_b)
                        i_wren_reg_b <= 0;
                    else
                    begin
                        i_wren_reg_b <= wren_b;
                    end
                end
                
                if (is_write_on_positive_edge == 1)
                begin
                    if (i_wren_reg_b || wren_b)
                    begin
                        i_write_flag_b <= ~ i_write_flag_b;
                    end
                    i_nmram_write_b <= 1'b0;
                end
                else
                    i_nmram_write_b <= 1'b1;
            end
            else
                i_nmram_write_b <= 1'b0;
                
        
            if ((clock_enable_input_b == "BYPASS") ||
                ((clock_enable_input_b == "NORMAL") && clocken1) ||
                ((clock_enable_input_b == "ALTERNATE") && clocken3))
            begin
                
                // Port B inputs
                
                if (address_reg_b == "CLOCK1")
                begin
                    if (i_indata_aclr_b)
                        i_data_reg_b <= 0;
                    else
                        i_data_reg_b <= data_b;
                end

                if ((family_has_stratixv_style_ram == 0) && (family_stratixiii == 0))
                begin
                    good_to_go_b <= 1;
    
                    i_rden_reg_b <= rden_b;
    
                    if (i_wrcontrol_aclr_b)
                        i_wren_reg_b <= 0;
                    else
                    begin
                        i_wren_reg_b <= wren_b;
                    end
                end

                if (i_address_aclr_b && (i_address_aclr_family_b == 0))
                    i_address_reg_b <= 0;
                else if (!addressstall_b)
                    i_address_reg_b <= address_b;

                if (i_byteena_aclr_b)
                begin
                    i_byteena_mask_reg_b <= {width_b{1'b1}};
                    i_byteena_mask_reg_b_out <= 0;
                    i_byteena_mask_reg_b_x <= 0;
                    i_byteena_mask_reg_b_out_a <= {width_b{1'bx}};
                end
                else
                begin
                    if (width_byteena_b == 1)
                    begin
                        i_byteena_mask_reg_b <= {width_b{i_byteena_b[0]}};
                        i_byteena_mask_reg_b_out_a <= (i_byteena_b[0])? {width_b{1'bx}} : {width_b{1'b0}};
                        i_byteena_mask_reg_b_out <= (i_byteena_b[0])? {width_b{1'b0}} : {width_b{1'bx}};
                        i_byteena_mask_reg_b_x <= ((i_byteena_b[0]) || (i_byteena_b[0] == 1'b0))? {width_b{1'b0}} : {width_b{1'bx}};
                    end
                    else
                        for (k2 = 0; k2 < width_b; k2 = k2 + 1)
                        begin
                            i_byteena_mask_reg_b[k2] <= i_byteena_b[k2/i_byte_size];
                            i_byteena_mask_reg_b_out_a[k2] <= (i_byteena_b[k2/i_byte_size])? 1'bx : 1'b0;
                            i_byteena_mask_reg_b_out[k2] <= (i_byteena_b[k2/i_byte_size])? 1'b0 : 1'bx;
                            i_byteena_mask_reg_b_x[k2] <= ((i_byteena_b[k2/i_byte_size]) || (i_byteena_b[k2/i_byte_size] == 1'b0))? 1'b0 : 1'bx;
                        end
                
                end

            end
            
            
            if (i_indata_aclr_b)
                i_data_reg_b <= 0;

            if (i_wrcontrol_aclr_b)
                i_wren_reg_b <= 0;

            if (i_address_aclr_b && (i_address_aclr_family_b == 0))
                i_address_reg_b <= 0;

            if (i_byteena_aclr_b)
            begin
                i_byteena_mask_reg_b <= {width_b{1'b1}};
                i_byteena_mask_reg_b_out <= 0;
                i_byteena_mask_reg_b_x <= 0;
                i_byteena_mask_reg_b_out_a <= {width_b{1'bx}};
            end
        end

        if (dual_port_addreg_b_clk1)
        begin
            if (i_address_aclr_b && (i_address_aclr_family_b == 0))
                i_address_reg_b <= 0;

            if (i_core_clocken1_b)
            begin
                if (i_force_reread_b1)
                begin
                    i_force_reread_b_signal <= ~ i_force_reread_b_signal;
                    i_force_reread_b1 <= 0;
                end
                if (((family_has_stratixv_style_ram == 1) || (family_stratixiii == 1)) && !is_lutram)
                begin
                    good_to_go_b <= 1;
                    
                    if (i_rdcontrol_aclr_b)
                    begin
                        i_rden_reg_b <= 1'b1;
                    end
                    else
                    begin
                        i_rden_reg_b <= rden_b;
                    end
                end

                i_read_flag_b <= ~i_read_flag_b;
            end
            
            if ((clock_enable_input_b == "BYPASS") ||
                ((clock_enable_input_b == "NORMAL") && clocken1) ||
                ((clock_enable_input_b == "ALTERNATE") && clocken3))
            begin
                if (((family_has_stratixv_style_ram == 0) && (family_stratixiii == 0)) || is_lutram)
                begin
                    good_to_go_b <= 1;
                
                    if (i_rdcontrol_aclr_b)
                    begin
                        i_rden_reg_b <= 1'b1;
                    end
                    else
                    begin
                        i_rden_reg_b <= rden_b;
                    end
                end
    
                if (i_address_aclr_b && (i_address_aclr_family_b == 0))
                    i_address_reg_b <= 0;
                else if (!addressstall_b)
                    i_address_reg_b <= address_b;

            end
            
            
            if (i_rdcontrol_aclr_b)
                i_rden_reg_b <= 1'b1;

            if (i_address_aclr_b && (i_address_aclr_family_b == 0))
                i_address_reg_b <= 0;
                
        end

    end

    always @(negedge clock1)
    begin
       
        if (clock0)
            same_clock_pulse1 <= 1'b0;
            
        if (is_write_on_positive_edge == 0)
        begin
           
            if (is_bidir_and_wrcontrol_addb_clk1)
            begin
                if (i_nmram_write_b == 1'b1)
                    i_write_flag_b <= ~ i_write_flag_b;
            end
        end

        if (i_core_clocken1_b && (lutram_dual_port_fast_read == 1) && (dual_port_addreg_b_clk1 ==1))
        begin
            i_read_flag_b <= ~i_read_flag_b;
        end

    end
    
    always @(posedge i_address_aclr_b)
    begin
        if ((is_lutram == 1) && (operation_mode == "DUAL_PORT") && (i_address_aclr_family_b == 0))
            i_read_flag_b <= ~i_read_flag_b;
    end

    always @(posedge i_address_aclr_a)
    begin
        if ((is_lutram == 1) && (operation_mode == "ROM") && (i_address_aclr_family_a == 0))
            i_read_flag_a <= ~i_read_flag_a;
    end
    
    always @(posedge i_outdata_aclr_a)
    begin
        if (((family_has_stratixv_style_ram == 1) || (family_cycloneiii == 1)) && 
            ((outdata_reg_a != "CLOCK0") && (outdata_reg_a != "CLOCK1")))
            i_read_flag_a <= ~i_read_flag_a;
    end

    always @(posedge i_outdata_aclr_b)
    begin
        if (((family_has_stratixv_style_ram == 1) || (family_cycloneiii == 1)) && 
            ((outdata_reg_b != "CLOCK0") && (outdata_reg_b != "CLOCK1")))
            i_read_flag_b <= ~i_read_flag_b;
    end
    
    // Port A writting -------------------------------------------------------------

    always @(posedge i_write_flag_a or negedge i_write_flag_a)
    begin
        if ((operation_mode == "BIDIR_DUAL_PORT") ||
            (operation_mode == "DUAL_PORT") ||
            (operation_mode == "SINGLE_PORT"))
        begin

            if ((i_wren_reg_a) && (i_good_to_write_a))
            begin
                i_aclr_flag_a = 0;

                if (i_indata_aclr_a)
                begin
                    if (i_data_reg_a != 0)
                    begin
                        mem_data[i_address_reg_a] = {width_a{1'bx}};

                        if (enable_mem_data_b_reading)
                        begin
                            j3 = i_address_reg_a * width_a;
                            for (i5 = 0; i5 < width_a; i5 = i5+1)
                            begin
                                    j3_plus_i5 = j3 + i5;
                                    temp_wb = mem_data_b[j3_plus_i5 / width_b];
                                    temp_wb[j3_plus_i5 % width_b] = {1'bx};
                                    mem_data_b[j3_plus_i5 / width_b] = temp_wb;
                            end
                        end
                        i_aclr_flag_a = 1;
                    end
                end
                else if (i_byteena_aclr_a)
                begin
                    if (i_byteena_mask_reg_a != {width_a{1'b1}})
                    begin
                        mem_data[i_address_reg_a] = {width_a{1'bx}};
                        
                        if (enable_mem_data_b_reading)
                        begin
                            j3 = i_address_reg_a * width_a;
                            for (i5 = 0; i5 < width_a; i5 = i5+1)
                            begin
                                    j3_plus_i5 = j3 + i5;
                                    temp_wb = mem_data_b[j3_plus_i5 / width_b];
                                    temp_wb[j3_plus_i5 % width_b] = {1'bx};
                                    mem_data_b[j3_plus_i5 / width_b] = temp_wb;
                            end
                        end
                        i_aclr_flag_a = 1;
                    end
                end
                else if (i_address_aclr_a && (i_address_aclr_family_a == 0))
                begin
                    if (i_address_reg_a != 0)
                    begin
                        wa_mult_x_ii = {width_a{1'bx}};
                        for (i4 = 0; i4 < i_numwords_a; i4 = i4 + 1)
                            mem_data[i4] = wa_mult_x_ii;
                            
                        if (enable_mem_data_b_reading)
                        begin
                            for (i4 = 0; i4 < i_numwords_b; i4 = i4 + 1)
                                mem_data_b[i4] = {width_b{1'bx}};
                        end

                        i_aclr_flag_a = 1;
                    end
                end

                if (i_aclr_flag_a == 0)
                begin
                    i_original_data_a = mem_data[i_address_reg_a];
                    i_original_address_a = i_address_reg_a;
                    i_data_write_time_a = $time;
                    temp_wa = mem_data[i_address_reg_a];
                    
                    port_a_bit_count_low = i_address_reg_a * width_a;
                    port_b_bit_count_low = i_address_reg_b * width_b;
                    port_b_bit_count_high = port_b_bit_count_low + width_b;
                    
                    for (i5 = 0; i5 < width_a; i5 = i5 + 1)
                    begin
                        i_byteena_count = port_a_bit_count_low % width_b;

                        if ((port_a_bit_count_low >= port_b_bit_count_low) && (port_a_bit_count_low < port_b_bit_count_high) &&
                            ((i_core_clocken0_b_reg && (is_bidir_and_wrcontrol_addb_clk0 == 1)) || (i_core_clocken1_b_reg && (is_bidir_and_wrcontrol_addb_clk1 == 1))) && 
                            (i_wren_reg_b) && ((same_clock_pulse0 && same_clock_pulse1) || (address_reg_b == "CLOCK0")) &&
                            (i_byteena_mask_reg_b[i_byteena_count]) && (i_byteena_mask_reg_a[i5]))
                            temp_wa[i5] = {1'bx};
                        else if (i_byteena_mask_reg_a[i5])
                            temp_wa[i5] = i_data_reg_a[i5];

                        if (enable_mem_data_b_reading)
                        begin
                            temp_wb = mem_data_b[port_a_bit_count_low / width_b];
                            temp_wb[port_a_bit_count_low % width_b] = temp_wa[i5];
                            mem_data_b[port_a_bit_count_low / width_b] = temp_wb;
                        end

                        port_a_bit_count_low = port_a_bit_count_low + 1;
                    end

                    mem_data[i_address_reg_a] = temp_wa;

                    if (((cread_during_write_mode_mixed_ports == "OLD_DATA") && (is_write_on_positive_edge == 1) && (address_reg_b == "CLOCK0")) ||
                        ((lutram_dual_port_fast_read == 1) && (operation_mode == "DUAL_PORT")))
                        i_read_flag_b = ~i_read_flag_b;
                        
                    if ((read_during_write_mode_port_a == "OLD_DATA") ||
                        ((is_lutram == 1) && (read_during_write_mode_port_a == "DONT_CARE")))
                        i_read_flag_a = ~i_read_flag_a;
                end

            end
        end
    end    // Port A writting ----------------------------------------------------


    // Port B writting -----------------------------------------------------------

    always @(posedge i_write_flag_b or negedge i_write_flag_b)
    begin
        if (operation_mode == "BIDIR_DUAL_PORT")
        begin

            if ((i_wren_reg_b) && (i_good_to_write_b))
            begin
            
                i_aclr_flag_b = 0;

                // RAM content is following width_a
                // if Port B is of different width, need to make some adjustments

                if (i_indata_aclr_b)
                begin
                    if (i_data_reg_b != 0)
                    begin
                        if (enable_mem_data_b_reading)
                            mem_data_b[i_address_reg_b] = {width_b{1'bx}};
                       
                        if (width_a == width_b)
                            mem_data[i_address_reg_b] = {width_b{1'bx}};
                        else
                        begin
                            j = i_address_reg_b * width_b;
                            for (i2 = 0; i2 < width_b; i2 = i2+1)
                            begin
                                    j_plus_i2 = j + i2;
                                    temp_wa = mem_data[j_plus_i2 / width_a];
                                    temp_wa[j_plus_i2 % width_a] = {1'bx};
                                    mem_data[j_plus_i2 / width_a] = temp_wa;
                            end
                        end
                        i_aclr_flag_b = 1;
                    end
                end
                else if (i_byteena_aclr_b)
                begin
                    if (i_byteena_mask_reg_b != {width_b{1'b1}})
                    begin
                        if (enable_mem_data_b_reading)
                            mem_data_b[i_address_reg_b] = {width_b{1'bx}};
                        
                        if (width_a == width_b)
                            mem_data[i_address_reg_b] = {width_b{1'bx}};
                        else
                        begin
                            j = i_address_reg_b * width_b;
                            for (i2 = 0; i2 < width_b; i2 = i2+1)
                            begin
                                j_plus_i2 = j + i2;
                                j_plus_i2_div_a = j_plus_i2 / width_a;
                                temp_wa = mem_data[j_plus_i2_div_a];
                                temp_wa[j_plus_i2 % width_a] = {1'bx};
                                mem_data[j_plus_i2_div_a] = temp_wa;
                            end
                        end
                        i_aclr_flag_b = 1;
                    end
                end
                else if (i_address_aclr_b && (i_address_aclr_family_b == 0))
                begin
                    if (i_address_reg_b != 0)
                    begin
                        
                        if (enable_mem_data_b_reading)
                        begin
                            for (i2 = 0; i2 < i_numwords_b; i2 = i2 + 1)
                            begin
                                mem_data_b[i2] = {width_b{1'bx}};
                            end
                        end
                        
                        wa_mult_x_iii = {width_a{1'bx}};
                        for (i2 = 0; i2 < i_numwords_a; i2 = i2 + 1)
                        begin
                            mem_data[i2] = wa_mult_x_iii;
                        end
                        i_aclr_flag_b = 1;
                    end
                end

                if (i_aclr_flag_b == 0)
                begin
                        port_b_bit_count_low = i_address_reg_b * width_b;
                        port_a_bit_count_low = i_address_reg_a * width_a;
                        port_a_bit_count_high = port_a_bit_count_low + width_a;
                        
                        for (i2 = 0; i2 < width_b; i2 = i2 + 1)
                        begin
                            port_b_bit_count_high = port_b_bit_count_low + i2;
                            temp_wa = mem_data[port_b_bit_count_high / width_a];
                            i_original_data_b[i2] = temp_wa[port_b_bit_count_high % width_a];
                            
                            if ((port_b_bit_count_high >= port_a_bit_count_low) && (port_b_bit_count_high < port_a_bit_count_high) &&
                                ((same_clock_pulse0 && same_clock_pulse1) || (address_reg_b == "CLOCK0")) &&
                                (i_core_clocken_a_reg) && (i_wren_reg_a) &&
                                (i_byteena_mask_reg_a[port_b_bit_count_high % width_a]) && (i_byteena_mask_reg_b[i2]))
                                temp_wa[port_b_bit_count_high % width_a] = {1'bx};
                            else if (i_byteena_mask_reg_b[i2])
                                temp_wa[port_b_bit_count_high % width_a] = i_data_reg_b[i2];
                            
                            mem_data[port_b_bit_count_high / width_a] = temp_wa;
                            temp_wb[i2] = temp_wa[port_b_bit_count_high % width_a];
                        end

                        if (enable_mem_data_b_reading)
                            mem_data_b[i_address_reg_b] = temp_wb;

                    if ((read_during_write_mode_port_b == "OLD_DATA") && (is_write_on_positive_edge == 1))
                        i_read_flag_b = ~i_read_flag_b;
                        
                    if ((cread_during_write_mode_mixed_ports == "OLD_DATA")&& (address_reg_b == "CLOCK0") && (is_write_on_positive_edge == 1))
                        i_read_flag_a = ~i_read_flag_a;

                end

            end
            
        end
    end


    // Port A reading

    always @(i_read_flag_a)
    begin
        if ((operation_mode == "BIDIR_DUAL_PORT") ||
            (operation_mode == "SINGLE_PORT") ||
            (operation_mode == "ROM"))
        begin
            if (~good_to_go_a && (is_lutram == 0))
            begin

                if (((i_ram_block_type == "M-RAM") || (i_ram_block_type == "MEGARAM") ||
                        ((i_ram_block_type == "AUTO") && ((cread_during_write_mode_mixed_ports == "DONT_CARE") || (cread_during_write_mode_mixed_ports == "CONSTRAINED_DONT_CARE")))) && 
                    (operation_mode != "ROM") &&
                    ((family_has_stratixv_style_ram == 0) && (family_has_stratixiii_style_ram == 0)))
                    i_q_tmp2_a = {width_a{1'bx}};
                else
                    i_q_tmp2_a = 0;
            end
            else
            begin
                if (i_rden_reg_a)
                begin
                    // read from RAM content or flow through for write cycle
                    if (i_wren_reg_a)
                    begin
                        if (i_core_clocken_a)
                        begin
                            if (read_during_write_mode_port_a == "NEW_DATA_NO_NBE_READ")
                                if (is_lutram && clock0)
                                    i_q_tmp2_a = mem_data[i_address_reg_a];
                                else
                                    i_q_tmp2_a = ((i_data_reg_a & i_byteena_mask_reg_a) |
                                                ({width_a{1'bx}} & ~i_byteena_mask_reg_a));
                            else if (read_during_write_mode_port_a == "NEW_DATA_WITH_NBE_READ")
                                if (is_lutram && clock0)
                                    i_q_tmp2_a = mem_data[i_address_reg_a];
                                else
                                    i_q_tmp2_a = (i_data_reg_a & i_byteena_mask_reg_a) | (mem_data[i_address_reg_a] & ~i_byteena_mask_reg_a) ^ i_byteena_mask_reg_a_x;
                            else if (read_during_write_mode_port_a == "OLD_DATA")
                                i_q_tmp2_a = i_original_data_a;
                            else
                                if ((lutram_single_port_fast_read == 0) && (i_ram_block_type != "AUTO"))
                                begin
                                    if ((family_has_stratixv_style_ram == 1) || (family_has_stratixiii_style_ram == 1))
                                        i_q_tmp2_a = {width_a{1'bx}};
                                    else
                                        i_q_tmp2_a = i_original_data_a;
                                end
                                else
                                    if (is_lutram)
                                        i_q_tmp2_a = mem_data[i_address_reg_a]; 
                                    else
                                        i_q_tmp2_a = i_data_reg_a ^ i_byteena_mask_reg_a_out;
                        end
                        else
                            i_q_tmp2_a = mem_data[i_address_reg_a];
                    end
                    else
                        i_q_tmp2_a = mem_data[i_address_reg_a];

                    if (is_write_on_positive_edge == 1)
                    begin

                        if (is_bidir_and_wrcontrol_addb_clk0 || (same_clock_pulse0 && same_clock_pulse1))
                        begin
                            // B write, A read
                        if ((i_wren_reg_b & ~i_wren_reg_a) & 
                            ((((is_bidir_and_wrcontrol_addb_clk0 & i_clocken0_b) || 
                            (is_bidir_and_wrcontrol_addb_clk1 & i_clocken1_b)) && ((family_has_stratixv_style_ram == 1) || (family_has_stratixiii_style_ram == 1))) ||
                            (((is_bidir_and_wrcontrol_addb_clk0 & i_core_clocken0_b) || 
                            (is_bidir_and_wrcontrol_addb_clk1 & i_core_clocken1_b)) && ((family_has_stratixv_style_ram == 1) || (family_has_stratixiii_style_ram == 1)))))
                            begin
                                add_reg_a_mult_wa = i_address_reg_a * width_a;
                                add_reg_b_mult_wb = i_address_reg_b * width_b;
                                add_reg_a_mult_wa_pl_wa = add_reg_a_mult_wa + width_a;
                                add_reg_b_mult_wb_pl_wb = add_reg_b_mult_wb + width_b;

                                if (
                                    ((add_reg_a_mult_wa >=
                                        add_reg_b_mult_wb) &&
                                    (add_reg_a_mult_wa <=
                                        (add_reg_b_mult_wb_pl_wb - 1)))
                                        ||
                                    (((add_reg_a_mult_wa_pl_wa - 1) >=
                                        add_reg_b_mult_wb) &&
                                    ((add_reg_a_mult_wa_pl_wa - 1) <=
                                        (add_reg_b_mult_wb_pl_wb - 1)))
                                        ||
                                    ((add_reg_b_mult_wb >=
                                        add_reg_a_mult_wa) &&
                                    (add_reg_b_mult_wb <=
                                        (add_reg_a_mult_wa_pl_wa - 1)))
                                        ||
                                    (((add_reg_b_mult_wb_pl_wb - 1) >=
                                        add_reg_a_mult_wa) &&
                                    ((add_reg_b_mult_wb_pl_wb - 1) <=
                                        (add_reg_a_mult_wa_pl_wa - 1)))
                                    )
                                        for (i3 = add_reg_a_mult_wa;
                                                i3 < add_reg_a_mult_wa_pl_wa;
                                                i3 = i3 + 1)
                                        begin
                                            if ((i3 >= add_reg_b_mult_wb) &&
                                                (i3 <= (add_reg_b_mult_wb_pl_wb - 1)))
                                            begin
                                            
                                                if (cread_during_write_mode_mixed_ports == "OLD_DATA")
                                                begin
                                                    i_byteena_count = i3 - add_reg_b_mult_wb;
                                                    i_q_tmp2_a_idx = (i3 - add_reg_a_mult_wa);
                                                    i_q_tmp2_a[i_q_tmp2_a_idx] = i_original_data_b[i_byteena_count];
                                                end
                                                else
                                                begin
                                                    i_byteena_count = i3 - add_reg_b_mult_wb;
                                                    i_q_tmp2_a_idx = (i3 - add_reg_a_mult_wa);
                                                    i_q_tmp2_a[i_q_tmp2_a_idx] = i_q_tmp2_a[i_q_tmp2_a_idx] ^ i_byteena_mask_reg_b_out_a[i_byteena_count];
                                                end
                                                
                                            end
                                        end
                            end
                        end
                    end
                end
                
                if ((is_lutram == 1) && i_address_aclr_a && (i_address_aclr_family_a == 0) && (operation_mode == "ROM"))
                    i_q_tmp2_a = mem_data[0];
                
                if (((family_has_stratixv_style_ram == 1) || (family_cycloneiii == 1)) && 
                    (is_lutram != 1) &&
                    (i_outdata_aclr_a || i_force_reread_a) &&
                    (outdata_reg_a != "CLOCK0") && (outdata_reg_a != "CLOCK1"))
                    i_q_tmp2_a = {width_a{1'b0}};
            end // end good_to_go_a
        end
    end


    // assigning the correct output values for i_q_tmp_a (non-registered output)
    always @(i_q_tmp2_a or i_wren_reg_a or i_data_reg_a or i_address_aclr_a or
             i_address_reg_a or i_byteena_mask_reg_a_out or i_numwords_a or i_outdata_aclr_a or i_force_reread_a_signal or i_original_data_a)
    begin
        if (i_address_reg_a >= i_numwords_a)
        begin
            if (i_wren_reg_a && i_core_clocken_a)
                i_q_tmp_a <= i_q_tmp2_a;
            else
                i_q_tmp_a <= {width_a{1'bx}};
            if (i_rden_reg_a == 1)
            begin
                $display("Warning : Address pointed at port A is out of bound!");
                $display("Time: %0t  Instance: %m", $time);
            end
        end
        else 
            begin
                if (i_outdata_aclr_a_prev && ~ i_outdata_aclr_a && 
                    (family_has_stratixiii_style_ram == 1) &&
                    (is_lutram != 1))
                begin
                    i_outdata_aclr_a_prev = i_outdata_aclr_a;
                    i_force_reread_a <= 1;
                end
                else if (~i_address_aclr_a_prev && i_address_aclr_a && (i_address_aclr_family_a == 0) && s3_address_aclr_a)
                begin
                    if (i_rden_reg_a)
                        i_q_tmp_a <= {width_a{1'bx}};
                    i_force_reread_a1 <= 1;
                end
                else if ((i_force_reread_a == 0) && (i_force_reread_a1 == 0) && !(i_address_aclr_a_prev && ~i_address_aclr_a && (i_address_aclr_family_a == 0) && s3_address_aclr_a))
                begin
                    i_q_tmp_a <= i_q_tmp2_a;
                end
            end
            if ((i_outdata_aclr_a) && (s3_address_aclr_a))
            begin
                i_q_tmp_a <= {width_a{1'b0}};
                i_outdata_aclr_a_prev <= i_outdata_aclr_a;
            end
            i_address_aclr_a_prev <= i_address_aclr_a;
    end


    // Port A outdata output registered
    generate if (outdata_reg_a == "CLOCK1")
        begin: clk1_on_outa_gen
            always @(posedge clock1 or posedge i_outdata_aclr_a)
            begin
                if (i_outdata_aclr_a)
                    i_q_reg_a <= 0;
                else if (i_outdata_clken_a)
                begin           
                    i_q_reg_a <= i_q_tmp_a;
                    if (i_core_clocken_a)
                    i_address_aclr_a_flag <= 0;
                end
                else if (i_core_clocken_a)
                    i_address_aclr_a_flag <= 0;
            end
        end
        else if (outdata_reg_a == "CLOCK0")
        begin: clk0_on_outa_gen
            always @(posedge clock0 or posedge i_outdata_aclr_a)
            begin
                if (i_outdata_aclr_a)
                    i_q_reg_a <= 0;
                else if (i_outdata_clken_a)
                begin           
                    if ((i_address_aclr_a_flag == 1) &&
                        (family_has_stratixv_style_ram || family_stratixiii) && (is_lutram != 1))
                        i_q_reg_a <= 'bx;
                    else
                        i_q_reg_a <= i_q_tmp_a;
                    if (i_core_clocken_a)
                    i_address_aclr_a_flag <= 0;
                end
                else if (i_core_clocken_a)
                    i_address_aclr_a_flag <= 0;
            end
        end
    endgenerate

    // Latch for address aclr till outclock enabled
    always @(posedge i_address_aclr_a or posedge i_outdata_aclr_a)
    begin
        if (i_outdata_aclr_a)
            i_address_aclr_a_flag <= 0;
        else
            if (i_rden_reg_a && (i_address_aclr_family_a == 0))
                i_address_aclr_a_flag <= 1;
    end

    // Port A : assigning the correct output values for q_a
    assign q_a = (operation_mode == "DUAL_PORT") ?
                    {width_a{1'b0}} : (((outdata_reg_a == "CLOCK0") ||
                            (outdata_reg_a == "CLOCK1")) ?
                    i_q_reg_a : i_q_tmp_a);


    // Port B reading
    always @(i_read_flag_b)
    begin
        if ((operation_mode == "BIDIR_DUAL_PORT") ||
            (operation_mode == "DUAL_PORT"))
        begin
            if (~good_to_go_b && (is_lutram == 0))
            begin
                
                if ((check_simultaneous_read_write == 1) &&
                    ((family_has_stratixv_style_ram == 0) && (family_has_stratixiii_style_ram == 0)) &&
                    (family_cycloneii == 0))
                    i_q_tmp2_b = {width_b{1'bx}};
                else
                    i_q_tmp2_b = 0;
            end
            else
            begin
                if (i_rden_reg_b)
                begin
                    //If width_a is equal to b, no address calculation is needed
                    if (width_a == width_b)
                    begin

                        // read from memory or flow through for write cycle
                        if (i_wren_reg_b && (((is_bidir_and_wrcontrol_addb_clk0 == 1) && i_core_clocken0_b) || 
                            ((is_bidir_and_wrcontrol_addb_clk1 == 1) && i_core_clocken1_b)))
                        begin
                            if (read_during_write_mode_port_b == "NEW_DATA_NO_NBE_READ")
                                temp_wb = ((i_data_reg_b & i_byteena_mask_reg_b) |
                                            ({width_b{1'bx}} & ~i_byteena_mask_reg_b));
                            else if (read_during_write_mode_port_b == "NEW_DATA_WITH_NBE_READ")
                                temp_wb = (i_data_reg_b & i_byteena_mask_reg_b) | (mem_data[i_address_reg_b] & ~i_byteena_mask_reg_b) ^ i_byteena_mask_reg_b_x;
                            else if (read_during_write_mode_port_b == "OLD_DATA")
                                temp_wb = i_original_data_b; 
                            else 
                                temp_wb = {width_b{1'bx}};
                        end
                        else if ((i_data_write_time_a == $time) && (operation_mode == "DUAL_PORT")  &&
                            ((family_has_stratixv_style_ram == 0) && (family_has_stratixiii_style_ram == 0)))
                        begin
                            // if A write to the same Ram address B is reading from
                            if ((i_address_reg_b == i_address_reg_a) && (i_original_address_a == i_address_reg_a))
                            begin
                                if (address_reg_b != "CLOCK0")
                                    temp_wb = mem_data[i_address_reg_b] ^ i_byteena_mask_reg_a_out_b;
                                else if (cread_during_write_mode_mixed_ports == "OLD_DATA")
                                begin
                                    if (mem_data[i_address_reg_b] === ((i_data_reg_a & i_byteena_mask_reg_a) | (mem_data[i_address_reg_a] & ~i_byteena_mask_reg_a) ^ i_byteena_mask_reg_a_x))
                                        temp_wb = i_original_data_a;
                                    else
                                        temp_wb = mem_data[i_address_reg_b];
                                end
                                else if ((cread_during_write_mode_mixed_ports == "DONT_CARE") || (cread_during_write_mode_mixed_ports == "CONSTRAINED_DONT_CARE"))
                                    temp_wb = mem_data[i_address_reg_b] ^ i_byteena_mask_reg_a_out_b;
                                else
                                    temp_wb = mem_data[i_address_reg_b];
                            end
                            else
                                temp_wb = mem_data[i_address_reg_b];              
                        end
                        else
                            temp_wb = mem_data[i_address_reg_b];

                        if (is_write_on_positive_edge == 1)
                        begin
                            if ((dual_port_addreg_b_clk0 == 1) ||
                                (is_bidir_and_wrcontrol_addb_clk0 == 1) || (same_clock_pulse0 && same_clock_pulse1))
                            begin
                                // A write, B read
                                if ((i_wren_reg_a & ~i_wren_reg_b) && 
                                    ((i_clocken0 && ((family_has_stratixv_style_ram == 0) && (family_has_stratixiii_style_ram == 0))) ||
                                    (i_core_clocken_a && ((family_has_stratixv_style_ram == 1) || (family_has_stratixiii_style_ram == 1)))))
                                begin
                                    // if A write to the same Ram address B is reading from
                                    if (i_address_reg_b == i_address_reg_a)
                                    begin
                                        if (lutram_dual_port_fast_read == 1)
                                            temp_wb = (i_data_reg_a & i_byteena_mask_reg_a) | (i_q_tmp2_a & ~i_byteena_mask_reg_a) ^ i_byteena_mask_reg_a_x;
                                        else
                                            if (cread_during_write_mode_mixed_ports == "OLD_DATA")
                                                if ((mem_data[i_address_reg_b] === ((i_data_reg_a & i_byteena_mask_reg_a) | (mem_data[i_address_reg_a] & ~i_byteena_mask_reg_a) ^ i_byteena_mask_reg_a_x))
                                                    && (i_data_write_time_a == $time))
                                                    temp_wb = i_original_data_a;
                                                else
                                                    temp_wb = mem_data[i_address_reg_b];
                                            else
												if(i_data_write_time_a == $time)
													temp_wb = mem_data[i_address_reg_b] ^ i_byteena_mask_reg_a_out_b;
												else
													temp_wb = mem_data[i_address_reg_b];
                                    end
                                end
                            end
                        end
                    end
                    else
                    begin
                        j2 = i_address_reg_b * width_b;

                        for (i5=0; i5<width_b; i5=i5+1)
                        begin
                            j2_plus_i5 = j2 + i5;
                            temp_wa2b = mem_data[j2_plus_i5 / width_a];
                            temp_wb[i5] = temp_wa2b[j2_plus_i5 % width_a];
                        end
                        
                        if (i_wren_reg_b && ((is_bidir_and_wrcontrol_addb_clk0 && i_core_clocken0_b) || 
                            (is_bidir_and_wrcontrol_addb_clk1 && i_core_clocken1_b)))
                        begin
                            if (read_during_write_mode_port_b == "NEW_DATA_NO_NBE_READ")
                                temp_wb = i_data_reg_b ^ i_byteena_mask_reg_b_out;
                            else if (read_during_write_mode_port_b == "NEW_DATA_WITH_NBE_READ")
                                temp_wb = (i_data_reg_b & i_byteena_mask_reg_b) | (temp_wb & ~i_byteena_mask_reg_b) ^ i_byteena_mask_reg_b_x;
                            else if (read_during_write_mode_port_b == "OLD_DATA")
                                temp_wb = i_original_data_b;
                            else 
                                temp_wb = {width_b{1'bx}};
                        end
                        else if ((i_data_write_time_a == $time) &&  (operation_mode == "DUAL_PORT") &&
                            ((family_has_stratixv_style_ram == 0) && (family_has_stratixiii_style_ram == 0)))
                        begin
                            for (i5=0; i5<width_b; i5=i5+1)
                            begin
                                j2_plus_i5 = j2 + i5;
                                j2_plus_i5_div_a = j2_plus_i5 / width_a;

                                // if A write to the same Ram address B is reading from
                                if ((j2_plus_i5_div_a == i_address_reg_a) && (i_original_address_a == i_address_reg_a))
                                begin
                                    if (address_reg_b != "CLOCK0")
                                    begin
                                        temp_wa2b = mem_data[j2_plus_i5_div_a];
                                        temp_wa2b = temp_wa2b ^ i_byteena_mask_reg_a_out_b;
                                    end
                                    else if (cread_during_write_mode_mixed_ports == "OLD_DATA")
                                        temp_wa2b = i_original_data_a;
                                    else if ((cread_during_write_mode_mixed_ports == "DONT_CARE") || (cread_during_write_mode_mixed_ports == "CONSTRAINED_DONT_CARE"))
                                    begin
                                        temp_wa2b = mem_data[j2_plus_i5_div_a];
                                        temp_wa2b = temp_wa2b ^ i_byteena_mask_reg_a_out_b;
                                    end
                                    else
                                        temp_wa2b = mem_data[j2_plus_i5_div_a];
                                end
                                else
                                    temp_wa2b = mem_data[j2_plus_i5_div_a];
              
                                temp_wb[i5] = temp_wa2b[j2_plus_i5 % width_a];
                            end
                        end

                        if (is_write_on_positive_edge == 1)
                        begin
                            if (((address_reg_b == "CLOCK0") & dual_port_addreg_b_clk0) ||
                                ((wrcontrol_wraddress_reg_b == "CLOCK0") & is_bidir_and_wrcontrol_addb_clk0) || (same_clock_pulse0 && same_clock_pulse1))
                            begin
                                // A write, B read
                                if ((i_wren_reg_a & ~i_wren_reg_b) && 
                                    ((i_clocken0 && ((family_has_stratixv_style_ram == 0) && (family_has_stratixiii_style_ram == 0))) ||
                                    (i_core_clocken_a && ((family_has_stratixv_style_ram == 1) || (family_has_stratixiii_style_ram == 1)))))
                                begin
                                
                                    for (i5=0; i5<width_b; i5=i5+1)
                                    begin
                                        j2_plus_i5 = j2 + i5;
                                        j2_plus_i5_div_a = j2_plus_i5 / width_a;
                                        
                                        // if A write to the same Ram address B is reading from
                                        if (j2_plus_i5_div_a == i_address_reg_a)
                                        begin
                                            if (lutram_single_port_fast_read == 1)
                                                temp_wa2b = (i_data_reg_a & i_byteena_mask_reg_a) | (i_q_tmp2_a & ~i_byteena_mask_reg_a) ^ i_byteena_mask_reg_a_x;
                                            else
                                            begin
                                                if (cread_during_write_mode_mixed_ports == "OLD_DATA")
                                                    temp_wa2b = i_original_data_a;
                                                else
                                                begin
                                                    temp_wa2b = mem_data[j2_plus_i5_div_a];
													temp_wa2b = temp_wa2b ^ i_byteena_mask_reg_a_out_b;
                                                end
                                            end
                                                
                                            temp_wb[i5] = temp_wa2b[j2_plus_i5 % width_a];
                                        end
                                            
                                    end
                                end
                            end
                        end
                    end 
                    //end of width_a != width_b
                    
                    i_q_tmp2_b = temp_wb;

                end
                
                if ((is_lutram == 1) && i_address_aclr_b && (i_address_aclr_family_b == 0) && (operation_mode == "DUAL_PORT"))
                begin
                    for (init_i = 0; init_i < width_b; init_i = init_i + 1)
                    begin
                        init_temp = mem_data[init_i / width_a];
                        i_q_tmp_b[init_i] = init_temp[init_i % width_a];
                        i_q_tmp2_b[init_i] = init_temp[init_i % width_a];
                    end
                end
                else if ((is_lutram == 1) && (operation_mode == "DUAL_PORT"))
                begin
                    j2 = i_address_reg_b * width_b;

                    for (i5=0; i5<width_b; i5=i5+1)
                    begin
                        j2_plus_i5 = j2 + i5;
                        temp_wa2b = mem_data[j2_plus_i5 / width_a];
                        i_q_tmp2_b[i5] = temp_wa2b[j2_plus_i5 % width_a];
                    end
                end
                
                if ((i_outdata_aclr_b || i_force_reread_b) && 
                    ((family_has_stratixv_style_ram == 1) || (family_cycloneiii == 1)) &&
                    (is_lutram != 1) &&
                    (outdata_reg_b != "CLOCK0") && (outdata_reg_b != "CLOCK1"))
                    i_q_tmp2_b = {width_b{1'b0}};
            end
        end
    end


    // assigning the correct output values for i_q_tmp_b (non-registered output)
    always @(i_q_tmp2_b or i_wren_reg_b or i_data_reg_b or i_address_aclr_b or
                 i_address_reg_b or i_byteena_mask_reg_b_out or i_rden_reg_b or
                 i_numwords_b or i_outdata_aclr_b or i_force_reread_b_signal)
    begin
        if (i_address_reg_b >= i_numwords_b)
        begin
            if (i_wren_reg_b && ((i_core_clocken0_b && (is_bidir_and_wrcontrol_addb_clk0 == 1)) || (i_core_clocken1_b && (is_bidir_and_wrcontrol_addb_clk1 == 1))))
                i_q_tmp_b <= i_q_tmp2_b;
            else
                i_q_tmp_b <= {width_b{1'bx}};
            if (i_rden_reg_b == 1)
            begin
                $display("Warning : Address pointed at port B is out of bound!");
                $display("Time: %0t  Instance: %m", $time);
            end
        end
        else
            if (operation_mode == "BIDIR_DUAL_PORT")
            begin
            
                if (i_outdata_aclr_b_prev && ~ i_outdata_aclr_b && (family_has_stratixiii_style_ram == 1) && (is_lutram != 1))
                begin
                    i_outdata_aclr_b_prev <= i_outdata_aclr_b;
                    i_force_reread_b <= 1;
                end
                else
                begin
					if( i_force_reread_b == 0)
						i_q_tmp_b <= i_q_tmp2_b;
                end
            end
            else if (operation_mode == "DUAL_PORT")
            begin
                if (i_outdata_aclr_b_prev && ~ i_outdata_aclr_b && (family_has_stratixiii_style_ram == 1) && (is_lutram != 1))
                begin
                    i_outdata_aclr_b_prev <= i_outdata_aclr_b;
                    i_force_reread_b <= 1;
                end
                else if (~i_address_aclr_b_prev && i_address_aclr_b && (i_address_aclr_family_b == 0) && s3_address_aclr_b)
                begin
                    if (i_rden_reg_b)
                        i_q_tmp_b <= {width_b{1'bx}};
                    i_force_reread_b1 <= 1;
                end
                else if ((i_force_reread_b1 == 0) && !(i_address_aclr_b_prev && ~i_address_aclr_b && (i_address_aclr_family_b == 0) && s3_address_aclr_b))
                begin
		
		
                if ((is_lutram == 1) && (is_write_on_positive_edge) && (cread_during_write_mode_mixed_ports == "OLD_DATA") && (width_a == width_b) && (i_address_reg_a == i_address_reg_b) && i_wren_reg_a && i_rden_reg_b)
                    i_q_tmp_b <= i_original_data_a;
		else
                    i_q_tmp_b <= i_q_tmp2_b;
                end
            end
        
        if ((i_outdata_aclr_b) && (s3_address_aclr_b))
        begin
            i_q_tmp_b <= {width_b{1'b0}};
            i_outdata_aclr_b_prev <= i_outdata_aclr_b;
        end
        i_address_aclr_b_prev <= i_address_aclr_b;
    end

    generate if (outdata_reg_b == "CLOCK1")
        begin: clk1_on_outb_fall_gen
            always @(negedge clock1)
            begin
                if (i_core_clocken_a)
		begin
                    if ((width_a == width_b) && (i_address_reg_a == i_address_reg_b) && i_wren_reg_a && i_rden_reg_b)
                        i_q_output_latch <= i_original_data_a;
	            else
                        i_q_output_latch <= i_q_tmp2_b;
                end
	    end
        end
        else if (outdata_reg_b == "CLOCK0")
        begin: clk0_on_outb_fall_gen
            always @(negedge clock0)
            begin
                if (i_core_clocken_a)
		begin
                    if ((width_a == width_b) && (i_address_reg_a == i_address_reg_b) && i_wren_reg_a && i_rden_reg_b)
                        i_q_output_latch <= i_original_data_a;
	            else
                        i_q_output_latch <= i_q_tmp2_b;
                end
            end
        end
    endgenerate

    // Port B outdata output registered
    generate if (outdata_reg_b == "CLOCK1")
        begin: clk1_on_outb_rise_gen
            always @(posedge clock1 or posedge i_outdata_aclr_b)
            begin
                if (i_outdata_aclr_b)
                    i_q_reg_b <= 0;
                else if (i_outdata_clken_b)
                begin
                    if ((i_address_aclr_b_flag == 1) && (family_has_stratixv_style_ram || family_stratixiii) &&
                        (is_lutram != 1))
                        i_q_reg_b <= 'bx;
                    else
                    i_q_reg_b <= i_q_tmp_b;
                end
            end
        end
        else if (outdata_reg_b == "CLOCK0")
        begin: clk0_on_outb_rise_gen
            always @(posedge clock0 or posedge i_outdata_aclr_b)
            begin
                if (i_outdata_aclr_b)
                    i_q_reg_b <= 0;
                else if (i_outdata_clken_b)
                begin
                    if ((is_lutram == 1) && (cread_during_write_mode_mixed_ports == "OLD_DATA"))
                        i_q_reg_b <= i_q_output_latch;
                    else
                    begin           
                        if ((i_address_aclr_b_flag == 1) && (family_has_stratixv_style_ram || family_stratixiii) &&
                            (is_lutram != 1))
                            i_q_reg_b <= 'bx;
                        else
                        i_q_reg_b <= i_q_tmp_b;
                    end
                end
            end
        end
    endgenerate

	generate if (outdata_reg_b == "CLOCK0" && ecc_pipeline_stage_enabled == "TRUE")
	begin: clk0_on_ecc_pipeline_reg_rise_gen
		 always @(posedge clock0 or posedge i_outdata_aclr_b)
		begin
			if (i_outdata_aclr_b)
				i_q_ecc_reg_b <= 0;
			else if (i_outdata_clken_b)
			begin
				i_q_ecc_reg_b <= i_q_reg_b;
			end
		end
	end
			else if (outdata_reg_b == "CLOCK1" && ecc_pipeline_stage_enabled == "TRUE")
	begin: clk0_on_ecc_pipeline_reg_rise_gen
		always @(posedge clock1 or posedge i_outdata_aclr_b)
		begin
			if (i_outdata_aclr_b)
				i_q_ecc_reg_b <= 0;
			else if (i_outdata_clken_b)
			begin
				i_q_ecc_reg_b <= i_q_reg_b;
			end
		end
	end
	endgenerate
	
    // Latch for address aclr till outclock enabled
    always @(posedge i_address_aclr_b or posedge i_outdata_aclr_b)
        if (i_outdata_aclr_b)
            i_address_aclr_b_flag <= 0;
        else
        begin
            if (i_rden_reg_b)
                i_address_aclr_b_flag <= 1;
        end

    // Port B : assigning the correct output values for q_b
    assign q_b = ((operation_mode == "SINGLE_PORT") ||
                    (operation_mode == "ROM")) ?
                        {width_b{1'b0}} : (((outdata_reg_b == "CLOCK0") ||
                            (outdata_reg_b == "CLOCK1")) ?
							((ecc_pipeline_stage_enabled == "TRUE")?(i_q_ecc_reg_b) : (i_q_reg_b)):
							((ecc_pipeline_stage_enabled == "TRUE")?(i_q_ecc_tmp_b) : (i_q_tmp_b))); //i_q_ecc_tmp_b has 'x' output


    // ECC status
    assign eccstatus = {width_eccstatus{1'b0}};

endmodule // ALTSYNCRAM

// END OF MODULE

