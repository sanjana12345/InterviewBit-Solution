int value(char s)
{
    if(s=='I')
    return 1;
        if(s=='V')
    return 5;
        if(s=='X')
    return 10;
        if(s=='L')
    return 50;
        if(s=='C')
    return 100;
        if(s=='D')
    return 500;
        if(s=='M')
    return 1000;
}
int Solution::romanToInt(string A) {
    int n=A.length();
    int i, s1,s2,res=0;
    for(i=0; i<n; i++)
    {
        s1=value(A[i]);
        if(i+1<n)
        {
            s2=value(A[i+1]);
            if(s1>=s2)
            {
                res+=s1;
            }
            else
            {
                res+=s2-s1;
                i++;
            }
            
        }
        else
        {
            res+=s1;
            i++;
        }
        
    }
    return res;
}
