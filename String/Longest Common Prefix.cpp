string find1(string s1,string s2){
    int n1=s1.length();
    int n2=s2.length();
    int i,j;
    string ress="";
    for(i=0,j=0 ; i<n1,j<n2; i++,j++){
        if(s1[i]!=s2[j]){
          break;}
    ress.push_back(s1[i] );      
    }
    return ress;
}
string Solution::longestCommonPrefix(vector<string> &s) {
       int n=s.size();
       int i;
       string res=s[0];
    for(i=1; i<n; i++){
        res=find1(res,s[i]);
    }
    return res;
}
