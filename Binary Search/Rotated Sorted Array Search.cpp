int search1(int arr[], int l, int h, int key)
{
    if (l > h) return -1;
 
    int mid = (l+h)/2;
    if (arr[mid] == key) return mid;
     if (arr[l] <= arr[mid])// chk if left side is sorted
    {
        if (key >= arr[l] && key <= arr[mid])
           return search1(arr, l, mid-1, key);
 
        return search1(arr, mid+1, h, key);
    }
 
    if (key >= arr[mid] && key <= arr[h])
        return search1(arr, mid+1, h, key);
 
    return search1(arr, l, mid-1, key);
}

int Solution::search(const vector<int> &A, int B) {
   
    
        int i = search1(A, 0,A.size() , B);
    if (i != -1) cout << "Index: " << i << endl;
    else cout << "-1";

}
