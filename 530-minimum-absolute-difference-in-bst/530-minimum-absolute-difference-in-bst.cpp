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
    int diff=INT_MAX;
    TreeNode*prev=NULL;
    void toget(TreeNode*root){
        if(root->left){
            toget(root->left);
        }
        if(prev){
            diff=min(diff,abs(prev->val-root->val));
            
        }
        prev=root;
        if(root->right){
            toget(root->right);
        }
    }
    int getMinimumDifference(TreeNode* root) {
        if(!root){
            return 0;
        }
        toget(root);
        return diff;
    }
};