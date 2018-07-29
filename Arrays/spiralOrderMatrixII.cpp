vector<vector<int> > Solution::generateMatrix(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ formore details
    int dir=0,count=1;
    int** a=new int*[A];
    for(int i=0;i<A;i++)
        a[i]=new int[A];
    int top=0,right=A-1,bottom=A-1,left=0;
    while(top<=bottom && left<=right){
        if(dir==0){
            for(int i=left;i<=right;i++){
                a[top][i]=count;
                count++;
            }
            top++;
        }
        else if(dir==1){
            for(int i=top;i<=bottom;i++){
                a[i][right]=count;
                count++;
            }
            right--;
        }
        else if(dir==2){
            for(int i=right;i>=left;i--){
                a[bottom][i]=count;
                count++;
            }
            bottom--;
        }
        else if(dir==3){
            for(int i=bottom;i>=top;i--){
                a[i][left]=count;
                count++;
            }
            left++;
        }
        dir=(dir+1)%4;
    }
    vector<vector<int>> z;
    z.resize(A);
    for(int i=0;i<A;i++)
        for(int j=0;j<A;j++)
            z[i].push_back(a[i][j]);
    return z;
}
