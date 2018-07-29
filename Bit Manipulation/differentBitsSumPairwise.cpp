int Solution::cntBits(vector<int> &A) {
    long gCount=0;
    for(int j=0;j<32;j++){
        int count=0;
        for(int i=0;i<A.size();i++){
            if(A[i] & (1<<j)){
                count++;
            }
        }
        gCount=gCount+(count*(A.size()-count)*2);
    }
    return (int)(gCount)%1000000007;
}
