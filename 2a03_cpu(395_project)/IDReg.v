/*
    Increment and decrement register.
    Used for AXYS,PCL
*/

module IDReg #(parameter width = 8) (
    input clk,    // Clock
    input load,
    input rst_n,
    input [1:0] inputSel,   // 0 = normal, 1 = +1, 2 = -1
    input [width-1:0] datain,
    output dataout
);

wire [width-1:0] selOut;

always @ (inputSel, datain)
begin 
    case (inputSel)
        0: selOut = datain;
        1: selOut = dataout+1;
        2: selOut = dataout-1;
        default : selOut = datain;
    endcase
end

gpReg #(.width = width) wrapReg(
    .clk(),
    .load(),
    .rst_n(),
    .in(selOut),
    .out(dataout)
);

endmodule