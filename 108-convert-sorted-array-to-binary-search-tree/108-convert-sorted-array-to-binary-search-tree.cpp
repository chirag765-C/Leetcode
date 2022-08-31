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
 
    TreeNode*tomake(vector<int>nums,int l,int r){
     if(l>r){
         return NULL;
     }
        int mid=(l+r)/2;
       TreeNode*head=new TreeNode(nums[mid]);
        head->left=tomake(nums,l,mid-1);
        head->right=tomake(nums,mid+1,r);
        return head;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
      
        return tomake(nums,0,n-1);
    }
};