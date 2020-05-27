vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {

    vector<vector<int>> result;
    vector<int> diagonal;
    
    int n = A.size();
    if(n == 0)
        return result;
    for(int d = 0; d <= 2*(n-1); d++) {
       for(int i = 0; i <= d; i++) {
           int j = d - i;
           //continue if i or j exceeds their bounds
           if(i >= n || j >= n)
                continue;
           cout<<A[i][j]<<"\n";
       }
       }
   return result;
}
