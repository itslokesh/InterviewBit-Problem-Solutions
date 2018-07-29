unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    unsigned int n=sizeof(A)*8-1;
    unsigned int B;
  //  cout<<n<<endl;
    unsigned int i=0;
    while(i<=n){
        if(A & (1<<(i+1)))
            B|=(1<<(n-(i+1)));
        i++;
    }
    return B;
}
