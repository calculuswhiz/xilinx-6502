// This is only a ROM right now.
// Our simple program does this:
// ADC #$01
// ADC #$01
// JMP $0000
// Infinite loop. Note that this is add with carry, so
// it will skip 01 once the counter reaches 00 again.

module testmemory (
    // input clk,    // Clock
    input [15:0] tm_address,
    // input rW,
    
    output [7:0] tm_data
);

reg [7:0] TM_DATA [7:0];

initial
begin 
    $readmemh("program.list", TM_DATA);
end

// always @ (posedge clk)
// begin 
    assign tm_data = TM_DATA[tm_address[2:0]];
// end

endmodule
