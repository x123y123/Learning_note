# Parallelism and Multithread Design Note

## Execution Ordering Issue (Jserv vedio_1 note)
why we need to focus on execution ordering
>once take care about distributed systems, execution ordering and timing issue will be more complexable.

### Sequenced-before

### happens-before

### synchronized-with

### Memory Consistency Models


---

## POSIX Threads (Jserv vedio_2 note)

### Thread & Process & coroutines

* Light-Weigh Process(LWP) also called "Thread", **process appeared before thread**.
* thread has it own stack and register, but actually its all use same address space 
* **Thread-local storage(TLS)** issue: it can advoid memory shared problem between other threads
    * HTC Dream(Qualcomm MSM7201A Arm11): TLS software simulation support.
    * Motorola Droid (Arm Cortex A8): TLS hardware support.
* [PThread (POSIX threads)](https://hpc-tutorials.llnl.gov/posix/): 
    * this interface specified by the IEEE POSIX 1003.1c standard(1995).
    * in /usr/include/pthread.h : 
        * pthread_attr_setaffinity **_np** : np is mean "**none protable**".
        * pthread_join (pthread_t thread, void **retval) : we can define retval data type.

* NPTL(New Posix Threads for Linux) - Qthread : one user_space thread will connect one kernel_space thread, using situation is in less system call and often execute in user_space.