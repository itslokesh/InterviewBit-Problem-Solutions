/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode* A) {
    stack<TreeNode *>st;
    vector<int> out;
    TreeNode *root=A,*prev=NULL;
    do{
        while(root){
            st.push(root);
            root=root->left;
        }
        while(root==NULL && !st.empty()){
            root=st.top();
            if(root->right==prev || root->right==NULL){
                out.push_back(root->val);
                st.pop();
                prev=root;
                root=NULL;
            }
            else
                root=root->right;
        }
    }while(!st.empty());
    return out;
}
