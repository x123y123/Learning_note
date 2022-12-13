# Leetcode 70. Daily Chanllenge (C)
## Question 
You are climbing a stair case. It takes n steps to reach to the top.
Each time you can either climb `1` or `2 steps`.
In how many distinct ways can you climb to the top?

## Example

```html
Input: 1
Output: 1
```
> Explanation: There are one way to climb to the top.
> * 1 step

```html
Input: 2
Output: 2
```
> Explanation: There are three ways to climb to the top.
> * 1 step + 1 step
> * 2 steps

```html
Input: 3
Output: 3
```
> Explanation: There are three ways to climb to the top.
> * 1 step + 1 step + 1 step
> * 1 step + 2 steps
> * 2 steps + 1 step

```html
Input: 4
Output: 5
```
> Explanation: There are five ways to climb to the top.
> * 1 step + 1 step + 1 step + 1 step
> * 1 step + 1 step + 2 steps
> * 1 step + 2 steps + 1 step
> * 2 steps + 1 step + 1 step
> * 2 steps + 2 steps

### Contraints
* 1 <= n <= 45

## Solve
* F(n) = F(n-1) + F(n-2)

```c=
int climbStairs(int n) {
    int a[46];
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    a[0] = 0;
    a[1] = 1;
    a[2] = 2;
    for (int i = 3; i <= n; i++)
        a[i] = a[i-1] + a[i-2];
    return a[n];
}
```
