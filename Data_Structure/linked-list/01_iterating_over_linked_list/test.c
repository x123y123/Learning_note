#include <stdio.h>
#include <stdlib.h> // malloc()

typedef struct Node{
    int x;
    struct Node *next;
} Node_t;


int main(int argc, char** argv)
{
    Node_t root;
    root.x = 15;
    root.next = malloc(sizeof(Node_t));
    root.next->x = -2;
    root.next->next = malloc(sizeof(Node_t));
    root.next->next->x = 22;
    root.next->next->next = NULL;

    Node_t* cur = &root;
//implement by while loop
    while(cur != NULL) {
        printf("%d\n", cur->x);
        cur = cur->next;
    }

//implement by for loop    
/*  
    for(Node_t* cur = &root; cur != NULL; cur = cur->next){
        //...
    };
*/
    free(root.next->next);
    free(root.next);

    return 0;
}
