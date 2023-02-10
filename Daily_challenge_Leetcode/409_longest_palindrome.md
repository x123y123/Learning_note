# 409. Longest Palindrome (C)
## Question
Given a string `s` which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.

Letters are case sensitive, for example, `"Aa"` is not considered a palindrome here.
## Example
* example_1
```html
Input: s = "abccccdd"
Output: 7
Explanation: One longest palindrome that can be built is "dccaccd", whose length is 7.
```
* example_2
```html
Input: s = "a"
Output: 1
Explanation: The longest palindrome that can be built is "a", whose length is 1.
```
## Constraints
* 1 <= s.length <= 2000
* `s` consists of lowercase and/or uppercase English letters only.

## Solve
* Palindrome has two types:
    1. Completely symmetrical. (e.g. `noon`), return `Count the sum of occurrences of all even-numbered characters`.
    2. Centered on the middle character, left and right are symmetrical. (e.g. `level`, `bob`), return `Count the sum of occurrences of all even-numbered characters + 1`

```c
int longestPalindrome(char * s){
    int hash[255] = {0};    // use ASCII feature to record appearence times
    int cnt = 0;
    for (int i = 0; i < strlen(s); i++) {
        hash[s[i]]++;       // record to specific char ASCII position
    }
    for (int i = 0; i < 255; i++) { 
        if (hash[i] / 2) {  // collect even-numbered times
            cnt += (hash[i]/2);
        }
    }
    cnt *= 2;
    
    return (strlen(s) - cnt) ? cnt + 1 : cnt; 
}
```
