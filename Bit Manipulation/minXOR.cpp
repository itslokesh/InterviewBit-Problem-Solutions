int Solution::findMinXor(vector<int> &A) {
    sort(A.begin(),A.end());
    int temp=INT_MAX;
    for(int i=0;i<A.size()-1;i++){
        int min=A[i+1]^A[i];
        int out=0;
        int count=0;
        while(min>0){
            if(min%2==1)
                out=out + pow(2,count);
            count++;
            min=min/2;
        }
        if(temp>out)
            temp=out;
    }
    return temp;
}
