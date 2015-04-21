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
// wire Zl_en, Zh_en;

// Load:
wire X_ld, Y_ld, S_ld, A_ld;
wire PCL_ld, PCH_ld;
wire DL_ld, DH_ld;
wire TL_ld, TH_ld;
wire P_ld, IR_ld;

// Selection:
wire S_sel, A_sel;
wire [2:0] ALU_A_sel, ALU_B_sel;
wire PCL_sel, PCH_sel;
wire DL_sel, DH_sel;
wire TL_sel, TH_sel;
wire P_sel;

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

endmodule
