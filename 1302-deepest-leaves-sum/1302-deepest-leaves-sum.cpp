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
    int sum=0;
    int height(TreeNode*root){
        if(!root){
            return 0;
        }
        int l=height(root->left);
        int r=height(root->right);
        return l>r?l+1:r+1;
    }
    void dfs(TreeNode*root,int d,int h){
        if(!root){
            return ;
        }
        if(!root->left and !root->right){
            if(mx<=d){
                mx=d;
                
                sum+=root->val;
            }
            return;
        }
        
        dfs(root->left,d+1,h);
        dfs(root->right,d+1,h);
    }
    int deepestLeavesSum(TreeNode* root) {
        if(!root){
            return 0;
        }
        int h=height(root);
           mx=h-1;
        dfs(root,0,h);
     
        return sum;
    }
};