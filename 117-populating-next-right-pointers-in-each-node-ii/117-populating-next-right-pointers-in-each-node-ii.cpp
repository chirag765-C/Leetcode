/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root){
            return NULL;
        }
        queue<Node*>q;
        q.push(root);
        Node*res=root;
        while(!q.empty()){
            int sz=q.size();
             root=q.front();
                q.pop();
            if(res==NULL){
                res=root;
            }
            if(root->left){
                q.push(root->left);
            }
            if(root->right){
                q.push(root->right);
            }
            sz--;
            while(sz>0){
                Node*t=q.front();
                q.pop();
                if(t->left){
                    q.push(t->left);
                }
                if(t->right){
                    q.push(t->right);
                }
              root->next=t;
            root=t;
                sz--;
             
            }
            root->next=NULL;
            
        }
        return res;
    }
};