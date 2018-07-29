/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* A) {
    stack<TreeNode *> st;
    vector<int> out;
    TreeNode *temp=A;
    while(1){
        while(temp!=NULL){
            st.push(temp);
            temp=temp->left;
        }
        if(st.empty())
            break;
        temp=st.top();
        st.pop();
        out.push_back(temp->val);
        temp=temp->right;
    }
    return out;
}
