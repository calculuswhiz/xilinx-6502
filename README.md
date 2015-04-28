# xilinx-6502
Experimental gate-level processor design for 6502

Hello, welcome to our documentation and source code for the 6502.
Some quick things:

1. We've implemented the code thus far in a way assuming clock speeds close to that of the original 6502. The idea is that we want to have a somewhat accurate emulation of the 6502 and be able to potentially have our emulated version of the chip replace an actual one and still have a system work. Too ambitious? Maybe. Refer to 6510_Instruction_Timing.txt for more information.

2. This is an educational project. The purpose was to learn more about the 6502 and accumlator type microarchitectures in general. To meet the first goal, we haven't tried optimizing components to the maximum and using modern techniques like having a fully pipelined processor; rather, we've stuck to a rather simple design and are planning on running at a rather low clock frequency, for reasons such as reason 1.

3. This is a WIP.
