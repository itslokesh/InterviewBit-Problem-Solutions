void findSubsets(vector<int> &A,vector<vector<int>> &out,vector<int> &temp,int iter){
    for(int i=iter;i<A.size();i++){
        temp.push_back(A[i]);
        int can=1;
        for(int j=0;j<out.size();j++)
            if(out[j]==temp)
                can=0;
        if(can==1)
            out.push_back(temp);
        findSubsets(A,out,temp,i+1);
        temp.pop_back();
    }
    return;
}
vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
    vector<int> temp;
    vector<vector<int>> out;
    out.push_back(temp);
    sort(A.begin(),A.end());
    findSubsets(A,out,temp,0);
    return out;
}
