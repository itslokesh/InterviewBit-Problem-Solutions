vector<int> Solution::maxset(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    double maxHere=0,maxGlobal=0;
    int globalStart=-1,globalEnd=-1,currStart=0,currEnd=-1;
    for(int i=0;i<A.size();i++){
        if(A[i]>=0){
            maxHere+=A[i];
            currEnd=i;
        }
        else if(A[i]<0){
            maxHere=0;
            currStart=i+1;
        }
        if(maxHere>maxGlobal){
            maxGlobal=maxHere;
            globalStart=currStart;
            globalEnd=currEnd;
        }
        else if(maxHere==maxGlobal){
            if(globalEnd-globalStart<currEnd-currStart){
                globalEnd=currEnd;
                globalStart=currStart;
            }
            else if(globalEnd-globalStart==currEnd-currStart){
                if(currStart<globalStart){
                    globalStart=currStart;
                    globalEnd=currEnd;
                }
            }
        }
    }
    vector<int> out;
    if(globalStart<0 || globalEnd<0)
        return out;
    for(int i=globalStart;i<=globalEnd;i++)
        out.push_back(A[i]);
    return out;
}
