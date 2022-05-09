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
    bool tocheck(TreeNode*root,TreeNode*subroot){
        if(!root || !subroot){
            return root==subroot;
        }
        if(root->val!=subroot->val){
            return false;
        }
    else{
        return tocheck(root->left,subroot->left) && tocheck(root->right,subroot->right);
    }
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root){
            return false;
        }
        else if(tocheck(root,subRoot)){
            return true;
        }
        else {
           return  isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
        }
        
    }
};