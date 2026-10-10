/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *previousNode = NULL;

    while (head != NULL) {
        struct ListNode *nextNode = head->next;

        head->next = previousNode;

        previousNode = head;
        head = nextNode;
    }

    return previousNode;
}
