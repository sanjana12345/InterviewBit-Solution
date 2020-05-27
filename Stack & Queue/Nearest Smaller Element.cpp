vector<int> Solution::prevSmaller(vector<int> &arr) {
    int n=arr.size();
    int i;
    vector<int>v(n,-1);
    stack<int> S;
 
    for (int i=0; i<n; i++)
    {        while (!S.empty() && S.top() >= arr[i])
            S.pop();
         if (!S.empty())
            v[i]=S.top();
          
    S.push(arr[i]);
    }
    return v;
    
}
