# 198. House Robber
## Question 
You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

Given an integer array `nums` representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

## Example
* Example 1
```html
Input: nums = [1, 2, 3, 1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
Total amount you can rob = 1 + 3 = 4.
```
* Example 2
```html
Input: nums = [2, 7, 9, 3, 1]
Output: 12
Explanation: Rob house 1 (money = 2) and then rob house 3 (money = 9) and rob house 5 (money = 1).
Total amount you can rob = 2 + 9 + 1 = 12.
```
## Constraints
* `1 <= nums.length <= 100`
* `0 <= nums[i] <= 400`

## Slove 
* `Dynamic programming`.
* if we want to rob house i, it means we can't rob house i - 1. => `rob[i] = rob[i - 2] + num[i]`.
* if we don't want to rob house i, it means `rob[i] = rob[i - 1]`.
* So `rob[i] = max(rob[i - 1], rob[i - 2] + nums[i])`.


```C
int rob(int* nums, int numsSize) {
    if (numsSize == 1)
        return nums[0];
    if (numsSize == 2)
        return (nums[0] > nums[1] ? nums[0] : nums[1]);

    int rob[numsSize], i;
    rob[0] = nums[0];
    rob[1] = (nums[0] > nums[1] ? nums[0] : nums[1]);
    for (i = 2; i < numsSize; i++)
        rob[i] = (nums[i] + rob[i - 2] > rob[i - 1] ? nums[i] + rob[i - 2] : rob[i - 1]);
    return rob[i - 1];
}
```

