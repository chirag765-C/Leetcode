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
public:
    int mx;
    int tofind(TreeNode*root){
     if(!root){
         return 0;
     }
        int x=tofind(root->left);
        int y=tofind(root->right);
        int temp=max(x,y)+1;
        int ans=max(temp,x+y+1);
        mx=max(mx,ans);
        return temp;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root){
            return 0;
        }
     mx=INT_MIN;
        int y=tofind(root);
            return mx-1;
    }
};