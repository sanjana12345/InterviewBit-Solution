vector<int> Solution::plusOne(vector<int> &A) {
    int i;
   int n= A.size(); int c=1;
    for(i=n-1; i>=0; i--)
    {int temp=A[i]+c;
     A[i]=temp%10;
     c=temp/10;
    }
    if(c)
    {
        A.insert(A.begin(),c);
    }
    while(true){
        if(!A[0])
        {
            A.erase(A.begin());
        }
        else
        {
            break;
        }
    }
    return A;
 
}
