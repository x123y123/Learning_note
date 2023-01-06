# inplace swap (using exculsive-or "^")
```clike
void inplace_swap(int *x, int *y)
{
    *y = *x ^ *y; /step 1/
    *x = *x ^ *y; /step 2/
    *y = *x ^ *y; /step 3/
}
```
* step 1: 
  * value of x = `a`
  * value of y = `a ^ b`
* step 2:
  * value of x = a ^ (a ^ b) = `b`
  * value of y = `a ^ b`
* step 3:
  * value of x = `b`
  * value of y = b ^ (a ^ b) = `a`

