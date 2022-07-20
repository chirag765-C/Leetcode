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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root){
            return ans;
        }
        bool left=true;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            
            int sz=q.size();
            vector<int>v(sz);
            for(int i=0;i<sz;i++){
                int index=left?i:sz-i-1;
                TreeNode *curr=q.front();
                q.pop();
                v[index]=curr->val;
                if(curr->left){
                   q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
                
                    
                }
            left=!left;
            ans.push_back(v);
            }
           
            
        
    return ans;
    }
};