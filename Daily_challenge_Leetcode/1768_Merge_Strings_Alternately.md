# Leetcode 1768. Merge Strings Alternately
## Question 
You are given two strings `word1` and `word2`. Merge the strings by adding letters in alternating order, starting with `word1`. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.


## Example
* Example 1:
```html
Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
Explanation: The merged string will be merged as so:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r
```
* Example 2:
```html
Input: word1 = "ab", word2 = "pqrs"
Output: "apbqrs"
Explanation: Notice that as word2 is longer, "rs" is appended to the end.
word1:  a   b 
word2:    p   q   r   s
merged: a p b q   r   s
```
* Example3:
```html
Input: word1 = "abcd", word2 = "pq"
Output: "apbqcd"
Explanation: Notice that as word1 is longer, "cd" is appended to the end.
word1:  a   b   c   d
word2:    p   q 
merged: a p b q c   d
```


### Contraints
* `1 <= word1.length, word2.length <= 100`
* `word1` and `word2` consist of lowercase English letters.
## Solve

```c=
char * mergeAlternately(char * word1, char * word2){
    int pos = 0;
    char *ans = (char*)malloc(sizeof(char) * (strlen(word1) + strlen(word2) + 1));
    if (strlen(word1) == strlen(word2)) {
        for (int i = 0; i < strlen(word1); i++) {
            ans[pos++] = word1[i];
            ans[pos++] = word2[i];
        }
    }

    else if (strlen(word2) > strlen(word1)) {
        for (int i = 0; i < strlen(word1); i++) {
            ans[pos++] = word1[i];
            ans[pos++] = word2[i];
        }

        for (int i = strlen(word1); i < strlen(word2); i++) {
            ans[pos++] = word2[i];
        }
    }

    else {
        for (int i = 0; i < strlen(word2); i++) {
            ans[pos++] = word1[i];
            ans[pos++] = word2[i];
        }

        for (int i = strlen(word2); i < strlen(word1); i++) {
            ans[pos++] = word1[i];
        }
    }
    
    ans[pos] = '\0';
    return ans;
}
```
