int find1st(const vector<int> &a, int n, int x)
{
     int low=0, high=n-1,result=-1;
            while(low<=high)
            {  int mid=low+(high-low)/2;
                     if(a[mid]==x){
                      result=mid;
                      high=mid-1;
                         
                     }
                      else if(x<a[mid])
                      high=mid-1;
                      else
                      low=mid+1;
                     }
                     return result;
 }

int find_last(const vector<int> &a, int n, int x)
{
     int low=0, high=n-1,result=-1;
            while(low<=high)
            {  int mid=low+(high-low)/2;
                     if(a[mid]==x){
                      result=mid;
                      low=mid+1;
                         
                     }
                      else if(x<a[mid])
                      high=mid-1;
                      else
                      low=mid+1;
                     }
                     return result;
 }


vector<int> Solution::searchRange(const vector<int> &A, int B) {
    vector<int>v;
    int n=A.size();
    if(n==0)
    {
        v.push_back(-1);
        v.push_back(-1);
         return v;
    }
    int p;
    int s=find1st(A,n, B);
    if(s==-1){
    v.push_back(-1);
    v.push_back(-1);
     return v;}
     else
     {
    p=find_last(A,n,B);
    v.push_back(s);
    v.push_back(p);

}

return v;
}
