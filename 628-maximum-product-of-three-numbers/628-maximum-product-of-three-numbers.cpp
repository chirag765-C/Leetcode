class Solution {
public:
    
    int maximumProduct(vector<int>& nums) {
sort(nums.begin(),nums.end());
        int n=nums.size();
        int first=nums[n-1]*nums[n-2]*nums[n-3];
        int f=nums[0]*nums[1];
        int pro=f*nums[n-1];
        return max(pro,first);
    }
};