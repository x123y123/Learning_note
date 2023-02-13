# Terminology in Linux
* In this markdown content is to record some terminologies in Linux from Jserv series lecture [Linux kernel](https://hackmd.io/@sysprog/linux-kernel-internal)

## PREEMPT_RT lecture
### EDF (Earliest Deadline First)

### CBS (Constant Bandwidth Server)

### Jiffies

### tickless kernel

### preemption points

### BMP (bitmap)

### Demanding page

### WCET (worst-case execution time)
* seL4: bug-free

### flexSC (Flexible System Call)

### priority inversion


#### ttylock
it will let a sentance not be cutted
* mutex (ownership) 

#### priority inversion solve_1: priority inheritance

#### priority inversion solve_2: priority celling protocal

### interrupt inversion

### Threaded interrupt

### RT-Mutexes

### BKL-free

### Preemption in kernel
#### CONFIG_PREEMPT_NONE
#### CONFIG_PREEMPT_VOLUNTARY
#### CONFIG_PREEMPT
no more need to wait for kernel code (typically a system call) to return before running the scheduler.

### futex (fast user-space mutexes)

### HRS (High-resolution timers)
* nanosleep() to make timer more high-resolution
