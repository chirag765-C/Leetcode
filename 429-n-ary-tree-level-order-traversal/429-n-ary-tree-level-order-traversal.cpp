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
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>ans;
        if(!root){
            return ans;
        }
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int sz=q.size();
            vector<int>v;
            while(sz>0){
                Node*curr=q.front();
                q.pop();
                for(Node*it:curr->children){
                    q.push(it);
                }
                sz--;
                v.push_back(curr->val);
                
            }
            ans.push_back(v);
            
        }
        return ans;
    }
};