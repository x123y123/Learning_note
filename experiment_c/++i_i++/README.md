# i++ v.s. ++i
* `inital i is 0`.
* `a[3] = {0, 1, 2};

## note
* In sometimes `i++` and `++i` will get the same result, because in `compile` will automatically `compile and optimize` according to the status of the sorce code.
* For example: `i++`, the compile will judge whether the `suffix` feature is used there. If unnecessary, the compilation result will automatically omit these parts if `command code`, so it will let `i++` result same as `++i`. 

## result 
* ++i
```shell
------------------
++i:
++i = 1
a[++i] = 1
------------------
```
* i++
```shell
------------------
i++:
i++ = 1
a[i++] = 0
------------------
```
## thinking...
* Why is `++i` performance better than `i++`?
