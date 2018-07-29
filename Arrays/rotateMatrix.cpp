void Solution::rotate(vector<vector<int> > &a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int temp;
        int totalLevel=a[0].size()/2;
        int n=a[0].size();
        if(a[0].size()%2==1)
            totalLevel++;
        for(int level=0;level<totalLevel;level++){
            for(int i=level;i<n-level-1;i++){
                temp=a[i][n-level-1];
                a[i][n-level-1]=a[level][i];
                a[level][i]=temp;
                temp=a[n-level-1][n-i-1];
                a[n-level-1][n-i-1]=a[level][i];
                a[level][i]=temp;
                temp=a[n-i-1][level];
                a[n-i-1][level]=a[level][i];
                a[level][i]=temp;
            }
        }
    }

