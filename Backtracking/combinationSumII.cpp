void findCombination(vector<int> &a,int sum,vector<int> temp,vector<vector<int>> &out,int i){
    if(sum==0){
        for(int i=0;i<out.size();i++){
            if(temp==out[i])
                return;
        }
        out.push_back(temp);
        return;
    }
    else if(sum<0){
        return;
    }
    else{
        while(i<a.size() && sum-a[i]>=0){
            temp.push_back(a[i]);
            findCombination(a,sum-a[i],temp,out,i+1);
            i++;
            temp.pop_back();
        }
    }
}
vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    vector<vector<int>> out;
    sort(A.begin(),A.end());
    if(A.size()==0)
        return out;
    vector<int> temp;
    findCombination(A,B,temp,out,0);
    return out;
}
