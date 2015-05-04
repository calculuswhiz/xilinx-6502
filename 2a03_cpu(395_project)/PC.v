module PC #(parameter width=16)
(
	input clk,
    
	input load_pc_h,
	input load_pc_l,
    
    input L_inc,
    input H_inc,
    
	input [7:0]    PCL_in,
	input [7:0]    PCH_in,
    
	output [7:0]   PCL_out,
	output [7:0]   PCH_out
);

reg [width-1:0] data;

initial
begin
	data = 0;
end

always @ (posedge clk)
begin 
    if (L_inc)
        data=data+1'b1;
    else if (H_inc)
    begin
        data[15:8]=data[15:8]+1'b1;
        data[7:0] =data[7:0];
    end
    else if (load_pc_h|load_pc_l)
    begin
    	data [15:8] = load_pc_h?PCH_in:data[15:8];
    	data [7:0] = load_pc_l?PCL_in:data[7:0];
    end
end

assign PCL_out = data [7:0];
assign PCH_out = data [15:8];

endmodule : PC
