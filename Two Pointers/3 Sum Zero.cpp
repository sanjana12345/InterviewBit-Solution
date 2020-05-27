vector<vector<int> > Solution::threeSum(vector<int> &A) {
        sort(A.begin(),A.end());
        vector<vector<int> > res;
        int n=A.size();
        vector<int> ar;

        for(int i=0;i<n and A[i]<=0;){
            int sum=-A[i];
            for(int j=i+1,k=n-1;j<k;){
                if(A[j]+A[k] ==sum){
                    ar.push_back(A[i]);
                    ar.push_back(A[j]);
                    ar.push_back(A[k]);
                    res.push_back(ar);
                    
                    j++; 
                    ar.clear();
                    while(j<k && (A[j]==A[j-1]))j++;
                }
                else if(A[j]+A[k] <sum) j++;
                else k--;
            }
            i++;
            while(i<n and A[i]==A[i-1])i++;
        }
        return res;
}
