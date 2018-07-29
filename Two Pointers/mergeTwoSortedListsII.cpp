//#include<list.h>
void Solution::merge(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i=0,j=0,done=0;
    vector<int> out;
    int length=A.size();
    while(done==0){
       // cout<<"i "<<i<<" A.size()"<<A.size()<<endl;
        if(i<length){
        //    cout<<"i "<<i<<" A.size()"<<A.size()<<endl;
            if(j<B.size()){
                if(A[i]<B[j]){
                    out.push_back(A[i]);
                    i++;
                }
                else{
                    out.push_back(B[j]);
                    //cout<<i<<endl;
                    j++;
                }
            }
            else{
                while(i<length){
                    out.push_back(A[i]);
                    i++;
                }
                done=1;
            }
        }
        else{
        //    cout<<"i "<<i<<" A.size()"<<A.size()<<endl;
            while(j<B.size()){
                out.push_back(B[j]);
               // cout<<"123"<<endl;
                j++;
            }
            done=1;
        }
    }
    A=out;
}
