/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A, int k) {
     ListNode* current = A;
    ListNode* next = NULL;
    ListNode* prev = NULL;
    int count = 0;   
     
    while (current != NULL && count < k)
    {
        next  = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
     
    if (next !=  NULL)
       A->next = reverseList(next, k); 
 
    return prev;
}
