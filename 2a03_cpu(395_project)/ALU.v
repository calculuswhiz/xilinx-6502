/*
    Only needs to support basic operations:
    (The control unit will handle when to use each one.)
        carry-addition:     for address calculations and the ADC instruction.
        borrow-subtract:    SBC instruction, CMP instruction
        exclusive or:       EOR instruction
        or:                 OR instruction
        and:                AND instruction, also unofficial SAX/LAX-type
        ++/--:              Increment/decrement. Maybe acutally use this for
                                the registers too.
        rotate:             ROR, ROL
        Shift:              ASL, LSR
*/

module ALU (
    input [7:0] a,
    input [7:0] b,
    input carryIn,
    input overflowIn,

    input [7:0] operation,

    // Arithmetic flags:
    output negative,
    output overflow,
    output zero,
    output carry,

    // Output: (top bit will be carry bit)
    output [8:0] f 
);

wire [2:0] opSel;
assign opsel = operation[7:5];

// Determine operation:
always
begin 
    casez (opSel)
        3'b000: /*OR */ 
            f = a|b ;
            carry = f[8];
            overflow = ;
        3'b001: /*AND*/ 
            f = a&b ;
            carry = f[8];
            overflow = ;
        3'b010: /*EOR*/ 
            f = a^b ;
            carry = f[8];
            overflow = ;
        3'b011: /*ADC*/ 
            f = a+b+carryIn ;
            carry = f[8];
            overflow = ;
        3'b100: /*STA*/ 
            f = a+b ;
            carry = f[8];   // Address calc
            overflow = ;
        3'b101: /*LDA*/ 
            f = a+b ;
            carry = f[8];   // Address calc
            overflow = ;
        3'b110: /*CMP*/ 
            f = a-b ;
            carry = f[8];
            overflow = ;
        3'b111: /*SBC*/ 
            f = a-b-~carryIn ;
            carry = f[8];
            overflow = ;
    endcase
end

endmodule
