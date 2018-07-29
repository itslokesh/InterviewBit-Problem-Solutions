bool isPrime(int a){
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0)
            return false;
    }
    return true;
}
vector<int> Solution::primesum(int A) {
    int i=2,j=A-2;
    vector<int> out;
    while(i<=j){
        if(isPrime(i)==true && isPrime(j)==true){
            out.push_back(i);
            out.push_back(j);
            return out;
        }
        else{
            i++;
            j--;
        }
    }
}