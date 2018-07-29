    int search1(const vector<int> &arr,int l,int h,int key){
       if (l > h) return -1;
 
    int mid = (l+h)/2;
    if (arr[mid] == key) return mid;
 
    /* If arr[l...mid] is sorted */
    if (arr[l] <= arr[mid])
    {
        /* As this subarray is sorted, we can quickly
        check if key lies in half or other half */
        if (key >= arr[l] && key <= arr[mid])
        return search1(arr, l, mid-1, key);
 
        return search1(arr, mid+1, h, key);
    }
 
    /* If arr[l..mid] is not sorted, then arr[mid... r]
    must be sorted*/
    if (key >= arr[mid] && key <= arr[h])
        return search1(arr, mid+1, h, key);
 
    return search1(arr, l, mid-1, key);
}
int Solution::search(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    return search1(A,0,A.size()-1,B);
    
}
