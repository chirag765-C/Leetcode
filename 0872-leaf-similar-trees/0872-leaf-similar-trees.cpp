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
    vector<int>v;vector<int>ans;
    void inorder(TreeNode*root){
     if(!root){
         return;
     }
        if(!root->left and !root->right){
            ans.push_back(root->val);
        }
        inorder(root->left);
        inorder(root->right);
    }
    void inorder1(TreeNode*root){
        if(!root){
            return;
        }
        if(!root->left and !root->right){
            v.push_back(root->val);
        }
        inorder1(root->left);
        inorder1(root->right);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
     inorder(root1);
        inorder1(root2);
        if(v.size()!=ans.size()){
            return false;
        }
        for(int i=0;i<v.size();i++){
            if(v[i]!=ans[i]){
                return false;
            }
        }
        return true;
    }
};