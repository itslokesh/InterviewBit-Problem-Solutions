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
}
TreeNode* buildtree(vector<int> &A, vector<int> &B, int start,int end,int &postEnd){
    if(start>end)
        return NULL;
    TreeNode *n=new TreeNode(B[postEnd]);
    postEnd--;
    if(start==end){
        return n;
    }
    int index=findIndex(A,n->val,start,end);
    n->right=buildtree(A,B,index+1,end,postEnd);
    n->left=buildtree(A,B,start,index-1,postEnd);
    return n;
}
TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
    int x=A.size()-1,start=0;
    int p=A.size()-1;
    return buildtree(A,B,start,x,p);
}
