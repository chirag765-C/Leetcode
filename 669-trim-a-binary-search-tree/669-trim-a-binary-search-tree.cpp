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
    TreeNode*tofind(TreeNode*root,int low,int high){
        if(!root){
            return NULL;
        }
       
        if(root->val>=low and root->val<=high){
            root->left=tofind(root->left,low,high);
        root->right=tofind(root->right,low,high);
        return root;   
        }
     
            if(root->val<low){
                root->right=tofind(root->right,low,high);
                return root->right;
            }
      
            root->left=tofind(root->left,low,high);
            return root->left;
        
    }
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if(!root){
            return NULL;
        }
        root=tofind(root,low,high);
        return root;
    }
};