int Solution::maxSubArray(const vector<int> &A) {
   int n=A.size();
   int c=A[0];
   int m=A[0];
   int i;
   for(i=1; i<n; i++)
   {
       c=max(A[i], c+A[i]);
       m=max(m, c);
   }
   return m;
}
