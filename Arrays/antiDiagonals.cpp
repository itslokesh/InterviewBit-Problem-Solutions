vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int row=A.size();
    int total=2*row-1;
    row--;
    vector<vector<int>> out;
    out.resize(total);
    //cout<<total<<endl;
    int i;
    for(i=0;i<row;i++){
        int temp=i,j=0;
        while(temp>=0){
            out[i].push_back(A[j][temp]);
            temp--;
            j++;
        }
    }
    //cout<<i<<endl;
    for(int j=row;j>=0;j--){
        out[i].push_back(A[row-j][j]);
    }
    //cout<<i<<endl;
    for(int j=1;j<=row;j++){
        int temp=j,a=row;
        i++;
      //  cout<<i<<endl;
        while(temp<=row){
            out[i].push_back(A[temp][a]);
            temp++;
            a--;
        }
    }
    return out;
}
