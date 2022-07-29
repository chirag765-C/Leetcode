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
    int totalsum=0;
    int tocount(TreeNode*root){
        if(!root){
            return 0;
        }
        int x=tocount(root->left);
        int y=tocount(root->right);
        int diff=abs(x-y);
        totalsum+=diff;
        return x+y+root->val;
            
    }
    int findTilt(TreeNode* root) {
        if(!root){
            return 0;
        }
        tocount(root);
        return totalsum;
    }
};