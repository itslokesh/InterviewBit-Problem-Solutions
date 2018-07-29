string Solution::longestPalindrome(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int maxlength=1;
    int start=0;
    int length=A.size();
    for(int i=1;i<length;i++){
        int low=i-1;
        int high=i;
        while(low>=0 && high<length && A[low]==A[high]){
            if(high-low+1>maxlength){
                maxlength=high-low+1;
                start=low;
            }
            low--;
            high++;
        }
        low=i-1;
        high=i+1;
        while(low>=0 && high<length && A[low]==A[high]){
            if(high-low+1>maxlength){
                maxlength=high-low+1;
                start=low;
            }
            low--;
            high++;
        }
    }
    string out;
    for(int i=start;i<start+maxlength;i++)
        out=out+A[i];
    return out;
}
