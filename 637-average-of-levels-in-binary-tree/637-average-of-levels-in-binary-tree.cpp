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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*>q;
    vector<double>v;
        if(!root){
            return v;
        }
        q.push(root);
        int sz;
        while(!q.empty()){
          
            int sz=q.size();
            int t=sz;
            long long sum=0;
            while(sz--){
                  TreeNode*curr=q.front();
            q.pop();
                sum+=curr->val;
                if(curr->left){
                    q.push(curr->left);
                    
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
            v.push_back((double)sum/t);
        }
        return v;
    }
};