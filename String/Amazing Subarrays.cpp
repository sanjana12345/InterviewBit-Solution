int Solution::solve(string sub) {
    long long int len  = sub.length();
    long long int sum =0;
    for(int i=0;i<len;i++){
        if(sub[i]=='a' || sub[i]== 'e' ||sub[i]== 'i'||sub[i]== 'o'||sub[i]== 'u'
        ||sub[i]== 'A'||sub[i]== 'E'||sub[i]== 'I'||sub[i]== 'O'||sub[i]== 'U')
                    sum+=len-i;
    
    }
    return sum%10003;
}
