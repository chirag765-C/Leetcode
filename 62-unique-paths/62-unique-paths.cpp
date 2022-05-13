class Solution {
public:
    int mod=int(1e9+7);
   
    int uniquePaths(int m, int n) {
 
      vector<vector<int>>dp(m,vector<int>(n,-1));
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(i==0 || j==0){
                    dp[i][j]=1;
                }
                
                int down,right;
                if(i>0){
                    down=dp[i-1][j];
                }
                if(j>0){
                    right=dp[i][j-1];
                }
                dp[i][j]=down+right;
            }
        }
        return abs(dp[m-1][n-1]);
    }
};