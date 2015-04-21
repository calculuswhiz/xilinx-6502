/*
    Increment and decrement register.
    Used for PCL, S
*/

module IDReg #(parameter width = 8) (
    input clk,    // Clock
    input load,
    input rst_n,
    input [1:0] inputSel,   // 0 = normal, 1 = +1, 2 = -1
    input [width-1:0] datain,
    output dataout, 
    output carryout
);


wire [width-1:0] selOut;

always @ (inputSel, datain)
begin 
    case (inputSel)
        0: selOut = datain;
        1: {carryout,selOut} = dataout+1;
        2: {carryout,selOut} = dataout-1;
        default : selOut = datain;
    endcase
end

gpReg #(.width = width) wrapReg(
    .clk(clk),
    .load(load),
    .rst_n(rst_n),
    .in(selOut),
    .out(dataout)
);

endmodule
