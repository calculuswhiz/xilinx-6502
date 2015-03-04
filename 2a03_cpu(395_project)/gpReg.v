/*
    With the parameter width thing, we can now simulate any of the cpu registers.
    = PC is 2 bytes
    These are all the byte registers:
    - S, Stack pointer ~ %spl
    - X and Y, Index registers ~ %sil, %dil
    - A, Accumulator ~ %al
    - P, Status register ~ flags
*/

module gpReg #(parameter width = 8)
(
    input clk,
    input load,
    input rst_n,  // Asynchronous reset active low
    input [width-1:0] in,
    output logic [width-1:0] out
);

logic [width-1:0] data;

/* Should be 0 anyway, but for simulation purposes...
 */
initial
begin
    out = 0;
end

always @ (posedge clk or negedge rst_n)
begin 
    if(~rst_n)
        out=0;
    else if(clk)
        out=in;
end

endmodule : gpReg