class Solution {
public:
    int tocount(int n,vector<int>&dp){
      dp[0]=1;
        for(int i=1;i<=n;i++){
            if(i==1){
                dp[i]=dp[i-1];
            }
            else{
                dp[i]=dp[i-1]+dp[i-2];
            }
        }
        return dp[n];
    }
    int climbStairs(int n) {
       vector<int>dp(n+1,0);
        int x=tocount(n,dp);
        return x;
    }
};