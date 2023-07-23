// Disadvantage: need to fix stack size at first.


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define EMPTY       (-1)
#define INT_MIN     (-2147483648)
#define STACK_EMPTY INT_MIN

typedef struct node {
    int value;
    struct node* next;
} node;

node* head = NULL;

bool push(int value)
{
    node* newnode = (node*) malloc(sizeof(node));
    newnode->value = value;
    newnode->next = head;
    head = newnode;

    return true;
}

int pop()
{
    if (!head) return STACK_EMPTY;

    int result = head->value;
    node* temp = head;
    head = head->next;
    free(temp);

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
