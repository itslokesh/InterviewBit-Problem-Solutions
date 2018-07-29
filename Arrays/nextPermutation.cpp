void Solution::nextPermutation(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int length=A.size()-1;
    int i=length;
    while(i>0 && A[i]<=A[i-1]){
        i--;
    }
    if(i==0){
        sort(A.begin(),A.end());
        return;
    }
    i--;
    int pivot=length;
    while(A[pivot]<=A[i]){
        pivot--;
    }
    int temp=A[pivot];
    A[pivot]=A[i];
    A[i]=temp;
  //  for(int i=0;i<A.size();i++)
//        cout<<A[i]<<" ";
    sort(A.begin()+i+1,A.end());
    
   // cout<<endl;
}
