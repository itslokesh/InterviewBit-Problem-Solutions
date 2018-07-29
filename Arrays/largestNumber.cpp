bool comp(string a,string b){
    string temp1=a+b;
    string temp2=b+a;
    return temp1.compare(temp2)>0?1:0;
}
string Solution::largestNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<string> correct;
    for(int i=0;i<A.size();i++)
        correct.push_back(to_string(A[i]));
    string s;
    sort(correct.begin(),correct.end(),comp);
    if(correct[0]=="0")
        return "0";
    for(int i=0;i<A.size();i++){
        s=s+correct[i];
    }
    return s;
}
