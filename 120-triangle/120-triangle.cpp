class Solution {
public:
    int tofind(vector<vector<int>>&triangle,int i,int j,int m,vector<vector<int>>&dp){
     if(i==m-1){
         return triangle[i][j];
     }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
    int down,rdown;
        down=triangle[i][j]+tofind(triangle,i+1,j,m,dp);
        rdown=triangle[i][j]+tofind(triangle,i+1,j+1,m,dp);
        return dp[i][j]=min(down,rdown);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int m=triangle.size();
        vector<vector<int>>dp(m,vector<int>(m,-1));
  int x=tofind(triangle,0,0,m,dp);
        return x;
    }
};