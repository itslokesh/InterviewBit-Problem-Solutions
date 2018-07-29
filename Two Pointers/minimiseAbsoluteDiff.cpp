int min1(int a,int b,int c){
    if(a<b && a<c)
        return a;
    if(b<a && b<c)
        return b;
    return c;
}
int max1(int a,int b,int c){
    if(a>b && a>c)
        return a;
    if(b>a && b>c)
        return b;
    return c;
}
int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    int ia=0,ib=0,ic=0;
    int out=INT_MAX;
    while(ia<A.size() && ib<B.size() && ic<C.size()){
        int max1=max(A[ia],max(B[ib],C[ic]));
        int min1=min(A[ia],min(B[ib],C[ic]));
        int curr=abs(max1-min1);
        if(curr<out)
            out=curr;
        if(min1==A[ia])
            ia++;
        else if(min1==B[ib])
            ib++;
        else
            ic++;
    }
    return out;
}
