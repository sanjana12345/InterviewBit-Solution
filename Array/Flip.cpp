vector<int> Solution::flip(string A) {
    vector<int> s(A.size());
    vector<int> ans;
    
    for(int i = 0; i<A.size(); i++){
        if(A[i]=='0')
            s[i] = 1;
        
        else
            s[i] = -1;
    }
    
    int c=0, left=0, right=0, maxSum=INT_MIN;
    int leftAns=0, rightAns=0;
    
    for(int i=0; i<A.size(); i++){
        c+=s[i];
        
        if(c<0){
            left=i+1;
            c=0;
        }
        
        else if(c>maxSum){
            leftAns = left;
            rightAns = i;
            maxSum=c;
        }
    }
    
    if(maxSum<=0){
        return ans;
    }
    
    else{
        ans.push_back(leftAns+1);
        ans.push_back(rightAns+1);
    }
    
    return ans;
}
