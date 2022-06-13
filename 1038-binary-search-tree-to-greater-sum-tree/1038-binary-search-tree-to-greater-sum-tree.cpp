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
    int gs=0;
    void change(TreeNode*root){
        if(root==NULL){
            return;
        }
        change(root->right);
        gs+=root->val;
        root->val=gs;
        change(root->left);
    }
    TreeNode* bstToGst(TreeNode* root) {
  change(root);
        return root;
    }
};