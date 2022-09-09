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
   bool tocheck(TreeNode*p,TreeNode*q){
       if(p==NULL and q==NULL){
           return true;
       }
       else if((p and !q) || (!p and q)){
           return false;
       }
       else if(p->val!=q->val){
           return false;
       }
       return tocheck(p->left,q->left) && tocheck(p->right,q->right);
   }
    bool isSameTree(TreeNode* p, TreeNode* q) {
    
        return tocheck(p,q);
    }
};