int Solution::strStr(const string &haystack, const string &needle) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int total=haystack.size();
    int find=needle.size();
    if(total==0 || find==0)
        return -1;
    for(int i=0;i<=total-find;i++){
        int j=0;
        int temp=i;
        if(haystack[temp]==needle[j]){
            while(j<needle.size() && haystack[temp]==needle[j]){
                temp++;
                j++;
            }
            if(j==needle.size())
                return i;
        }
    }
    return -1;
}
