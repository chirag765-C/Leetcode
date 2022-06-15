/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void trackparent(TreeNode*root,TreeNode*target,int k,unordered_map<TreeNode*,TreeNode*>&parent_track){
        if(!root){
            return;
        }
        queue<TreeNode*>q;
        q.push(root);
       while(!q.empty()){
           TreeNode*curr=q.front();
           q.pop();
           if(curr->left){
               parent_track[curr->left]=curr;
               q.push(curr->left);
           }
           if(curr->right){
               parent_track[curr->right]=curr;
               q.push(curr->right);
           }
       }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
     queue<TreeNode*>q;
        unordered_map<TreeNode*,TreeNode*>parent_track;
        trackparent(root,target,k,parent_track);
        int curr_level=0;
        unordered_map<TreeNode*,bool>visited;
        q.push(target);
        visited[target]=true;
        while(!q.empty()){
            int sz=q.size();
            if(curr_level++==k){
                break;
            }
            for(int i=0;i<sz;i++){
                TreeNode*curr=q.front();
                q.pop();
                //for left
                if(curr->left && !visited[curr->left]){
                    q.push(curr->left);
                    visited[curr->left]=true;
                }
                //for right
                if(curr->right && !visited[curr->right]){
                    q.push(curr->right);
                    visited[curr->right]=true;
;                }
                if(parent_track[curr] && !visited[parent_track[curr]]){
                    q.push(parent_track[curr]);
                    visited[parent_track[curr]]=true;
                }
            }
        }
        vector<int>res;
        while(!q.empty()){
            TreeNode*curr=q.front();
            q.pop();
            res.push_back(curr->val);
        }
        return res;
        
    }
};