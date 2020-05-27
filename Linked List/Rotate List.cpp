/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
        int n=1;
    ListNode *last=A;
    ListNode *current=A;
    while(last->next){
        n++;
        last=last ->next;
    }
    if(B>=n)
        B%=n;
    if(B==0)
        return A;
    n=n-B-1;
    while(n--)
        current=current->next;
     last->next=A;
    A=current->next;
    current->next=NULL;
    return A;
}


