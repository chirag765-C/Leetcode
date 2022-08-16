class Solution {
public:
    int f(vector<vector<int>>&triangle,int m,int i,int j,vector<vector<int>>&dp){
        if(i==m-1){
            return triangle[i][j];
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int down,rdown;
         down=triangle[i][j]+f(triangle,m,i+1,j,dp);
         rdown=triangle[i][j]+f(triangle,m,i+1,j+1,dp);
        return dp[i][j]=min(down,rdown);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int m=triangle.size();
        vector<vector<int>>dp(m,vector<int>(m,-1));
        return f(triangle,m,0,0,dp);
    }
};