void findCombination(vector<int> temp, vector<vector<int>> &out,int a,int currA,int b){
    if(b==0){
        out.push_back(temp);
        return;
    }
    else{
        while(currA<=a && b>0){
            temp.push_back(currA);
            currA++;
            findCombination(temp,out,a,currA,b-1);
            temp.pop_back();
        }
    }
}
vector<vector<int> > Solution::combine(int A, int B) {
    vector<vector<int>> out;
    vector<int> temp;
    findCombination(temp,out,A,1,B);
    return out;
}
