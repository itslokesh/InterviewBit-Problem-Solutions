/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int mn(int a,int b){
     if(a<b)
        return a;
    return b;
 }
int Solution::minDepth(TreeNode* A) {
    if(A==NULL)
        return 100;
    if(A->left==NULL && A->right==NULL)
        return 1;
    int left=minDepth(A->left);
    int right=minDepth(A->right);
    return (mn(left+1,right+1));
}
