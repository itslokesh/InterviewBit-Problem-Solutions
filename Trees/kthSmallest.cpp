/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void findSmallest(TreeNode *A,int B,int &count,int &smallest){
    if(A==NULL)
        return;
    findSmallest(A->left,B,count,smallest);
    count++;
    if(count==B)
        smallest=A->val;
    findSmallest(A->right,B,count,smallest);
}
int Solution::kthsmallest(TreeNode* A, int B) {
    int count=0,smallest=INT_MAX;
    findSmallest(A,B,count,smallest);
    return smallest;
}
