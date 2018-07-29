int Solution::searchInsert(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int low=0,high=A.size()-1;
    if(B<A[low])
        return 0;
    if(B>A[high])
        return A.size();
    while(low<=high){
        int mid=(low+high)/2;
        if(A[low]==B)
            return low;
        if(A[high]==B)
            return high;
        if(A[mid]==B)
            return mid;
        else if(A[mid]<B)
            low=mid+1;
        else
            high=mid-1;
        if(high-1==low){
            if(A[low]>=B)
                return low;
            else if(A[high]>B)
                return high;
        }
        else if(high==low){
            if(A[low]>B)
                return low;
            if(A[low]<B)
                return low+1;
        }
    }
    return -1;
}
