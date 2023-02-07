# Leetcode 876. Middle of the Linked List (C)
## Question 
Given the `head` of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.
## Example
* Example 1:
```html
Input: head = [1,2,3,4,5]
Output: [3,4,5]
Explanation: The middle node of the list is node 3.
```

* Example 2:
```html
Input: head = [1,2,3,4,5,6]
Output: [4,5,6]
Explanation: Since the list has two middle nodes with values 3 and 4, we return the second one.
```

### Contraints
* The number of nodes in the list is in the range `[1, 100]`.
* `1 <= Node.val <= 100`

## Solve
* The approach is a slight variation of the Tortoise Hare Approach.
1. Declare `fast` and `slow` pointer variable.
2. fast moves two steps per times, slow moves one step per times.
3. if `fast.next.next = NULL`, then `slow = middle point`


```c
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode node;

struct ListNode* middleNode(struct ListNode* head){
    node *fast = NULL;
    node *slow = NULL;
    for (fast = head, slow = head; fast && fast->next; fast = fast->next->next, slow = slow->next);
    return slow;

}
```
