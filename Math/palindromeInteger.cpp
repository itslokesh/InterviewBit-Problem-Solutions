int Solution::isPalindrome(int A) {
    int b=0;
    int temp=A;
    while(temp>0){
        b=b*10+temp%10;
        temp=temp/10;
    }
    if(A==b)
        return 1;
    return 0;
}