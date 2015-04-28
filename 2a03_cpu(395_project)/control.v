module control
(
    /* Input and output port declarations */
    input clk,
    
    input [7:0] P_in,
    input [7:0] IR_in,
    
    // Control signals:
    // Enable:
    output X_en, Y_en, Sd_en, Sm_en, A_en,
    output PCLd_en, PCLm_en, PCHd_en, PCHm_en,
    output DLd_en, DLm_en, DHd_en, DHm_en,
    output TLd_en, TLm_en, THd_en, THm_en,
    output Pd_en, IR_en,
    output ALUd_en, ALUm_en,
    output xferu_en, xferd_en,
    output Zl_en, Zh_en,

    // Load:
    output X_ld, Y_ld, S_ld, A_ld,
    output PCL_ld, PCH_ld,
    output PCL_inc, PCH_inc,
    output DL_ld, DH_ld,
    output DH_inc,
    output TL_ld, TH_ld,
    output TH_inc,
    output P_ld, IR_ld,

    // Selection:
    output Smux_sel, Amux_sel,
    // output SID_sel,
    output [2:0] ALU_Amux_sel, ALU_Bmux_sel,
    output PCLmux_sel, PCHmux_sel,
    output DLmux_sel, DHmux_sel,
    output TLmux_sel, THmux_sel,
    output Pmux_sel,
    output IRmux_sel,

    // Other ALU signals:
    output [3:0] aluop,
    output V_ctl, C_ctl,  // Selectively decide whether to send these flags to the ALU
    
    output mem_rw   // Default to read
);

//States:
parameter SIZE = 12;
parameter alu_adc = 4'h00, alu_sbc = 4'h01, alu_eor = 4'h02, alu_ora = 4'h03, alu_and = 4'h04, alu_inc = 4'h05, alu_dec = 4'h06, alu_ror = 4'h07, alu_rol = 4'h08, alu_asl = 4'h09, alu_lsr = 4'h0a, alu_nop = 4'hff;
`include "opCodeHex.v" // Holds all the opcode values.

reg [SIZE-1:0] state;
reg [SIZE-1:0] next_state;


always_comb
begin : state_actions
    /* Default output assignments */
    // Enable:
    X_en        = 0;
    Y_en        = 0;
    Sd_en       = 0;
    Sm_en       = 0;
    A_en        = 0;
    PCLd_en     = 0;
    PCLm_en     = 0;
    PCHd_en     = 0;
    PCHm_en     = 0;
    DLd_en      = 0;
    DLm_en      = 0;
    DHd_en      = 0;
    DHm_en      = 0;
    TLd_en      = 0;
    TLm_en      = 0;
    THd_en      = 0;
    THm_en      = 0;
    Pd_en       = 0;
    IR_en       = 0;
    ALUd_en     = 0;
    ALUm_en     = 0;
    xferu_en    = 0;
    xferd_en    = 0;
    Zl_en       = 0;
    Zh_en       = 0;
    
    // Load:
    X_ld    = 0;
    Y_ld    = 0;
    S_ld    = 0;
    A_ld    = 0;
    PCL_ld  = 0;
    PCH_ld  = 0;
    PCL_inc = 0;    // Yes, these are load signals too.
    PCH_inc = 0;
    DL_ld   = 0;
    DH_ld   = 0;
    DH_inc  = 0;
    TL_ld   = 0;
    TH_ld   = 0;
    TH_inc  = 0;
    P_ld    = 0;
    IR_ld   = 0;
    
    // Selection:
    Smux_sel        = 0;
    Amux_sel        = 0;
    ALU_Amux_sel    = 2'b00;
    ALU_Bmux_sel    = 2'b00;
    PCLmux_sel      = 0;
    PCHmux_sel      = 0;
    DLmux_sel       = 0;
    DHmux_sel       = 0;
    TLmux_sel       = 0;
    THmux_sel       = 0;
    Pmux_sel        = 0;
    IRmux_sel       = 0;
        
    // Other ALU signals:
    aluop   = alu_nop;
    V_ctl   = 0;
    C_ctl   = 0;
         
    mem_rw  = 1;   // Default to read 

    case(state)
        fetch: 
        begin
            IR_ld = 1;
        end
        
        default: /* Do nothing */;
    endcase
    /* Actions for each state */
end

always_comb
begin : next_state_logic
    /* Next state information and conditions (if any)
     * for transitioning between states */
    next_state = state;
    case(state)
        fetch: 
        begin // See opCodeHex.v for all encodings.
            // Use commas to separate same next-states.
            case({4'h0, ir[7:0]})
                ADC_IMM: ;
                default: /* Shippai :(. */;
            endcase
        end

        default: next_state = fetch;
    endcase
end

always_ff @(posedge clk)
begin: next_state_assignment
    /* Assignment of next state on clock edge */
    state <= next_state;
end

endmodule : control
