int Solution::removeDuplicates(vector<int> &A) {
    int n=A.size();
    if(n==0 || n==1)
    return n;
    int i,j=0;
    for(i=0; i<n; i++){
        /*if(A[i]!=A[i+1])
        A[j++]=A[i];
        A[j++]=A[n-1];*/
        if(i<n-1 && A[i]==A[i+1]) continue;
        else{
            A[j]=A[i];
            j++;
        }
    }
    return j;
}
