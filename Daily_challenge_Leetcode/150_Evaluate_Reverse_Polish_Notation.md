# Leetcode 150. Evaluate Reverse Polish Notation (C)
## Question 
Evaluate the value of an arithmetic expression in Reverse Polish Notation.

Valid operators are `+`, `-`, `*`, and `/`. Each operand may be an integer or another expression.

Note that division between two integers should truncate toward zero.

It is guaranteed that the given RPN expression is always valid. That means the expression would always evaluate to a result, and there will not be any division by zero operation.
## Example

* Example 1
```html
Input: tokens = ["2","1","+","3","*"]
Output: 9
Explanation: ((2 + 1) * 3) = 9
```
* Example 2
```html
Input: tokens = ["4","13","5","/","+"]
Output: 6
Explanation: (4 + (13 / 5)) = 6
```
* Example 3

```html
Input: tokens = ["10","6","9","3","+","-11","*","/","*","17","+","5","+"]
Output: 22
Explanation: ((10 * (6 / ((9 + 3) * -11))) + 17) + 5
= ((10 * (6 / (12 * -11))) + 17) + 5
= ((10 * (6 / -132)) + 17) + 5
= ((10 * 0) + 17) + 5
= (0 + 17) + 5
= 17 + 5
= 22
```
### Contraints
* `1 <= tokens.length <= 10^4`
* `tokens[i]` is either an operator: `"+"`, `"-"`, `"*"`, or `"/"`, or an integer in the range `[-200, 200]`.

## Solve
* using `pop`, `push` in stack.
* `isdigit()` in `<ctype.h>` can be used to check if the passed caaracter is a digit or not. `it returns a non-zero value if it's a digit else it returns 0`.
* `long int atol(const char *str)` in `<ctype.h>`can transfer `string` to `long int`.

```c
int evalRPN(char ** tokens, int tokensSize){
    int top = -1;
    long int stack[10000] = {0};
    long int val = 0, val1 = 0, val2 = 0;
    char opt = 0;

    for (int i = 0; i < tokensSize; i++) {
        if (isdigit(tokens[i][strlen(tokens[i])-1])) {
            val = atoll(tokens[i]);
            stack[++top] = val;
        } else {
            opt = tokens[i][0];
            val2 = stack[top--];
            val1 = stack[top--];
            
            switch (opt) {
                case '+':
                    val = val1 + val2;
                    break;
                case '-':
                    val = val1 - val2;
                    break;
                case '*':
                    val = val1 * val2;
                    break;    
                case '/':
                    val = val1 / val2;
                    break;
            }

            //push val to the stack
            stack[++top] = val;
        }
    }
    return stack[top];
}
```
