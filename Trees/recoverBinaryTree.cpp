/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void util(TreeNode* root,TreeNode** first,TreeNode** middle,TreeNode** last,TreeNode** prev){
    if(root==NULL)
        return;
    util(root->left,first,middle,last,prev);
    if((*prev) && ((*prev)->val>root->val)){
        if(!(*first)){
            *first=*prev;
            *middle=root;
        }
        else{
            *last=root;
        }
    }
    *prev=root;
    util(root->right,first,middle,last,prev);
}
vector<int> Solution::recoverTree(TreeNode* A) {
    vector<int> out;
    TreeNode *first,*middle,*last,*prev;
    first=last=middle=prev=NULL;
    util(A,&first,&middle,&last,&prev);
    if(last)
        out.push_back(last->val);
    else
        out.push_back(middle->val);
    out.push_back(first->val);
    return out;
}

