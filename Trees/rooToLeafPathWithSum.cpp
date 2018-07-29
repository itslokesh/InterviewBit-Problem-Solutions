/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void pathsum(TreeNode *root,int b,vector<vector<int>> &out,vector<int> temp){
    if(root==NULL)
        return;
    if(root->left==NULL && root->right==NULL){
        if(b-root->val==0){
            temp.push_back(root->val);
            out.push_back(temp);
        }
        return;
    }
    temp.push_back(root->val);
    pathsum(root->left,b-root->val,out,temp);
    pathsum(root->right,b-root->val,out,temp);
}
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    vector<vector<int>> out;
    vector<int> temp;
    pathsum(A,B,out,temp);
    return out;
}
