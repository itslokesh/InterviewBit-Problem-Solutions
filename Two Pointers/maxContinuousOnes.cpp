vector<int> Solution::maxone(vector<int> &arr, int m) {
    int wL = 0, wR = 0; 
    int bestL = 0, bestWindow = 0; 
    int zeroCount = 0; 
    int n=arr.size();
    while (wR < n){
        if (zeroCount <= m){
            if (arr[wR] == 0)
              zeroCount++;
            wR++;
        }
        if (zeroCount > m){
            if (arr[wL] == 0)
              zeroCount--;
            wL++;
        }
        if (wR-wL > bestWindow)
        {
            bestWindow = wR-wL;
            bestL = wL;
        }
    }
    vector<int> out;
    for (int i=bestL; i<bestWindow+bestL; i++)
        out.push_back(i);
    return out;
}
