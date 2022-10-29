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
 void tofind(Node*root){
     queue<Node*>q;
     q.push(root);
     while(q.size()>0)
     {
         int sz=q.size();
         while(sz--){
             Node*curr=q.front();
             q.pop();
             if(sz!=0){
                 curr->next=q.front();
             }
             if(curr->left){
                 q.push(curr->left);
             }
             if(curr->right){
                 q.push(curr->right);
             }
         }
         
     }
 }
    Node* connect(Node* root) {
        if(!root){
            return root;
        }
tofind(root);
        return root;
    }
    
};