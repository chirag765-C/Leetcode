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
    int cnt=0;
int tocheck(TreeNode*root,int sum,bool flag){
    if(!root){
        return sum-1;
    }
    int left=tocheck(root->left,flag==false?sum+1:1,true);
    int right=tocheck(root->right,flag==true?sum+1:1,false);
return max(left,right);
 
    }
    int longestZigZag(TreeNode* root) {
     int x=tocheck(root,0,false);   
        return x;
    }
};