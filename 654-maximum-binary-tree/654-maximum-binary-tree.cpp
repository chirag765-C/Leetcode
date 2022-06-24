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
    
    TreeNode* helper(vector<int> nums, int start, int end)
    {
        if(start >= end)
            return NULL;
        int maxm = INT_MIN;
        int pos;
        for(int i = start; i < end; i++)
        {
            if(nums[i] > maxm)
            {
                maxm = nums[i];
                pos = i;
            }
        }
        TreeNode *node = new TreeNode(maxm);
        node -> left = helper(nums, start, pos);
        node -> right = helper(nums, pos + 1, end); 
        return node;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.size() == 1)
        {
            TreeNode *node = new TreeNode(nums[0]);
            return node;
        }
        int n = nums.size();
        int maxm = INT_MIN;
        int pos;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] > maxm)
            {
                maxm = nums[i];
                pos = i;
            }
        }
        TreeNode *node = new TreeNode(maxm);
        node -> left = helper(nums, 0, pos);
        node -> right = helper(nums, pos + 1, n); 
        return node;
    }
};