#include <stdio.h>
#include <stdlib.h> // malloc()

typedef struct Node
{
    int x;
    struct Node *next;
} Node_t;

void insert_tail(Node_t** root, int value)
{   //create a new node, node->next = NULL
    Node_t* new_node = malloc(sizeof(Node_t));
    
    // because malloc may be failed, and it will return and cause warning in compiler
    if (new_node == NULL) {
        exit(1);
    }
    new_node->next = NULL;
    new_node->x = value;

    if (*root == NULL) {
        *root = new_node;
        return;
    }

    Node_t* cur = *root;    // because it's pointer to pointer, we need to dereference root and get node address
    // traversal the linked list to the second last node, and change node->next = new_node
    while(cur->next != NULL) {
        cur = cur->next;
    }
    cur->next = new_node;
    

    
}

int main(int argc, char** argv)
{
    Node_t* root = NULL;
/*
    Node_t* root = malloc(sizeof(Node_t));

    if (root == NULL)
        exit(2);

    root->x = 15;
    root->next = NULL;
*/
    insert_tail(&root, 2);
    insert_tail(&root, -23);


    Node_t* cur = root;
//implement by while loop
    while(cur != NULL) {
        printf("%d\n", cur->x);
        cur = cur->next;
    }

//implement by for loop    
/*  
    for(Node_t* cur = &root; cur != NULL; cur = cur->next){
        printf("%d\n", cur->x);
    };
*/

    return 0;
}
