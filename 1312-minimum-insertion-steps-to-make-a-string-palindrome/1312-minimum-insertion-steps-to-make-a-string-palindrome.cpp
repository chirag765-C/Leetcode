class Solution {
public:
  
    int f(string x,string y,int m,vector<vector<int>>&dp){
        for(int i=0;i<m+1;i++){
            dp[i][0]=0;
            dp[0][i]=0;
            
        }
        for(int i=1;i<m+1;i++){
            for(int j=1;j<m+1;j++){
                if(x[i-1]==y[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[m][m];
    }
    int minInsertions(string s) {
    int m=s.size();
        string y=s;
        reverse(y.begin(),y.end());
        vector<vector<int>>dp(m+1,vector<int>(m+1,-1));
        int x=f(s,y,m,dp);
        return m-x;
    }
};