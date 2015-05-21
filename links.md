We didn't exactly use all of these, but here's some useful information:

High-level overview:
- [Block Diagram](http://www.witwright.com/DonPub/6502-Block-Diagram.pdf): Was mostly just useful in getting some basic datapath ideas on paper. A Verilog programmer doesn't need to deal with MOSFETs.
- [CPU](http://wiki.nesdev.com/w/index.php/CPU). A good place to start reading.
- [Fetch-execute](http://faculty.cs.niu.edu/~berezin/463/notes/fetchex.html). Helped us get a feel for how the CPU worked, cycle by cycle.
    
Low-level details:
- [Detailed Instruction Listing](http://homepage.ntlworld.com/cyborgsystems/CS_Main/6502/6502.htm#ADC). Our primary reference for instruction listings.
- [Timing Behavior](http://nesdev.com/6502_cpu.txt). Our primary reference for cycle-by-cycle behavior. However, we adapted a section of the document and tailored it to our needs for the project. See `Instruction_Timing.txt` for more information.
- [Proto-datapath](http://www.mdawson.net/vic20chrome/cpu/mos_6500_mpu_preliminary_may_1976.pdf). Page 2. We based most of our datapath on this design.

Not used, but may be useful for later versions:
- [Gritty details of 65xx processors](http://www.romhacking.net/documents/318/)
- [Unofficial opcodes grouped](http://wiki.nesdev.com/w/index.php/CPU_unofficial_opcodes)
- [UO details](http://wiki.nesdev.com/w/index.php/Programming_with_unofficial_opcodes)
- Xilinx:
    - [SD card overview](http://www.xess.com/blog/accessing-the-xula2-microsd-card/)
    - [SD card HDL](https://github.com/xesscorp/XuLA/blob/master/FPGA/XuLA_lib/SDCard.vhd). \*sigh\* VHDL...
    
Tools and manuals:
- Xilinx:
    - [Product page](http://www.xess.com/shop/product/xula2-lx9/) (for the FPGA we're using)
    - [XStools info](http://www.xess.com/blog/a-python-package-for-xess-fpga-boards/). Communicates over the USB instead of having to get a JTAG cable.
- [Javascript 6502 assembler](http://e-tradition.net/bytes/6502/assembler.html). For test programs
    
Other projects:
- http://ladybug.xs4all.nl/arlet/fpga/6502/
- http://graphics.stanford.edu/~ianbuck/proj/Nintendo/Nintendo.html
