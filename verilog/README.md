# Learning Note about verilog
## Device
* Macbook Air M1

## Install iverilog and gtkwave
* iverilog:
```shell
$ brew install icarus-verilog
```
* gtkwave
When we open gtkwave in terminal may cause some bugs, so we download it in it official website.
## Compile
```shell
$ iverilog -o [output file name] [input file sourse]
#run simulation
$ vvp [output file name]
```
