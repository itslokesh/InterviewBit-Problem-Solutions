int Solution::titleToNumber(string A) {
    int aLength=A.length();
    int sum=0;
    int i=0;
    while(i<aLength){
        sum=sum+((A[i]-64)*pow(26,aLength-i-1));
        i++;
    }
    return sum;
}
