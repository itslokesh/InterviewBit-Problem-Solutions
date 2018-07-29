string Solution::longestCommonPrefix(vector<string> &A) {
    string out="";
    int min=INT_MAX;
    for(int i=0;i<A.size();i++)
        if(A[i].length()<min)
            min=A[i].length();
    for(int i=0;i<min;i++){
        char z=A[0][i];
        int j;
        for(j=0;j<A.size();j++)
            if(A[j][i]!=z)
                break;
        if(j==A.size())
            out=out+z;
        else
            return out;
    }
}
