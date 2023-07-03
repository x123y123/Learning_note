# Gem5 Learning Note

## Install and make
```shell
# ubuntu 18.04 
$ sudo apt install build-essential git m4 scons zlib1g zlib1g-dev \
    libprotobuf-dev protobuf-compiler libprotoc-dev libgoogle-perftools-dev \
    python3-dev python libboost-all-dev pkg-config


$ git clone https://gem5.googlesource.com/public/gem5
$ scons build/ARM/gem5.opt -j 6

# testing 
$ build/ARM/gem5.opt configs/example/se.py --cmd=tests/test-progs/hello/bin/arm/linux/hello
```
If it work, it will show:
```html
gem5 Simulator System.  http://gem5.org
gem5 is copyrighted software; use the --copyright option for details.

gem5 compiled Jan 14 2015 16:11:34
gem5 started Feb  2 2015 15:22:24
gem5 executing on mustardseed.cs.wisc.edu
command line: build/ARM/gem5.opt configs/example/se.py --cmd=tests/test-progs/hello/bin/arm/linux/hello
Global frequency set at 1000000000000 ticks per second
warn: DRAM device capacity (8192 Mbytes) does not match the address range assigned (512 Mbytes)
0: system.remote_gdb.listener: listening for remote gdb #0 on port 7000
**** REAL SIMULATION ****
info: Entering event queue @ 0.  Starting simulation...
Hello world!
Exiting @ tick 5942000 because target called exit()
```



## Reference
* [Gem5](https://www.gem5.org/documentation/general_docs/building)
* [Gem5 ARM](https://www.gem5.org/documentation/general_docs/fullsystem/building_arm_kernel)
