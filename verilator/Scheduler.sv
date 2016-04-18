module Scheduler(input logic clk,
        input logic [7:0] data1,data2,data3,
        input logic empty1,empty2,empty3,
        output logic [1:0] sel1,sel2,sel3,
        output logic rdreq1,rdreq2,rdreq3);
        logic en1,en2,en3;
        
        always_ff @(posedge clk) begin
                en1=0;en2=0;en3=0;
                sel1=0;sel2=0;sel3=0;
                //Doing for data1
                case (data1[1:0])
                        2'b01 : begin 
                                if (!en1 && !empty1) begin
                                        en1=1;
                                        sel1 = 01;
                                end
                                else begin
                                        sel1 =0;
                                end
                        end
                        2'b10 : begin 
                                if (!en2 && !empty1) begin
                                        en2=1;
                                        sel2 = 01;
                                end
                                else begin
                                        sel2 =0;
                                end
                        end
                        2'b11 : begin 
                                if (!en3 && !empty1) begin
                                        en3=1;
                                        sel3 = 01;
                                end
                                else begin
                                        sel3 =0;
                                end
                        end
                        default:begin
                                sel1=0;sel2=0;sel3=0;
                        end
                endcase
                //For FIFO 2
                case (data2[1:0])
                        2'b01 : begin 
                                if (!en1 && !empty2) begin
                                        en1=1;
                                        sel1 = 10;
                                end
                                else begin
                                        sel1 =0;
                                end
                        end
                        2'b10 : begin 
                                if (!en2 && !empty2) begin
                                        en2=1;
                                        //sel2 = 10;
                                end
                                else begin
                                        sel2 =0;
                                end
                        end
                        2'b11 : begin 
                                if (!en3 && !empty2) begin
                                        en3=1;
                                        //sel3 = 10;
                                end
                                else begin
                                        sel3 =0;
                                end
                        end
                        default:begin
                                sel1=0;sel2=0;sel3=0;
                        end
                endcase
                case (data3[1:0])
                        2'b01 : begin 
                                if (!en1 && !empty3) begin
                                        en1=1;
                                        sel1 = 11;
                                end
                                else begin
                                        sel1 =0;
                                end
                        end
                        2'b10 : begin 
                                if (!en2 && !empty3) begin
                                        en2=1;
                                        sel2 = 11;
                                end
                                else begin
                                        sel2 =0;
                                end
                        end
                        2'b11 : begin 
                                if (!en3 && !empty3) begin
                                        en3=1;
                                        sel3 = 11;
                                end
                                else begin
                                        sel3 =0;
                                end
                        end
                        default:begin
                                sel1=0;sel2=0;sel3=0;
                        end
                endcase



        end
endmodule

