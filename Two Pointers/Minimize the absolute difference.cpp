int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
int p=A.size();
    int q=B.size();
    int r=C.size();
        int diff = INT_MAX;
    int i=0,j=0,k=0;
    while (i < p && j < q && k < r)
    {   int minimum = min(A[i], min(B[j], C[k]));
        int maximum = max(A[i], max(B[j], C[k]));
        if (maximum-minimum < diff)
        {
             diff = maximum - minimum;
        }
        if (diff == 0) break;
        if (A[i] == minimum) i++;
        else if (B[j] == minimum) j++;
        else k++;
}
return diff;
}
