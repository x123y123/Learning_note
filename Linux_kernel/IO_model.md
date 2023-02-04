# I/O module in Linux kernel
In this lecture we will use read() to explore i/o in linux kernel.
> * In `UNIX`: Everything can be a `file`.
> * In `Linux`: Everything can be a `file discriptor`.

---

In some i/o programs, we usually can see the following i/o models:
* blocking
* non-blocking
* synchronous
* asynchronous

--- 

For a normal i/o, it'll often face two basic stuffs in system:
* kernel
* the caller which is the process/thread calls the i/o.

Then we will face two following phases in read():
1. Waiting for the data to be ready
2. Copying the data from the kernel to the process

because this two phases have some slight difference, so there generate some different i/o models.
### read()

> fread() is a stream read.

## Reference
* [Jserv](https://hackmd.io/@sysprog/linux-io-model/https%3A%2F%2Fhackmd.io%2F%40sysprog%2Fevent-driven-server)