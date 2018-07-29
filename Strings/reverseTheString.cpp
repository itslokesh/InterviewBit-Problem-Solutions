void Solution::reverseWords(string &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<string> out;
    int length=A.size();
    string s;
    for(int i=0;i<length;i++){
        if(A[i]==' '){
            out.push_back(s);
            s="\0";
        }
        else
            s=s+A[i];
    }
    out.push_back(s);
    int outlength=out.size()-1;
    if(outlength==0)
        return;
    int i=0;
   // cout<<outlength;
    while(i<outlength){
        string temp=out[i];
        out[i]=out[outlength];
        out[outlength]=temp;
        i++;
        outlength--;
    }
    A="\0";
    for(int i=0;i<out.size();i++){
        A=A+out[i];
        A=A+" ";
    }
    
    if(A[A.size()-1]==' ')
        A=A.substr(0,A.size()-1);
}
