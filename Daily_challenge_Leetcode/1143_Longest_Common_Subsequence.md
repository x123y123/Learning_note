# 1143. Longest Common Subsequence

## Question
Given two strings `text1` and `text2`, return the length of their longest common subsequence. If there is no common subsequence, return 0.

A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.

For example, `"ace"` is a subsequence of `"abcde"`.

## Example
* example 1
```html
Input: text1 = "abcde", text2 = "ace" 
Output: 3  
Explanation: The longest common subsequence is "ace" and its length is 3.
```
* example 2
```html
Input: text1 = "abc", text2 = "abc"
Output: 3
Explanation: The longest common subsequence is "abc" and its length is 3.
```

* example 3
```html
Input: text1 = "abc", text2 = "def"
Output: 0
Explanation: There is no such common subsequence, so the result is 0.
```
## Constraints
* `1 <= text1.length, text2.length <= 1000`
* `text1` and `text2` consist of only lowercase English characters.
## Solve


```c
int longestCommonSubsequence(char * text1, char * text2){
    int i, j;
    int x = strlen(text1) + 1;
    int y = strlen(text2) + 1;
    int matrix[y][x];
    for (i = 0; i < y; i++) {
        matrix[i][0] = 0;
    }
    for (i = 0; i < x; i++) {
        matrix[0][i] = 0;
    }
    for (i = 1; i < y; i++){
        for (j = 1; j < x; j++){
            if (text1[j - 1] == text2[i - 1]){
                matrix[i][j] = matrix[i - 1][j - 1] + 1;
            } else if (matrix[i - 1][j] >= matrix[i][j - 1]){
                matrix[i][j] = matrix[i - 1][j];
            } else{
                matrix[i][j] = matrix[i][j - 1];
            }
        }
    }
    return matrix[y - 1][x - 1];
}
```
