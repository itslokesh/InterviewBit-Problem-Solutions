void subsetsUtil(vector<int>& A, vector<vector<int> >& res,
                 vector<int>& subset, int index)
{
    for (int i = index; i < A.size(); i++) {
 
        // include the A[i] in subset.
        subset.push_back(A[i]);
        res.push_back(subset);
 
        // move onto the next element.
        subsetsUtil(A, res, subset, i + 1);
 
        // exclude the A[i] from subset and triggers
        // backtracking.
        subset.pop_back();
    }
 
    return;
}

vector<vector<int> > Solution::subsets(vector<int> &A) {
    vector<int> subset;
    vector<vector<int> > res;
    sort(A.begin(),A.end());
    // include the null element in the set.
    res.push_back(subset);
 
    // keeps track of current element in vector A;
    int index = 0;
    subsetsUtil(A, res, subset, index);
 
    return res;
}

