ListNode* Solution::reverseBetween(ListNode* A, int m, int n) {

    ListNode* curr = A;
    ListNode* prev;
    ListNode* temp;
    ListNode* start = NULL;
    ListNode* startTemp;
    ListNode* end;
    ListNode* endTemp;
    
    if(A == NULL){
        return NULL;
    }
    
    int length = 0;
    
    while(length < m){
        length++;
        if(length == m-1){
            start = curr;
        }
        else if(length == m){
            startTemp = curr;
        }
        prev = curr;
        curr = curr->next;
    }
    
    while(length < n){
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
        length++;
        if(length == n){
            endTemp = prev;
            end = curr;
            startTemp->next = end;
            if(start != NULL){
                start->next = endTemp;
            }
            else if(start == NULL){
                A = endTemp;
            }
        }
    }
    
    return A;
}
