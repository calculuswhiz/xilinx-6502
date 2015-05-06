There is actually simultaneously a lot of documentation and very little documentation on this process with this particular ISE. A lot of the documentation is quite confusing, so here's a short summary of what we did and how we loaded programs onto the FPGA, for the sake of our sanity, and anyone else who wants to work on this project.


To load onto the FPGA:

Get XSTools. We've included a link. We also recommend using some distro of GNU/Linux. Command lines are cool. I think there's a Windows interface for this, but we've never tried it.

https://github.com/xesscorp/XSTOOLs

(We assume you have the ISE working -- getting that to work can vary depending on your machine, we did this on Arch Linux). You'll have to figure out exactly what you have to do to get this working on your own machine. You need to generate a bitstream file.

To generate a bitstream file:
In the ISE, click on Generate Programming File after you've written code for your project.

To load onto the FPGA, we used the xsload Python program. There's some help documentation but this is what we used:

```
python2.7 xsload.py --fpga xxx.bit
```
On Arch we had to use the usb2serial (and possibly xsusbprg) utility, but you may not have to. If you get errors loading, then consider doing that. We found that a good way to check everything was working was to start up the graphical tool to see whether or not the FPGA was actually being detected properly or not.

To simulate, click on the "Simulation" tab, and open the top level file you want to simulate. Then, click on the top level design you want to simulate. Then double click on Simulate Behavioral Model.
Link for reference:
http://www.xilinx.com/support/documentation/sw_manuals/xilinx11/ug682.pdf
