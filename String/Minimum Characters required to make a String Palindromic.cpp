int Solution::solve(string A) {

        int start = 0 ,end = A.length()-1;
    int temp_end = end;
    /*Idea is to find longest palindrome length starting from index 0 . Differece of 
    this length from string length is the required value*/
    while(start<=temp_end)
    {
        if(A[start]==A[temp_end])
        {
            start++;      
            temp_end--;
        }
        else
        {
            start = 0;
            temp_end = --end;
        }
    }
    return A.length()-(end+1);
    
}



