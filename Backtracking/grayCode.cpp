void findGray(vector<int> &out,int a,int &num){
    if(a==0)
        out.push_back(num);
    else{
        findGray(out,a-1,num);
        num=num^(1<<(a-1));
        findGray(out,a-1,num);
    }
}
vector<int> Solution::grayCode(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int num=0;
    vector<int> out;
    findGray(out,A,num);
    return out;
}
