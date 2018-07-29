int Solution::threeSumClosest(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    sort(A.begin(),A.end());
    int i=0,closest=INT_MAX;
    int outi,outj,outk;
    int diff=INT_MAX;
    if(A.size()<3)
        return 0;
    while(i<A.size()){
        int j=i+1,k=A.size()-1;
        while(j<k){
            int sum=A[i]+A[j]+A[k];
            if(i==0 && j==1)
                closest=sum;
            else if(abs(closest-B)>abs(sum-B)){
                sum=closest;
            }
            if(abs(sum-B)>B)
                k--;
            else if(sum<B)
                j++;
            else
                return sum;
        }
        i++;
    }
    return closest;
}
