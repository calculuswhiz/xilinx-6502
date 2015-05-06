# xilinx-6502
Experimental gate-level processor design for 6502

Hello, welcome to our documentation and source code for the 6502.
Some quick things:

1. We've implemented the code thus far in a way assuming clock speeds close to that of the original 6502. The idea is that we want to have a somewhat accurate emulation of the 6502 and be able to potentially have our emulated version of the chip replace an actual one and still have a system work. Too ambitious? Maybe. Refer to 6510_Instruction_Timing.txt for more information.

2. This is an educational project. The purpose was to learn more about the 6502 and accumlator type microarchitectures in general. To meet the first goal, we haven't tried optimizing components to the maximum and using modern techniques like having a fully pipelined processor; rather, we've stuck to a rather simple design and are planning on running at a rather low clock frequency, for reasons such as reason 1.

3. Check links.md for a list of sources we used for research and reference.

4. file_desc.txt has information about what each file in the project does.

5. fpgaloading.md has some information about how to load onto the FPGA, as well how to open in the simulator.

6. This is a WIP. Current status: ADC #imm and JMP $ABS  have been implemented. Future work may continue this, and we reserve the right to modify this repository at any time. Contributions are welcome, but for school, we recommend forking.

# Getting started:
So you've decided to try it out. Here's the stuff we used:
- FPGA: We used Xess' [XuLA2-LX9](http://www.xess.com/shop/product/xula2-lx9/) board for development.
- 7-segment display: Standard 4 digits, each with decimal point (dp). 12 pins. Enable (active low, 1-indexed) being pins 12, 9, 8, and 6. See `2a03_cpu(395_project)/sevenseg.v` for more information.
- Some LED. Ours was green.
- USB to micro USB cable.

Got the stuff? Next up:
- First you want to get the Xilinx ISE installer and install the ISE. Do *not* get the Vivado ISE. It does not support devices older than series-7. Directions can be found online. There is documentation on the Arch Linux wiki for those of us who use it.
- Warning: this file is **huge** (6 GiB-ish). But that's not the worst part. The actual install size is over **20 GiB**! This means that it may not fit inside your root directory (I gave mine only 20 GiB). I installed it to my home directory. (I have not experimented with deleting unneeded devices to save space. Do so at your own risk.)
- The installer might not modify your path variable. Most notably, you want to make sure that `Xilinx/14.7/ISE_DS/ISE/bin/lin64/ise` is accessible by your launchers. I made a symbolic link in my `~/bin` directory.
- Clone this repository. Note that you want to keep your path name short (less than 48 characters). Thanks, Xilinx.
- After this, you're pretty much ready to get started, I think. The `.xise` file is what you want to open with the ISE. The `.bit` file is the bitstream file you load through the USB port. See `fpgaloading.md` for more information.

# Current state of project:
We've written a quick demo program for the two instructions we implemented (`testMemory.v`):
```
ADC #$01
JMP $0000
```
The seven-segment display outputs the value inside the Accumulator. Thus, this value will keep incrementing. Expected output:
```
00
01
...
FF
00
02  <- Note that this is because the carry flag got set with the previous operation.
```
