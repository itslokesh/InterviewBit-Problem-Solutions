int Solution::reverse(int A) {
    long long int rev=0,rem;
    while(A)
    {
        rem=1LL*(A%10);
        rev=rev*10+rem;
        A=A/10;
        if(rev>INT_MAX || rev<INT_MIN)
        return 0;
    }
    return (int)rev;
}
