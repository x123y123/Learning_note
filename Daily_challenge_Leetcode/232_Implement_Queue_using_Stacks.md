# Leetcode 232. Implement Queue using Stacks (C)
## Question 
Implement a first in first out (FIFO) queue using only two stacks. The implemented queue should support all the functions of a normal queue (`push`, `peek`, `pop`, and `empty`).

Implement the `MyQueue` class:

* `void push(int x)` Pushes element x to the back of the queue.
* `int pop()` Removes the element from the front of the queue and returns it.
* `int peek()` Returns the element at the front of the queue.
* `boolean empty()` Returns `true` if the queue is empty, `false` otherwise.

Notes:

* You must use only standard operations of a stack, which means only `push to top`, `peek/pop from top`, `size`, and `is empty` operations are valid.
* Depending on your language, the stack may not be supported natively. You may simulate a stack using a list or deque (double-ended queue) as long as you use only a stack's standard operations.
## Example

```html
Input
["MyQueue", "push", "push", "peek", "pop", "empty"]
[[], [1], [2], [], [], []]
Output
[null, null, null, 1, 1, false]

Explanation
MyQueue myQueue = new MyQueue();
myQueue.push(1); // queue is: [1]
myQueue.push(2); // queue is: [1, 2] (leftmost is front of the queue)
myQueue.peek(); // return 1
myQueue.pop(); // return 1, queue is [2]
myQueue.empty(); // return false

```

### Contraints
* `1 <= x <= 9`
* At most `100` calls will be made to `push`, `pop`, `peek`, and `empty`.
* All the calls to `pop` and `peek` are valid.

## Solve
* F(n) = F(n-1) + F(n-2)

```c
typedef struct MyQueue {
    int value;
    struct MyQueue *next;
} MyQueue;


MyQueue* myQueueCreate() {
    MyQueue *obj = malloc(sizeof(MyQueue));
    obj->next = NULL;
    return obj;
}

void myQueuePush(MyQueue* obj, int x) {
    MyQueue *node = malloc(sizeof(MyQueue));
    node->value = x;
    if (obj == NULL)
        node->next = NULL;
    else {
        node->next = obj;
    }
    obj = node;
}

int myQueuePop(MyQueue* obj) {
    int val = obj->value;
    if (obj != NULL) {
        MyQueue *tmp = obj;
        obj = obj->next;
        free(tmp);
    }
    return val;
}

int myQueuePeek(MyQueue* obj) {
    return obj->value;
}

bool myQueueEmpty(MyQueue* obj) {
    if (!obj->next)
        return false;
    else
        return true;
}

void myQueueFree(MyQueue* obj) {
    if (!obj)
        return;

    while (obj != NULL) {
        MyQueue *tmp = obj;
        obj = obj->next;
        free(tmp);
    }

}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);

 * int param_2 = myQueuePop(obj);

 * int param_3 = myQueuePeek(obj);

 * bool param_4 = myQueueEmpty(obj);

 * myQueueFree(obj);
*/

```
