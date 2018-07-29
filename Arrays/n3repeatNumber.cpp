struct eleCount
{
    int e;  // Element
    int c;  // Count
};
int Solution::repeatedNumber(const vector<int> &arr) {
    int k=3,n=arr.size();
    struct eleCount temp[k-1];
    for (int i=0; i<k-1; i++)
        temp[i].c = 0;
    for (int i = 0; i < n; i++){
        int j;
        for (j=0; j<k-1; j++){
            if (temp[j].e == arr[i]){
                 temp[j].c += 1;
                 break;
            }
        }
        if (j == k-1){
            int l;
            for (l=0; l<k-1; l++){
                if (temp[l].c == 0){
                    temp[l].e = arr[i];
                    temp[l].c = 1;
                    break;
                }
            }
            if (l == k-1)
                for (l=0; l<k; l++)
                    temp[l].c -= 1;
        }
    }
    for (int i=0; i<k-1; i++){
        int ac = 0;  // actual count
        for (int j=0; j<n; j++)
            if (arr[j] == temp[i].e)
                ac++;
        if (ac > n/k)
            return temp[i].e;
           //cout << "Number:" << temp[i].e
             //   << " Count:" << ac << endl;
    }
    return -1;
}
