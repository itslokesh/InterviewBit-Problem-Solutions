/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int mx(int left,int right){
     if(left>right)
        return left;
    return right;
 }
int Solution::maxDepth(TreeNode* A) {
    if(A==NULL)
        return 0;
    int left=maxDepth(A->left);
    int right=maxDepth(A->right);
    return mx(left+1,right+1);
}
