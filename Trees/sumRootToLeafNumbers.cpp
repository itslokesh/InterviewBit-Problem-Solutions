/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int sumNumb(TreeNode *A,int temp){
    if(A==NULL){
        return 0;
    }
    temp=(temp*10+A->val)%1003;
    if(A->left==NULL && A->right==NULL)
        return temp;
    return sumNumb(A->left,temp) + sumNumb(A->right,temp);
}
int Solution::sumNumbers(TreeNode* A) {
    return sumNumb(A,0)%1003;
}
