# 1-bit inverter
In 1-bit situation, using `!` or `~` are the same results. 
## Compile and run
```shell
$ iverilog inverter.v inverter_tb.v
$ vvp a.out
```
* Result
```shell
output = 1
output = 0
All test cases passed!
```
