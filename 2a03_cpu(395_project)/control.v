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
    
    // Control signals here:
    output X_ld,
    output Y_ld,
    output S_ld,
    output A_ld,
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
    output aluop,   // default 5, I think
    output mem_rw   // Default to read
);

//States:
parameter SIZE = 3;
parameter fetch = 1;

reg [SIZE:0] state;
reg [SIZE:0] next_state;


always_comb
begin : state_actions
    /* Default output assignments */
    

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
        fetch: /*TBD*/;

        default: next_state = fetch;
    endcase
end

always_ff @(posedge clk)
begin: next_state_assignment
    /* Assignment of next state on clock edge */
    state <= next_state;
end

endmodule : control
