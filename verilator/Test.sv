module Test(input logic clk,
                output logic d,
                output logic c);
        initial begin
                d =0;
        end
        always_ff @(posedge clk) begin
               d<=1;
               c<=~d;
       end

endmodule
