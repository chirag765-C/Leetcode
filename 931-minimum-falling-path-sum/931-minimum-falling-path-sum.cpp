class Solution {
public:
    int f(vector<vector<int>>&matrix){
         int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        for(int i=0;i<n;i++){
            dp[0][i]=matrix[0][i];
        }
        for(int i=1;i<m;i++){
            for(int j=0;j<n;j++){
                int s=matrix[i][j]+dp[i-1][j];
                int ld=1e8;
                int rd=1e8;
                if(j-1>=0){
                    ld=matrix[i][j]+dp[i-1][j-1];
                }
                if(j+1<n){
                    rd=matrix[i][j]+dp[i-1][j+1];
                }
                dp[i][j]=min(s,min(ld,rd));
            }
        }
        int mx=1e8;
        for(int i=0;i<n;i++){
            mx=min(mx,dp[m-1][i]);
        }
        return mx;
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
       
       int mx=f(matrix);
        return mx;
    }
};