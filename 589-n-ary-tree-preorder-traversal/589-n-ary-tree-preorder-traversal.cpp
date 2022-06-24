/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
      unordered_map<Node*,int>vis;
    vector<int>v;
    
    void dfs(Node*root){
        
        vis[root]=1;
         v.push_back(root->val);
        for(auto child:root->children){
            if(vis[child]==0){
                dfs(child);
            }
        }
       
        
    }
    vector<int> preorder(Node* root) {
        if(!root){
            return v;
        }
        dfs(root);
        return v;
    }
};