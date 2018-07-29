/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* LCA(TreeNode* A, int B, int C,bool &a1,bool &a2) {
 if(A==NULL)
        return NULL;
    if(A->val==B || A->val==C){
        if(A->val==B)
            a1=true;
        if(A->val==C)
            a2=true;
        return A;
    }
    TreeNode* alpha=LCA(A->left,B,C,a1,a2);
    TreeNode* beta=LCA(A->right,B,C,a1,a2);
    if(alpha && beta)
        return A;
    if(alpha)
        return alpha;
    if(beta)
        return beta;
    return NULL;
}
bool find(TreeNode* root,int a){
    if(root==NULL)
        return false;
    if(root->val==a || find(root->left,a) || find(root->right,a))
        return true;
    return false;
}
int Solution::lca(TreeNode* A, int B, int C) {
    bool a1=false;
    bool a2=false;
    TreeNode* z=LCA(A,B,C,a1,a2);
    if((a1==true && a2==true) || (a1==true && find(z,C)) || (a2==true && find(z,B)) )
        return z->val;
    return -1;
}
