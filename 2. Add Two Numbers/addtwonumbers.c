#include <stdlib.h>

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* result = NULL;
    struct ListNode* current = NULL;
    int carry = 0;

    while (l1 != NULL || l2 != NULL || carry != 0) {
        int digit1 = 0;
        int digit2 = 0;

        if (l1 != NULL) {
            digit1 = l1->val;
            l1 = l1->next;
        }

        if (l2 != NULL) {
            digit2 = l2->val;
            l2 = l2->next;
        }

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;

        if (result == NULL) {
            result = malloc(sizeof(struct ListNode));
            result->val = sum % 10;
            result->next = NULL;
            current = result;
        } else {
            current->next = malloc(sizeof(struct ListNode));
            current = current->next;
            current->val = sum % 10;
            current->next = NULL;
        }
    }

    return result;
}
