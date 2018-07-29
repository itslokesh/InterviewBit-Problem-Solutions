int first(const vector<int> &arr, int low, int high, int x, int n)
{
    if(high >= low)
    {
        int mid = low + (high - low)/2;
        if( ( mid == 0 || x > arr[mid-1]) && arr[mid] == x)
            return mid;
        else if(x > arr[mid])
            return first(arr, (mid + 1), high, x, n);
        else
            return first(arr, low, (mid -1), x, n);
    }
    return -1;
}
 
 
/* if x is present in arr[] then returns the index of
   LAST occurrence of x in arr[0..n-1], otherwise
   returns -1 */
int last(const vector<int> &arr, int low, int high, int x, int n)
{
    if (high >= low)
    {
        int mid = low + (high - low)/2;
        if (( mid == n-1 || x < arr[mid+1]) && arr[mid] == x)
            return mid;
        else if (x < arr[mid])
            return last(arr, low, (mid -1), x, n);
        else
            return last(arr, (mid + 1), high, x, n);
    }
    return -1;
}vector<int> Solution::searchRange(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> out;
    int n=A.size();
    out.push_back(first(A,0,n-1,B,n));
    out.push_back(last(A,0,n-1,B,n));
    return out;
}
