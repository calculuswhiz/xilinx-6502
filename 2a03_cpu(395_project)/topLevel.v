module topLevel (
    input clk,    // Clock
    
    // Memory:
    inout [7:0] mem_data,
    output mem_read,
    output [7:0] mem_addr_l,
    output [7:0] mem_addr_h
);

// Internal signals:
// Enable:
wire X_en, Y_en, Sd_en, Sm_en, A_en;
wire PCLd_en, PCLm_en, PCHd_en, PCHm_en;
wire DLd_en, DLm_en, DHd_en, DHm_en;
wire TLd_en, TLm_en, THd_en, THm_en;
wire Pd_en, IR_en;
wire ALUd_en, ALUm_en;
wire xferu_en, xferd_en;
wire Zl_en, Zh_en;

// Load:
wire X_ld, Y_ld, S_ld, A_ld;
wire PCL_ld, PCH_ld;
wire DL_ld, DH_ld;
wire TL_ld, TH_ld;
wire P_ld, IR_ld;

// Selection:
wire Smux_sel, Amux_sel;
wire SID_sel;
wire [2:0] ALU_Amux_sel, ALU_Bmux_sel;
wire PCLmux_sel, PCHmux_sel;
wire PCLID_sel;
wire DLmux_sel, DHmux_sel;
wire TLmux_sel, THmux_sel;
wire Pmux_sel;

// Other ALU signals:
wire [3:0] aluop;
wire V_in, V_out, C_in, C_out;

// GP-Buses:
reg [7:0] data_bus;
reg [7:0] memory_bus_h, memory_bus_l;
reg [7:0] xfer_bus;

// Output data:
reg [7:0] X_out, Y_out, S_out, A_out, ALU_out;
reg [7:0] Xbuf_out, Ybuf_out, Smbuf_out, Sdbuf_out, Abuf_out;
reg [7:0] ALUdbuf_out, ALUmbuf_out;
reg [7:0] PCL_out, PCH_out;
reg       PCL_carry;
reg [7:0] PCLmbuf_out, PCLdbuf_out, PCHmbuf_out, PCHdbuf_out;
reg [7:0] DL_out, DH_out;
reg [7:0] DLmbuf_out, DLdbuf_out, DHmbuf_out, DHdbuf_out;
reg [7:0] TL_out, TH_out;
reg [7:0] TLmbuf_out, TLdbuf_out, THmbuf_out, THdbuf_out;
reg [7:0] P_out;
reg [7:0] Pbuf_out;
reg [7:0] IR_out;
reg [7:0] IRbuf_out;
reg [7:0] xferubuf_out, xferdbuf_out;

// Mulitplexed data:
reg [7:0] Smux_out, ALU_Amux_out, ALU_Bmux_out, Amux_out;
reg [7:0] PCLmux_out, PCHmux_out;
reg [7:0] DLmux_out, DHmux_out;
reg [7:0] TLmux_out, THmux_out;
reg [7:0] Pmux_out;

// dev_zero
reg [7:0] zeroin, zeroout;
reg [7:0] ZLbuf_out, ZHbuf_out;


// Put stuff down from left to right:
gpReg Xreg(
    .clk(),
    .load(X_ld), 
    .rst_n(1'b1), 
    .in(data_bus), 
    .out(X_out)
);

tristate Xbuf(
    .in(X_out),
    .enable(X_en),
    .out(Xbuf_out)
);
assign data_bus = Xbuf_out;

gpReg Yreg(
    .clk(),
    .load(Y_ld), 
    .rst_n(1'b1), 
    .in(data_bus), 
    .out(Y_out)
);

tristate Ybuf(
    .in(Y_out),
    .enable(Y_en),
    .out(Ybuf_out)
);
assign data_bus = Ybuf_out;

mux2 Smux(
    .a(data_bus), 
    .b(memory_bus_l), 
    .sel(Smux_sel),
    .f(Smux_out)
);

gpReg S(
    .clk(),    // Clock
    .load(S_ld),
    .rst_n(1'b1),
    .in(Smux_out),
    .out(S_out),
);

tristate Sdbuf(
    .in(S_out),
    .enable(Sd_en),
    .out(Sdbuf_out)
);
assign data_bus = Xbuf_out;

tristate Smbuf(
    .in(S_out),
    .enable(Sm_en),
    .out(Smbuf_out)
);
assign memory_bus_l = Smbuf_out;

mux8 ALU_Amux(
    .in0(A_out), 
    .in1(X_out), 
    .in2(Y_out), 
    .in3(S_out), 
    .in4(data_bus), 
    .in5(PCL_out), 
    .in6(memory_bus_l), 
    .in7(memory_bus_h),
    .sel(ALU_Amux_sel),
    .f(ALU_Amux_out)
);

mux8 ALU_Bmux(
    .in0(A_out), 
    .in1(X_out), 
    .in2(Y_out), 
    .in3(S_out), 
    .in4(data_bus), 
    .in5(PCL_out), 
    .in6(memory_bus_l), 
    .in7(memory_bus_h),
    .sel(ALU_Bmux_sel),
    .f(ALU_Bmux_out)
);

ALU ALU_6502(
    .a(ALU_Amux_out),
    .b(ALU_Bmux_out),
    .carryIn(C_in),
    .overflowIn(V_in),
    .operation(aluop),
    .carry(C_out),
    .overflow(V_out),
    .f(ALU_out) 
);

tristate ALUd_buf(
    .in(ALU_out),
    .enable(ALUd_en),
    .out(ALUd_buf_out)
);
assign data_bus = ALUd_buf_out;

tristate ALUm_buf(
    .in(ALU_out),
    .enable(ALUm_en),
    .out(ALUm_buf_out)
);
assign memory_bus_l = ALUm_buf_out;

mux2 Amux(
    .a(data_bus),
    .b(ALU_out),
    .sel(Amux_sel),
    .f(Amux_out)
);

gpReg Areg(
    .clk(),
    .load(A_ld), 
    .rst_n(1'b1), 
    .in(Amux_out), 
    .out(A_out)
); 

tristate Abuf(
    .in(A_out),
    .enable(A_en),
    .out(Abuf_out)
);
assign data_bus = Abuf_out;

dev_zero zero_device(
    .datain(zeroin),
    .dataout(zeroout)
);

mux2 PCLmux(
    .a(data_bus),
    .b(memory_bus_l), 
    .sel(PCLmux_sel),
    .f(PCLmux_out)
);

mux2 PCHmux(
    .a(data_bus),
    .b(memory_bus_h), 
    .sel(PCHmux_sel),
    .f(PCHmux_out)
);

IDReg PCL_reg(
    .clk(),
    .load(PCL_ld),
    .rst_n(1'b1),
    .inputSel(PCLID_sel),
    .datain(PCLmux_out),
    .dataout(PCL_out),
    .carryout(PCL_carry)
);



endmodule
