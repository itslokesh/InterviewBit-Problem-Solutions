string Solution::convertToTitle(int A) {
    string out="";
    while(A>0){
        int rem=A%26;
        if(rem==0){
            rem=26;
            A=(int)A/26-1;
        }
        else
            A=(int)A/26;

        out=(char)(rem+64) + out;
    }
    return out;
}
