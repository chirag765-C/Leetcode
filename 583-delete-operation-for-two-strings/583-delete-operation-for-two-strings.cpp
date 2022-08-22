class Solution {
public:
    int tocheck(string x,string y,int m,int n,vector<vector<int>>&dp){
        for(int i=0;i<m+1;i++){
            dp[i][0]=0;
        }
        for(int j=0;j<n+1;j++){
            dp[0][j]=0;
        }
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(x[i-1]==y[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[m][n];
    }
    int minDistance(string word1, string word2) {
        int m=word1.size();
    int n=word2.size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        int x=tocheck(word1,word2,m,n,dp);
        int t1=m-x;
        int t2=n-x;
        return t1+t2;
        }
};