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
    vector<string>ans;
    void tofind(TreeNode*root,string res){
        if(!root->left and !root->right){
            res+=to_string(root->val);
            ans.push_back(res);
            return;
        }
        res+=to_string(root->val);
        if(root->left){
                    tofind(root->left,res);

        }
        if(root->right){
        tofind(root->right,res);
            
        }
    }
    int sumRootToLeaf(TreeNode* root) {
        if(!root){
            return 0;
        }
        tofind(root,"");
        int sum=0;
        for(string s:ans){
            cout<<s<<endl;
        }
        for(string s:ans){
           
            int j=0;
            int n=s.size();
            for(int i=n-1;i>=0;i--){
                if(s[i]=='1'){
                    sum+=pow(2,j);
                }
                j++;
            }
            }
        
    return sum;
}
};