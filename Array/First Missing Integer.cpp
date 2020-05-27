int Solution::firstMissingPositive(vector<int> &A) {
   int n=A.size();
    int i=0,index;
    for(i=0;i<n;i++)
        if(A[i]<0 || A[i]>n)
            A[i]=0;
    i=0;
    while(i<n){
        if(A[i]>0){
            index=A[i]-1;
            if(A[index]>=0)
                A[i]=A[index];
            else A[i]=0;
            A[index]=-1;
        }else i++;
    }
    for(i=0;i<n;i++)
        if(A[i]==0)
            return (i+1);
    return (i+1);
}
