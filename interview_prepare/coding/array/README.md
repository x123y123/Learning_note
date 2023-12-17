# Array question in C
An array is a collection of elements of the same data type, stored in continous memory location. Each element in the array can be accessed using its index, starting from 0.

## How to find the length of an array in C?
```C
int nums[5] = {0, 1, 2, 3, 4, 5};
int len = sizeof(nums) / sizeof(nums[0]);
printf("length of array is %d", len);
```


