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
public:        vector<int>v;

    void inorder(TreeNode*root){
        if(root){
            inorder(root->left);
            v.push_back(root->val);
            inorder(root->right);
            
        }
    }
    int minDiffInBST(TreeNode* root) {
        //we have to find min and 2nd min element in a tree
        inorder(root);
        int mn=INT_MAX;
        for(int i=1;i<v.size();i++){
                    int diff=v[i]-v[i-1];
            if(diff<mn){
                mn=diff;
            }

        }
        return mn;
    }
};