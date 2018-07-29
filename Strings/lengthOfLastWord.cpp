int Solution::lengthOfLastWord(const string A) {
    int length=0;
    int aLength=A.length();
    while(aLength>0 && A[aLength]== ' ')
        aLength--;
    while(aLength>0){
        if(A[aLength]==' ')
            break;
        else{
            length++;
            aLength--;
        }
    }
    return length;
}
