int Solution::hammingDistance(const vector<int> &A) {
    int gCount=0;
    int biggest=-1;
    for(int i=0;i<A.size();i++)
        if(A[i]>biggest)
            biggest=A[i];
    int size=0;
    while(biggest>0){
        size++;
        biggest/=2;
    }
    for(int j=0;j<size;j++){
        int count=0;
        for(int i=0;i<A.size();i++){
            if(A[i] & (1<<j)){
                count++;
            }
        }
        gCount=gCount+(count*(A.size()-count)*2);
    }
    return (gCount)%1000000007;
}
