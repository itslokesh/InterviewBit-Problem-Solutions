bool findUnassigned(vector<vector<char>> &A,int &row,int &col){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(A[i][j]=='.'){
                row=i;
                col=j;
                return true;
            }
        }
    }
    return false;
}
bool isSafe(vector<vector<char>> &A,int n,int row,int col){
    for(int i=0;i<9;i++){
        if(A[row][i]==n+48)
            return false;
        if(A[i][col]==n+48)
            return false;
    }
    row=row-row%3;
    col=col-col%3;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(A[i+row][j+col]==n+48)
                return false;
        }
    }
    return true;
}

bool solve(vector<vector<char>> &A){
    int row,col;
    char out[]="0123456789";
    if(findUnassigned(A,row,col)==false)
        return true;
  //  cout<<row<<" "<<col<<endl;
    for(int number=1;number<10;number++){
        if(isSafe(A,number,row,col)==true){
            A[row][col]=out[(number)];
        //    cout<<number<<endl; //A[row][col]<<"\n"<<row<<col<<endl;
            if(solve(A)==false)
                A[row][col]='.';
            else
                return true;
        }
    }
    return false;
}
void Solution::solveSudoku(vector<vector<char> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    bool out=solve(A);
    return;
}
