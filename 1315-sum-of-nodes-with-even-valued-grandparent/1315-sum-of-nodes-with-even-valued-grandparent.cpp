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
    int sum=0;
    void tof(TreeNode*root){
        if(!root){
            return;
        }
        if(root->val%2==0){
            
            
            if(root->left){
            
                sum+=root->left->left!=NULL?root->left->left->val:0;
            sum+=root->left->right!=NULL?root->left->right->val:0;
            }
            if(root->right){
                  sum+=root->right->left?root->right->left->val:0;
            sum+=root->right->right?root->right->right->val:0;   
            }
            
                        // sum+=root->left->right!=NULL?root->left->right->val:0;
       
        }
        tof(root->left);
        tof(root->right);
    }
    int sumEvenGrandparent(TreeNode* root) {
    if(!root){
        return 0;
    }    
        tof(root);
       return  sum;

    }
};