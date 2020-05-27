vector<int> Solution::maxone(vector<int> &A, int B) {

        int s = A.size();
    int l=0,r=0;
    
    int curr_count  =0 ;
    
    if(A[l] == 0)
    curr_count  = 1;
    
    int L=0,R=0,max_len = 0;
    
    for(int i=1;i<s;i++)
    {
        if(curr_count<=B)
        {
            if(r-l+1 > max_len)
            {
                L = l;
                R = r;
                max_len = r-l+1;
            }
        }
        else
        {
            if(A[l] == 0)
            curr_count--;
            l++;
        }
        if(A[i] == 0)
        curr_count++;
        r++;
    }
    if(curr_count<=B)
        {
            if(r-l+1 > max_len)
            {
                L = l;
                R = r;
                max_len = r-l+1;
            }
        }
        else
        {
            if(A[l] == 0)
            curr_count--;
            l++;
        }
    vector<int> toreturn;
    for(int i=L;i<=R;i++)
    toreturn.push_back(i);
    
    return toreturn;
}




