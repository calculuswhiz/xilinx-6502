//The seven segment display we're using only allows one of the seven segment displays to be set at once, so we use this to set both every other clock cycle.
module pulser
(
	input clk,
	input [11:0] low,
	input [11:0] high,
	output reg [11:0] to_seven_seg
);

reg data;

initial
begin
	data = 0;
end

always @ (posedge clk)
begin
	if(data == 1) //Low
		begin
			data = 0;
			to_seven_seg = low |12'b000000100000;
		end
	else //High
		begin
			data = 1;
			to_seven_seg = high|12'b000010000000;
		end
end

endmodule
