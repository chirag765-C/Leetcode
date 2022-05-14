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
    vector<string>s;
    void solve(TreeNode*root,string t){
 if(!root){
     return;
 }   
        if(!root->left and !root->right){
            t+=to_string(root->val);
            s.push_back(t);
            return;
        }
        t+=to_string(root->val)+"->";
        solve(root->left,t);
        solve(root->right,t);
        
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {

     if(!root){
         return {""};
     }
  string t="";
        solve(root,t);
        return s;
    }
};