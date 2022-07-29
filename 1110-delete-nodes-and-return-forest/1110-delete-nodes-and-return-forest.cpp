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
    unordered_set<int>st;
            vector<TreeNode*>ans;

void postorder(TreeNode*&root){
       if(root){
    postorder(root->left);
           postorder(root->right);
           if(st.find(root->val)!=st.end()){
               if(root->left!=NULL){
                   ans.push_back(root->left);
               }
               if(root->right!=NULL){
                   ans.push_back(root->right);
               }
               root=NULL;
               delete root;
           }
       }
    return;
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        for(int num:to_delete){
            st.insert(num);
        }
        postorder(root);
      if(root){
          ans.push_back(root);
      }
        return ans;
    }
};