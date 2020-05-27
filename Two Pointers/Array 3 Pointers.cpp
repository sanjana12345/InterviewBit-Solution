int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int diff=INT_MAX;
    int lena=A.size();
    int lenb=B.size();
    int lenc=C.size();
    int i=0,j=0,k=0,maximum,minimum;
    while(i<lena && j<lenb && k<lenc){
        maximum=max(A[i], max(B[j], C[k]));
        minimum=min(A[i], min(B[j], C[k]));
        if(diff>(maximum-minimum)){
            diff=maximum-minimum;
        }
        if(diff==0)break;
        if(A[i]==minimum)i++;
        else if(B[j]==minimum)j++;
        else k++;
    }
    return diff;
}


