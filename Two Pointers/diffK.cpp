int Solution::diffPossible(vector<int> &A, int B) {
    int low=0,high=A.size()-1;
    int diff=A[high]-A[low];
    int diff1;
    while(low<high){
        if(diff==B)
            return 1;
        if(diff<B)
            low++;
        else if(diff>B)
            high--;
        diff1=diff;
        diff=A[high]-A[low];
        if(diff1==diff && B==0)
            return 1;
    }
    if(low==high)
        return 0;
    return 1;
}