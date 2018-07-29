int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int min1=INT_MAX;
    int i=0,j=0,k=0;
    while(i<A.size() && j<B.size() && k<C.size()){
        int diff1=abs(A[i]-B[j]);
        int diff2=abs(C[k]-B[j]);
        int diff3=abs(A[i]-C[k]);
        int max1=max(diff1,max(diff3,diff2));
        if(min1>max1)
            min1=max1;
        if(A[i]==min(A[i],min(B[j],C[k])))
            i++;
        else if(B[j]==min(A[i],min(B[j],C[k])))
            j++;
        else
            k++;
    }
    return min1;
}
