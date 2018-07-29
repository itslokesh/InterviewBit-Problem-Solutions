int Solution::divide(int A, int B) {
    int Bneg=1,Aneg=1;
    if(A==INT_MIN){
        if(B==-1)
            return INT_MAX;
    }
    if(B==0)
        return INT_MAX;
    if(B==1){
        return A*B;
    }
    if(B<0){
        B*=(-1);
        Bneg=-1;
    }
    if(A==INT_MIN)
        A=INT_MAX;
    if(A!=INT_MAX && A!=INT_MIN && A<0){
        Aneg=-1;
        A*=(-1);
    }
    int sum=0,count=0;
        while (A >= B) {
            A -= B;
            ++count;
    }
    return count*Bneg*Aneg;
}
