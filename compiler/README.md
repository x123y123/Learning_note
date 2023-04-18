# Compiler Learning
* Device: Macbook M1 Air
* Example program: hello_world.c
## Precompile phase
```shell
$ gcc -E -o hello_world.i hello_world.c
```
And we can see the `#include` will be replace by expand:
```c
// ...
int printf(const char * restrict, ...) __attribute__((__format__ (__printf__, 1, 2)));
// ...

int main()
{
    printf("Hello World");
    return 0;
}
```
## Compilation phase
```shell
$ gcc -S hello.i -o hello.s
```
After that, we will get assembly code that pass through grammar analysis and some optimize from precompile `hello_world.i`.

## Assembly phase
```shell
$ as hello_world.s -o hello_world.o
# or using
$ gcc -c hello_world.s -o hello_world.o
```

## linking phase
```shell
$ gcc hello_world.o -o hello_world
```
