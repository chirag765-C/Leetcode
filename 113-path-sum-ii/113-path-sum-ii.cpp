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
    vector<vector<int>>ans;
  vector<int>v;

    void tofind(TreeNode*root,int target,int curr){
  if(!root){
      return;
  }
        v.push_back(root->val);
        curr+=root->val;
        if(curr==target and root->left==NULL and root->right==NULL){
            ans.push_back(v);
            
        }
        tofind(root->left,target,curr);
        tofind(root->right,target,curr);
        v.pop_back();
        
            }
    vector<vector<int>> pathSum(TreeNode* root, int target) {
        if(!root){
            return ans;
        }
        
        tofind(root,target,0);
    
        return ans;
    }
};