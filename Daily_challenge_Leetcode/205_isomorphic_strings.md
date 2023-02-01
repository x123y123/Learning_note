# Leetcode 205. Isomorphic Strings (C)
## Question 
Given two strings `s` and `t`, determine if they are isomorphic.

Two strings `s` and `t` are isomorphic if the characters in `s` can be replaced to get `t`.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.


## Example
* Example 1:
```html
Input: s = "egg", t = "add"
Output: true
```

* Example 2:
```html
Input: s = "foo", t = "bar"
Output: false
```

* Example 3:
```html
Input: s = "paper", t = "title"
Output: true
```
### Contraints
* 1 <= s.length <= 5 * $10^4$
* `t.length == s.length`
* `s` and `t` consist of any valid ascii character.

## Solve
* one character only can map to one character, two different characters can't map to the same character.
1. we use `ASCII` feature, so we set `hash[255]`
2. let `s` map to hash array's index, then use `t` to map hash array again.
3. if hash[index] is `0`, it means no character map before.
4. if hash[index] isn't `0`, it means the character t[?] have mapped before isn't equal current t[?], so still need to return false.  


```c
bool isIsomorphic(char * s, char * t){
    int hash[255] = {0};  // use ASCII to map
    int index, i, j;
    for (i = 0; s[i]!='\0'; i++) {
        index = s[i];
        if (hash[index] == 0) {
            for (j = 0; j<255; j++) {
                if (hash[j] == t[i])
                    return false;
            }
            hash[index] = t[i];
        }
        if (hash[index] != 0) {
            if (hash[index] != t[i])
                return false;
        }
    }
    if (t[i] != '\0')
        return false;
    return true;
}
```
