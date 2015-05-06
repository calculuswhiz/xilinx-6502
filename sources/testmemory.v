// This is only a ROM right now.

module testmemory (
    input clk,    // Clock
    input [15:0] tm_address,
    // input rW,
    
    output reg [7:0] tm_data
);

reg [7:0] TM_DATA [7:0];

initial
begin 
    TM_DATA[0]=8'h69;       // ADC 
    TM_DATA[1]=8'h01;       // $01
    TM_DATA[2]=8'h4C;       // JMP
    TM_DATA[3]=8'h00;       // $00
    TM_DATA[4]=8'h00;       // $00
    TM_DATA[5]=8'h00;
    TM_DATA[6]=8'h00;
    TM_DATA[7]=8'h00;
end

always @ (posedge clk)
begin 
    tm_data <= TM_DATA[tm_address[2:0]];
end

endmodule
