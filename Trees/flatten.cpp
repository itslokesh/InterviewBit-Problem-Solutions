/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

TreeNode* Solution::flatten(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A->left==NULL && A->right==NULL)
        return A;
    TreeNode *maderight=NULL;
    if(A->right)
        A->right=flatten(A->right);
    if(A->left)
        maderight=flatten(A->left);
    if(maderight!=NULL){
        TreeNode *trav=maderight;
        while(trav->right!=NULL)
            trav=trav->right;
        trav->right=A->right;
        A->right=maderight;
        A->left=NULL;
    }
    return A;
}
