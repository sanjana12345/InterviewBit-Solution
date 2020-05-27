int Solution::atoi(const string A) {
    long long x;
    int mul = 1;
    
    int i = 0;
    while(A[i]==' ')   
    i++;
    if(A[i]=='-')   
    {
        mul = -1;
        i++;
    }
    if(A[i]=='+')   i++;
    
    x = 0;
    while(i<A.size())
    {
        if(isdigit(A[i]))
            x = x*10 + (A[i]-'0');
        else
            break;
            
        if((mul==1 && x>1LL*INT_MAX) || (mul==-1 && x>abs(1LL*INT_MIN)))
            break;
        i++;
    }
    
    x*=mul;
    x = max(1LL*INT_MIN,x);
    x = min(x,1LL*INT_MAX);
    return x;
}
