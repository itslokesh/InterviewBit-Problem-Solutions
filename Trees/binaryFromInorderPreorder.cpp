/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int findIndex(vector<int> &A,int data,int s,int e){
    for(int i=s;i<=e;i++)
        if(A[i]==data)
            return i;
  //  cout<<"12#123";
}
TreeNode* buildtree(vector<int> &inorder, vector<int> &preorder, int inorderstart,int inorderend,int &preorderindex){
    if(inorderstart>inorderend)
        return NULL;
    TreeNode *n=new TreeNode(preorder[preorderindex]);
    preorderindex++;
    if(inorderstart==inorderend){
        return n;
    }
    int inorderindex=findIndex(inorder,n->val,inorderstart,inorderend);
    n->left=buildtree(inorder,preorder,inorderstart,inorderindex-1,preorderindex);
    n->right=buildtree(inorder,preorder,inorderindex+1,inorderend,preorderindex);
    return n;
}
TreeNode* Solution::buildTree(vector<int> &preorder, vector<int> &inorder) {
    int x=inorder.size()-1,start=0;
    int pre=0;
    return buildtree(inorder,preorder,start,x,pre);
}
