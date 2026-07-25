/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
    int position(vector<int>in,int element)
    {
        for(int i=0;i<in.size();i++)
        {
            if(in[i] == element)
            return i;
        }
        return -1;
           }
    TreeNode* solve(vector<int>in,vector<int>pre,int &index,int inorderstart,int inorderend)
    {
       int  n = in.size();
         if(index>=n || inorderstart>inorderend)
        {
            return NULL;
        }
        int element = pre[index++];
        TreeNode* root = new TreeNode(element);
        int pos = position(in,element);
        root->left = solve(in,pre,index,inorderstart,pos-1);
        root->right = solve(in,pre,index,pos+1,inorderend);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preorderindex=0;
        int n=inorder.size();
        TreeNode* ans = solve(inorder,preorder,preorderindex,0,n-1);
        return ans;
    }
};