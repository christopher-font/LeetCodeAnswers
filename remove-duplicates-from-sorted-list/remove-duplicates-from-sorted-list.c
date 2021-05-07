/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (head == NULL) 
        return NULL;
    else if (head->next == NULL)
        return head;
    
    while (head->val == head->next->val) {
        head->next = head->next->next;
        if (head->next == NULL)
            break;
    }
    
    head->next = deleteDuplicates(head->next);
    return head;
}