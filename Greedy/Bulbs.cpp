int Solution::bulbs(vector<int> &A) {
        int n=A.size();
    int ans=0;
    if(n==0) return 0;
    if(!A[0]) ans++;
    
    for(int i=1;i<n;i++)
    {
        if(A[i]!=A[i-1])
        ans++;
        
    }
    return ans;

}
