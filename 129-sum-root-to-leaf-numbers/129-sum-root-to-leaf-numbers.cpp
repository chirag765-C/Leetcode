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
void togo(TreeNode*root,int cnt){
    if(!root){return;}
    cnt=cnt*10+root->val;
    if(!root->left and !root->right){
        sum+=cnt;
        // cnt=cnt-root->val;
        return;
    }
    togo(root->left,cnt);
    togo(root->right,cnt);
}
    int sumNumbers(TreeNode* root) {
        togo(root,0);
        return sum;
    }
};