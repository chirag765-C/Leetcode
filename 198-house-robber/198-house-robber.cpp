class Solution {
public:
    int tofind(vector<int>nums,int n,vector<int>&dp){
dp[0]=nums[0];
        for(int i=1;i<=n;i++){
            int take=nums[i];
            if(i>1){
             take+=dp[i-2];
            }
            int notpick=0+dp[i-1];
            dp[i]=max(take,notpick);
        }
        return dp[n];
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
     return tofind(nums,nums.size()-1,dp);
    
    }
};