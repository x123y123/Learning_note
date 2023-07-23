// Disadvantage: need to fix stack size at first.


#include <stdio.h>
#include <stdbool.h>

#define STACK_LEN   5
#define EMPTY       (-1)
#define INT_MIN     (-2147483648)
#define STACK_EMPTY INT_MIN

int stack[STACK_LEN];
int top = EMPTY;

bool push(int value)
{
    if (top >= STACK_LEN - 1) return false;
        
    top++;
    stack[top] = value;
    return true;
}

int pop()
{
    if (top == EMPTY) return STACK_EMPTY;

    int result = stack[top];
    top--;
    return result;
}


int main()
{
    push(10);
    push(77);
    push(13);

    push(13);
    push(10);

    int data;
    while ((data = pop()) != STACK_EMPTY) {
        printf("data = %d\n", data);
    }
    return 0;
}
