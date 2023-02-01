# Leetcode 724. Find Pivot Index (C)
## Question 
Given an array of integers `nums`, calculate the pivot index of this array.

The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

If the index is on the left edge of the array, then the left sum is `0` because there are no elements to the left. This also applies to the right edge of the array.

Return the leftmost pivot index. If no such index exists, return `-1`.
## Example
* Example 1:
```html
Input: nums = [1,7,3,6,5,6]
Output: 3
Explanation:
The pivot index is 3.
Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
Right sum = nums[4] + nums[5] = 5 + 6 = 11
```

* Example 2:
```html
Input: nums = [1,2,3]
Output: -1
Explanation:
There is no index that satisfies the conditions in the problem statement.
```

* Example 3:
```html
Input: nums = [2,1,-1]
Output: 0
Explanation:
The pivot index is 0.
Left sum = 0 (no elements to the left of index 0)
Right sum = nums[1] + nums[2] = 1 + -1 = 0
```
### Contraints
* 1<= nums.length <= $10^4$
* -1000 <= nums[i] <= 1000

## Solve
1. use `for loop` to assume the pivot index, and let it iterate from `index 0` to `index numsSize-1`.
2. after set pivot index we can start to sum the pivot_index's left side and right side, and compare sum of left side value and sum of right side value.
3. if `left side value = right side value`, we let the `flag = 1`, and `return the value that for loop iterate currently`, if still `flag = 0` return `-1`.

```c
int pivotIndex(int* nums, int numsSize){
    int i, flag = 0;
    for (i = 0; i<numsSize; i++) {
        int left = 0;        
        int right = 0;
        for (int j = 0; j<i; j++) {
            left += nums[j];
        }
        for (int k = i+1; k<numsSize; k++) {
            right += nums[k];
        }
        if (left == right) {
            flag++;
            break;
        }
    }
    if (flag == 0) return -1;
    return i; 
}
```
