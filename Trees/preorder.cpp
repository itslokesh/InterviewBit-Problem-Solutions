/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* A) {
    stack<TreeNode *> st;
    TreeNode *root=A;
    vector<int> out;
    while(1){
        while(root){
            out.push_back(root->val);
            st.push(root);
            root=root->left;
        }
        if(st.empty())
            break;
        root=st.top();
        st.pop();
        root=root->right;
    }
    return out;
}
