int Solution::lengthOfLastWord(const string a) {
 int len = a.length();
 int flag=0;
 int i;
 int c=0;
 for(i=len-1;i>=0;i--)
 {
     if(a[i]!=' ')
     {
         flag=1;
         c++;
     }
     else
     {
         if(flag==1)
         return c;
     }
}
return c;
}
