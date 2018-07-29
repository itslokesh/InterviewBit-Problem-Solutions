void swap1(vector<int> &a,int l,int r){
    int temp=a[l];
    a[l]=a[r];
    a[r]=temp;
}
void findPermute(vector<vector<int>> &out,vector<int> &a,int l,int r){
    if(l==r)
        out.push_back(a);
    else{
        for(int i=l;i<=r;i++){
            swap1(a,l,i);
            findPermute(out,a,l+1,r);
            swap1(a,l,i);
        }
    }
}
vector<vector<int> > Solution::permute(vector<int> &A) {
    vector<vector<int>> out;
    vector<int> temp;
    findPermute(out,A,0,A.size()-1);
    return out;
}
