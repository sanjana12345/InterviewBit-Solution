int Solution::isPalindrome(string s) {
    int n=s.length();
    int i,j;
    i=0;
    j=n-1;
    while(i<j){
        while(i<j && !isalnum(s[i]) ){i++;}
        while(i>j && !isalnum(s[j]) ){j--;}
        if(tolower(s[i])!=tolower(s[j]) )
            return 0;
           i++;
           j--;
    }
    return 1;
}
