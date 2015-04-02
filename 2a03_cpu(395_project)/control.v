module control
(
    /* Input and output port declarations */
    input clk,
    
    // Input signals here:
    // Flags:
    input P_n,
    input P_v,
    input P_i,
    input P_z,
    input P_c,
    input [7:0] IR,
    
    // Load signals here:
    output X_ld,
    output Y_ld,
    output S_ld,
    output A_ld,
    
    output PCL_inc,     // Increment PC signal, prevent invalidation
    output PCL_ld,
    output PCH_ld,
    
    output DL_ld,
    output DH_ld,
    
    output TL_ld,
    output TH_ld,
    
    output PN_ld,
    output PV_ld,
    output PI_ld,
    output PZ_ld,
    output PC_ld,
    
    output IR_ld,
    
    // Gates: default 0
    output X_en,
    output Y_en,
    output Sm_en,
    output Sd_en,
    output ALUm_en,
    output ALUd_en,
    output A_en,
    output PCLm_en,
    output PCLd_en,
    output DLm_en,
    output DHd_en,
    output TLm_en,
    output THd_en,
    output P_en,
    output IR_en,
    
    // Other:
    output [3:0] aluop,   // default 5, I think, which is add.
    output [1:0] addr_enable,   // Enable by default
    output mem_rw   // Default to read
);

//States:
parameter SIZE = 3;
parameter fetch = 1;
parameter alu_adc = 4'h00, alu_sbc = 4'h01, alu_eor = 4'h02, alu_ora = 4'h03, alu_and = 4'h04, alu_inc = 4'h05, alu_dec = 4'h06, alu_ror = 4'h07, alu_rol = 4'h08, alu_asl = 4'h09, alu_lsr = 4'h0a, alu_nop = 4'hff;

reg [SIZE:0] state;
reg [SIZE:0] next_state;


always_comb
begin : state_actions
    /* Default output assignments */
    // Load signals here:
    X_ld    = 0;
    Y_ld    = 0;
    S_ld    = 0;
    A_ld    = 0;
    
    PCL_inc = 0;
    PCL_ld  = 0;
    PCH_ld  = 0;
    
    DL_ld   = 0;
    DH_ld   = 0;
    
    TL_ld   = 0;
    TH_ld   = 0;
    
    PN_ld   = 0;
    PV_ld   = 0;
    PI_ld   = 0;
    PZ_ld   = 0;
    PC_ld   = 0;
    
    IR_ld   = 0;
    
    // Gates: default 0
    X_en    = 0;
    Y_en    = 0;
    Sm_en   = 0;
    Sd_en   = 0;
    ALUm_en = 0;
    ALUd_en = 0;
    A_en    = 0;
    PCLm_en = 0;
    PCLd_en = 0;
    DLm_en  = 0;
    DHd_en  = 0;
    TLm_en  = 0;
    THd_en  = 0;
    P_en    = 0;
    IR_en   = 0;
    
    // Other:
    aluop = alu_inc;
    addr_enable = 2'b11;
    mem_rw = 1;

    case(state)
        fetch: /*I don't know yet.*/ ;
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
        begin
            case(ir[7:0])
                ADC:
                AND:
                ASL:
                BIT:
                BR:
                BRK:
                CMP:
                CPX:
                CPY:
                DEC:
                EOR:
                INC:
                JMP:
                JSR:
                JSR:
                LDA:
                LDX:
                LDY:
                LSR:
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
