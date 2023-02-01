# Leetcode 1480. Running Sum of 1d Array (C)
## Question 
Given an array `nums`. We define a running sum of an array as `runningSum[i] = sum(nums[0]…nums[i])`.

Return the running sum of `nums`.
## Example
* Example 1:
```html
Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
```

* Example 2:
```html
Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].
```

* Example 3:
```html
Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]
```
### Contraints
* 1 <= nums.length <= 1000
* $-10^6$ <= nums[i] <= $10^6$


## Solve
1. use malloc to allocate memory size of `numsSize * int(4 bytes)`, then return the memory address to `ans`.
2. set `returnSize`.
3. we let ans[0] = nums[0] because both of them first index will be the same.
4. start `recursion`, then return.

```c
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* runningSum(int* nums, int numsSize, int* returnSize){
    int *ans = (int*) malloc(numsSize * sizeof(int));
    *returnSize = numsSize;
    ans[0] = nums[0];
    for (int i = 1; i<numsSize; i++) {
        ans[i] = nums[i] + ans[i - 1];
    }
    return ans;
}
```
