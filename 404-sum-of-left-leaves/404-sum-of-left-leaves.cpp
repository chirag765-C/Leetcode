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
    void tofind(TreeNode*root,bool t){
        if(!root){
            return ;
        }
        if(root->left==NULL && root->right==NULL && t==true){
            sum+=root->val;
        }
        tofind(root->left,true);
        tofind(root->right,false);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        tofind(root,false);
        return sum;
    }
};