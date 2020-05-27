void Solution::sortColors(vector<int> &A)
{
 int n=A.size();
 int i,j,k;
 i=0;j=0;
 for(i=0;i<n;i++) 
 if(A[i]==0)
 {
     swap(A[i],A[j]); 
      j++;
 }
 k=j;
 for(i=j;i<n;i++)
 if(A[i]==1)
 {swap(A[i],A[k]);
 k++;
 }

 //sort(A.begin(),A.end());
 

}
