int Solution::sqrt(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    if(A<=1)
        return A;
    long high=A/2,low=2,prev=-1;
    while(low<high){
        long mid=low+(high-low)/2;
        if((long)(mid*mid)==(long)A)
            return mid;
        else if((long)(mid*mid)>(long)A){
            prev=mid;
            high=mid-1;
            if((long)(prev*prev)<(long)A && (long)(high*high) >(long)A)
                return prev;
        }
        else{
            prev=mid;
            low=mid+1;
            if((long)(prev*prev)<(long)A && ((long)(low*low)>(long)A))
                return prev;
        }
    }
    if(low<=high)
        return low;
    //else 
        return high;
}
