module ALU (
    input [7:0] a,
    input [7:0] b,
    input carryIn,
    input overflowIn,

    input [3:0] operation,

    // Arithmetic flags:
    output negative,
    output overflow,
    output zero,
    output carry,

    // Output: (top bit will be carry bit)
    output [8:0] f 
);

wire [2:0] opSel;
// assign opsel = operation[7:5];

// Determine operation:
/*
    Only needs to support basic operations:
    (The control unit will handle when to use each one.)
        0.    carry-addition:     for address calculations and the ADC instruction.
        1.    borrow-subtract:    SBC instruction, CMP instruction
        2.    exclusive or:       EOR instruction
        3.    or:                 ORA instruction
        4.    and:                AND instruction, also unofficial SAX/LAX-type
        56.   ++/--:              Increment/decrement. Maybe acutally use this for
                                      the registers too.
        78.   rotate:             ROR, ROL
        910.  Shift:              ASL, LSR
*/
always
begin 
    casez (operation)
        4'h00: // add carry
            f = a+b+carryIn;
            carry = f[8];
            overflow = (a[7]^f[7])&(b[7]^f[7]);
        4'h01: // subtract borrow
            f = a-b-~carryIn;
            carry = ~f[8];
            overflow = (a[7]^f[7])&(b[7]^f[7]);
        4'h02: // exclusive or
            f = a^b;
            carry = carryIn;
            overflow = overflowIn;
        4'h03: // bitwise or
            f = a|b;
            carry = carryIn;
            overflow = overflowIn;
        4'h04: // bitwise and
            f = a&b;
            carry = carryIn;
            overflow = overflowIn;
        4'h05: // increment
            f = a+1;
            carry = carryIn;
            overflow = overflowIn;
        4'h06: // decrement
            f = a-1;
            carry = carryIn;
            overflow = overflowIn;
        4'h07: // rotate right
            f = {carryIn,b[7:1]};
            carry = b[0];
            overflow = overflowIn;
        4'h08: // rotate left
            f = {b[6:0],carryIn};
            carry = b[7];
            overflow = overflowIn;
        4'h09: // Shift left
            f = {b[6:0],0};
            carry = b[7];
            overflow = overflowIn;
        4'h0a: // Shift right
            f = {0, b[7:1]};
            carry = b[0];
            overflow = overflowIn;
        default:  // NOP (Actually pass input a)
            f=a;
            carry=carry;
            overflow=overflowIn;
    endcase
end

endmodule
