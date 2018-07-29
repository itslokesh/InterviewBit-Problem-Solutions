bool findEmpty(int a, vector<string> &temp,int &row){
    for(row=0;row<a;row++){
        int foundQ=0;
        //cout<<temp[i]<<endl;
        for(int j=0;j<temp[row].length();j++){
            if(temp[row][j]=='Q'){
                foundQ=1;
                break;
            }
        }
        if(foundQ==0){
            //cout<<row<<endl;
            return true;
        }
    }
    return false;
}
bool isSafe(int a,vector<string> &temp,int row,int col){
    for(int i=0;i<a;i++){
        if(temp[row][i]=='Q')
            return false;
        if(temp[i][col]=='Q')
            return false;
    }
    int temprow=row-1,tempcol=col-1;
    while(temprow>=0 && tempcol>=0){
        if(temp[temprow][tempcol]=='Q')
            return false;
        temprow--;
        tempcol--;
    }
    temprow=row+1;
    tempcol=col+1;
    while(temprow<a && tempcol<a){
        if(temp[temprow][tempcol]=='Q')
            return false;
        temprow++;
        tempcol++;
    }
    temprow=row+1;
    tempcol=col-1;
    while(temprow<a && tempcol>=0){
        if(temp[temprow][tempcol]=='Q')
            return false;
        temprow++;
        tempcol--;
    }
    temprow=row-1;
    tempcol=col+1;
    while(temprow>=0 && tempcol<a){
        if(temp[temprow][tempcol]=='Q')
            return false;
        temprow--;
        tempcol++;
    }
    return true;
}
bool solve(int a,vector<vector<string>> &out,vector<string> &temp,int col){
    if(col==a){
        out.push_back(temp);
    }
    bool res=false;
    for(int i=0;i<a;i++){
        if(isSafe(a,temp,i,col)==true){
            temp[i][col]='Q';
            res=solve(a,out,temp,col+1) || res;
            temp[i][col]='.';
        }
    }
    return res;
}
vector<vector<string> > Solution::solveNQueens(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<vector<string>> out;
    vector<string> temp;
    for(int i=0;i<A;i++){
        string z="";
        for(int j=0;j<A;j++){
            z+='.';
        }
        temp.push_back(z);
    }
    int z=0;
    solve(A,out,temp,z);
    return out;
}
