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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
       unordered_map<int,TreeNode*>mp;
        unordered_map<int,bool>check;
        for(auto &v:descriptions){
            if(mp.count(v[0])==0){
                TreeNode*parent=new TreeNode(v[0]);
                mp[v[0]]=parent;
            }
            if(mp.count(v[1])==0){
                TreeNode*child=new TreeNode(v[1]);
                mp[v[1]]=child;
            }
            int t=v[2];
            if(t==1){
                mp[v[0]]->left=mp[v[1]];
            }
            else{
                mp[v[0]]->right=mp[v[1]];
            }
            check[v[1]]=true;
        }
        for(auto it:mp){
            if(check[it.first]==false){
                return mp[it.first];
            }
        }
        return NULL;
    }
};