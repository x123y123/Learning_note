# Leetcode 392. Is Subsequence (C)
## Question 
Given two strings `s` and `t`, return `true` if `s` is a subsequence of `t`, or `false` otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., `"ace"` is a subsequence of `"abcde"` while `"aec"` is not).


## Example
* Example 1:
```html
Input: s = "abc", t = "ahbgdc"
Output: true
```

* Example 2:
```html
Input: s = "axc", t = "ahbgdc"
Output: false
```

### Contraints
* 0 <= s.length <= 100
* 0 <= t.length <= $10^4$
* `s` and `t` consist only of lowercase English letters.
## Solve
1. use `now` to save `s` head and use for loop to do traversal `t`.
2. if s[now] = t[i], then now+1.
3. if we can fully use `s` elements, then return `true`, else return `false`.

```c
bool isSubsequence(char * s, char * t){
    int now = 0;
    for (int i = 0; t[i]!='\0'; i++) {
        if (s[now] == t[i])
            now++;
    }
    if (now == strlen(s)) return true;
    return false;
}
```
