vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    int i=0,j=0;
    vector<int> v;
    int n=A.size();
    int m=B.size();
    while(i<n && j<m)
    {
        if(A[i]<B[j])
        {
            i++;
        }
      else if(A[i]>B[j]){
            j++;
        }
        else
        {
            v.push_back(A[i]);
            i++;
            j++;
        }
    }
return v;
}
