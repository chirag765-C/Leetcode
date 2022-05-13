class Solution {
public:
    int mod=int(1e9+7);
    int tocheck(int m ,int n,vector<vector<int>>&dp){
   for(int i=1;i<m;i++){
       for(int j=1;j<n;j++){
           dp[i][j]=dp[i-1][j]+dp[i][j-1];
       }
   }
        return dp[m-1][n-1];
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,1));
      return   tocheck(m,n,dp);
    }
};