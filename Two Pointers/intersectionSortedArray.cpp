vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    int sizeA=A.size();
    int sizeB=B.size();
    vector<int> out;
    int i=0,j=0;
    while(i< sizeA && j<sizeB){
        if(A[i]==B[j]){
            out.push_back(A[i]);
            i++;
            j++;
        }
        else if(A[i]<B[j])
            i++;
        else
            j++;
    }
    return out;
}
