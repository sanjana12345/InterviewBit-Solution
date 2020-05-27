/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* l1, ListNode* l2) {
    if(!l1)
     return l2;
    else if(!l2)
     return l1;
    else while(l1 || l2) 
    {
        if(l1->val>l2->val){
            l2->next=Solution::mergeTwoLists(l2->next,l1);
            return l2;
        }
     
       else if(l1->val<l2->val){
            l1->next=Solution::mergeTwoLists(l1->next,l2);
            return l1;
        }
    }
    
            }

