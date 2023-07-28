# 283. Move Zeroes

## Question
Given an integer array `nums`, move all `0`'s to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

## Example
* Example 1
```html
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
```
* Example 2
```html
Input: nums = [0]
Output: [0]
```

## Constraints
* $1 <= nums.length <= 10^4$
* $-2^31 <= nums[i] <= 2^31 - 1$

## Solve
Find the positions of non-zero elements in the vector container, and place these values sequentially from the beginning of the vector. Use the variable "index++" to keep track of the positions where the non-zero values are placed. After placing all non-zero values, fill the rest of the vector with zeros in sequence, starting from the current value of "index" until the end of the vector.

```c++
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i]) {
                nums[index] = nums[i];
                index++;
            }
        }

        for (int i = index; i < nums.size(); i++)
            nums[i] = 0;
    }
};
```
