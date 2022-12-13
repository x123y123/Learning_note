# what's CPU-bound & I/O-bound?

## CPU-bound
* CPU Loading 100%.
* CPU r/w(disk/DRAM) in short time.
* In most of time, the task is doing cpu behaviors, just like calculate or logic judgement.
* for example, calcute circumference ratio, high-resolution video decoding.
* Although in CPU-bound process, we can use multi-task to complete but it will cost lots of context switch time, so if wants to the most efficient use of the CPU, the number of CPU-bound tasks should be equal to the number of cores in the CPU.
* Because of CPU-bound task mainly consumes CPU resorces, therefore, the efficiency of code operation is very important. Scripting languages like Python totally unsuitable for CPU-bound task, it's best written in C.
## IO-bound
* CPU Loading is very low.
* In most of time, the task will let CPU waiting for I/O(disk/DRAM), so even you use C code to replace Python, it totally can't improve operating efficiency, so it will more prefer using highest development efficiency code(the least amount of code), scripting language is the first choice.
## Conclusion
* `CPU-bound` use multi-thread in `C`.
* `I/O-bound` use multi-thread in `scripting language(Python)`.

## reference
[知乎](https://zhuanlan.zhihu.com/p/62766037)
