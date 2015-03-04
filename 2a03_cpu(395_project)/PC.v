module PC (
    input clk,    // Clock
    input rst_n,  // Asynchronous reset active low
    input [1:0] low_select,

    input lLoad,
    inptu hLoad,

    input [7:0] lData, 
    input [7:0] hData,

    output [7:0] lOut,
    output [7:0] hOut
);

IDReg PCL(
    .clk(),    // Clock
    .load(lLoad),
    .rst_n(),
    .inputSel(low_select),   // 0 = normal, 1 = +1, 2 = -1
    .datain(lData),
    .dataout(lOut)
);

gpReg PCH(
    .clk(),
    .load(hLoad),
    .rst_n(),
    .in(hData),
    .out(hOut)
);



endmodule