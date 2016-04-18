module Buffer( input logic      clk,
        input logic [7:0]       result1,result2,result3,
        input logic             chipselect, read,
        input logic [2:0]       address,
        input logic             ramen1,ramen2,ramen3,
        input logic [7:0]       data1,data2,data3,
        output logic [7:0]      hex1,hex2,hex3,hex4,hex5,hex6,
        output logic [7:0]      readdata);
        logic                   ramrd1, ramrd2, ramrd3;
        logic                   ramwr1,ramwr2,ramwr3;
        logic                   read1,read2,read3;
        logic                   ramdata1,ramdata2,ramdata3;
        logic [13:0]            wrcount1,wrcount2,wrcount3;
        logic [13:0]            rdcount1,rdcount2,rdcount3;
        initial begin
                rdcount1 =0;rdcount2 =0;rdcount3 =0;
                wrcount1=0;wrcount2=0;wrcount3=0;
                ramrd1 = 1; ramrd2=1;ramrd3=1;
                ramwr1 = 0;ramwr2=0;ramwr3=0;
        end
        //For writing data to the RAM
        always_ff @(posedge clk) begin
                hex1<=data1[1:0];
                hex2<=data2[1:0];
                hex3<=data3[1:0];
                if (ramen1) begin
                        hex4 <=result1[1:0];
                        wrcount1 <=wrcount1+1;

                end
                if(ramen2) begin
                        hex5 <= result2[1:0];
                        wrcount2 <=wrcount2+1;
                end
                if (ramen3) begin
                        hex6 <=result3[1:0];
                        wrcount3 <=wrcount3 +1;
                end
        end
        // For reading data from the RAM
        always_ff @(posedge clk)begin
                ramrd1<=1;ramrd2<=1;ramrd3<=1;
                
                if (chipselect &&read)begin
                        case(address)
                                3'b000:readdata<=rdcount1;
                                3'b110:readdata <=wrcount1;
                                3'b101:readdata <=wrcount2;
                                3'b100:readdata <=wrcount3;
                                3'b001:
                                        if (rdcount1 < wrcount1)
                                                if (!read1) begin
                                                        readdata <=ramdata1;
                                                        read1 <=1;
                                                end
                                                else begin
                                                        read1<=0;
                                                        rdcount1 <=rdcount1+1;
                                                end
                                        else
                                                readdata <=255;
                                3'b010:
                                        if(rdcount3 <wrcount3)
                                                if (!read2) begin
                                                        readdata <=ramdata2;
                                                        read3 <=1;
                                                end
                                                else begin
                                                        read2<=0;
                                                        rdcount2<=rdcount2+1;
                                                end
                                        else
                                                readdata <=255;
                                3'b011:
                                        if (rdcount3<wrcount3)
                                                if (!read3) begin
                                                        readdata<=ramdata3;
                                                        read3 <=1;
                                                        
                                                end
                                                else begin
                                                        read3<=0;
                                                        rdcount3 <=rdcount3+1;
                                                end
                                        else
                                                readdata <=255;

                                default:
                                        readdata<=252;
                        endcase
                end
                else
                        readdata <=251;
                        if (read1)
                        begin
                                                        read1<=0;
                                                        rdcount1 <=rdcount1+1;
                                                end


        end

        endmodule

