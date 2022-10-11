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
vector<int>v;
    void inorder(TreeNode*root){
        if(root){
            inorder(root->left);
            v.push_back(root->val);
            inorder(root->right);
        }
    }
    TreeNode*help(int l,int h){
        if(l<h){
            int mid=l+(h-l)/2;
        TreeNode*temp=new TreeNode(v[mid]);
        temp->left=help(l,mid);
            temp->right=help(mid+1,h);
            return temp;
            }
        return NULL;
    }
    TreeNode* balanceBST(TreeNode* root) {
       inorder(root);
        int mid=v.size()/2;
       root= help(0,v.size());
        return root;
    }
};