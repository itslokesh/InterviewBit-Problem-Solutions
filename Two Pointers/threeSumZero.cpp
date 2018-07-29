vector<vector<int> > Solution::threeSum(vector<int> &A) {
    int i=0;
    set<vector<int>> out;
    sort(A.begin(),A.end());
    while(i<A.size()){
        int j=i+1,k=A.size()-1;
        while(j<k){
            if(A[i]+A[j]+A[k]==0){
                vector<int> temp;
                temp.push_back(A[i]);
                temp.push_back(A[j]);
                temp.push_back(A[k]);
                out.insert(temp);
                j++;
                k--;
            }
            else if(A[i]+A[j]+A[k]>0){
                k--;
            }
            else{
                j++;
            }
        }
        i++;
    }
    vector<vector<int> > out1;
    set<vector<int>>::iterator it;
    for(it=out.begin();it!=out.end();it++)
        out1.push_back(*it);
        return out1;
}/*
        while(i<A.size()-1 && A[i]==A[i+1])
            i++;

while(j<=k && A[k]==A[k-1])
                    k--;
            while(j<=k && A[j]==A[j+1])
                    j++;
            if(j>=k)
                break;*/