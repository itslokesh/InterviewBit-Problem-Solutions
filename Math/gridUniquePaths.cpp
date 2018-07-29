int max(int a,int b){
    return a+b;//a>b?a:b;
}
int Solution::uniquePaths(int A, int B) {
    if(A==1 || B==1)
        return 1;
    int matrix[A][B];
    for(int i=0;i<B;i++)
        matrix[0][i]=1;
    for(int i=0;i<A;i++)
        matrix[i][0]=1;
    for(int i=1;i<A;i++)
        for(int j=1;j<B;j++){
            matrix[i][j]=(max(matrix[i-1][j],matrix[i][j-1]));//+1;
        }
    return matrix[A-1][B-1];
}
