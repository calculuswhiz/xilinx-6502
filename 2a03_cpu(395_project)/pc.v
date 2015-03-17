module PC #(parameter width=16)
(
	input clk,
	input PCinc,
	input load_pc_h,
	input load_pc_l,
	input load_pc_h_mem,	
	input alu_in [7:0],
	input mem_in [7:0],

	output PC_L [7:0],
	output PC_H [7:0]
);

reg [width-1:0] data;

intial
begin
	data = 0;
end

always @ (posedge clk)
begin 
    if (PCinc)
        data=data+1;
    if (load_pc_h)
    	data [15:8] = alu_in;
    if (load_pc_h_mem) /*Hopefully only one of these is high ever.*/
    	data [15:8] = mem_in;
    if (load_pc_l) /*Not sure if you want to use alu_in, but it seems reasonable currently.*/
    	data [7:0] = alu_in;

end

assign PC_H = data [15:8];
assign PC_L = data [7:0];

endmodule : gpReg
