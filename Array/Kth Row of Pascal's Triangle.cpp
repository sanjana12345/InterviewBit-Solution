vector<int> Solution::getRow(int A) {
        vector<int>v;
        int i;
        int a=1;
        if(A==0){
         v.push_back(a);
         return v;}
        else
         {
             v.push_back(a);
             for(i=1; i<=A; i++){
               a=(a*(A-i+1)/i);
              v.push_back(a);}
         }
        return v;
}
