int Solution::singleNumber(const vector<int> &A) {
    int xors=A[0];
    for(int i=1;i<A.size();i++)
        xors=xors^A[i];
    return xors;
}
