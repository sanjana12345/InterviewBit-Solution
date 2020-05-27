int Solution::diffPossible(vector<int> &A, int k) {

int n=A.size();
int j=0,i=0, diff=0;
if(n==0 || n==1 )
return 0;
while(i<n && j<n)
{if(i==j){
    i++;
}
    diff=A[i]-A[j];
    if(diff==k)
     return 1;
   if(diff<k)
    i++;
   else
    j++;
}
return 0;
}
