/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode l3;
    struct ListNode * cur = &l3;
    
    int carry = 0;
    
    while (l1 != NULL || l2 != NULL || carry) {
        int val1 = 0;
        int val2 = 0;
        
        if (l1) {
            val1 = l1->val;
            l1 = l1->next;
        }
        
        if (l2) {
            val2 = l2->val;
            l2 = l2->next;
        }
        
        int answer = val1 + val2 + carry;
        
        carry = answer > 9;
        
        cur = cur->next = (struct ListNode *) malloc(sizeof(struct ListNode));
        
        cur->val = answer % 10;
        
        cur->next = NULL;
    }
    
    
    return l3.next;
}