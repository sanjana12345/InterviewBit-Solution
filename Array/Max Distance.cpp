int Solution::maximumGap(const vector<int> &A) {
    int i,j,n;
    n=A.size();
    i=0, j=n-1;
    if(n==0 || n==1)
     return 1;
         int max=0;
int l=0;int r=n-1;
while(l<=r)
{
if(A[l]<=A[r])
{
if((r-l)>max){
max = r-l;
}
l++;
r=n-1;
continue;
}
r--;
}
if(max!=0)
  return 1;
else  
return -1;
}
