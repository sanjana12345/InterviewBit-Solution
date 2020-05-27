/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    if(A == NULL){
        return A;
    }
    ListNode* p=A;
    ListNode* temp=NULL;
    while(p->next!=NULL){
        if(p->val==(p->next)->val){
            temp=(p->next);
            p->next=p->next->next;
            free(temp);
        }
        else{
            p=p->next;
        }
    }
    return A;
    
 
}
