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
    // int cnt=0;
    TreeNode*tofind(TreeNode*root,int key){
        if(!root){
            return NULL;
        }
        
        if(root->val==key and !root->left and !root->right){
         
            return NULL;
        }
        root->left=tofind(root->left,key);
        root->right=tofind(root->right,key);
           if(root->val==key and !root->left and !root->right){
         
            return NULL;
        }
        return root;
        
    }
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
       if(!root){
           return NULL;
       } 
        root=tofind(root,target);
        
      
          // root=tofind(root,target);
     
        return root;
    }
};