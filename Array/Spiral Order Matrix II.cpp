vector<vector<int> > Solution::generateMatrix(int A) {
   vector<vector<int> > res(A);
    for(int i=0; i<A; i++) 
    res[i].resize(A);
    int top = 0, bottom = A-1, left = 0, right = A-1, n = 1;
    while(n <= A*A){
        for(int i=left; i<=right; i++) res[top][i] = n++;
        top++;
        for(int i=top; i<=bottom; i++) res[i][right] = n++;
        right--;
        for(int i=right; i>=left; i--) res[bottom][i] = n++;
        bottom--;
        for(int i=bottom; i>=top; i--) res[i][left] = n++;
        left++;
    }
    return res;
}


