class Solution {
public:
    int f(string x,string y,int i,int j,vector<vector<int>>&dp){
      int m=x.size();
        int n=y.size();
      for(int i=1;i<x.size()+1;i++){
          for(int j=1;j<y.size()+1;j++){
              if(x[i-1]==y[j-1]){
             dp[i][j]= dp[i-1][j-1];
        }
        //insert delete and replace operation
              else{
                         dp[i][j]= 1+ min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]));

              }
          }
      }
        return dp[m][n];
        
    }
    int minDistance(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
                vector<vector<int>>dp(m+1,vector<int>(n+1,-1));

         for(int i=0;i<word1.size()+1;i++){
           dp[i][0]=i;
       }
        for(int j=0;j<word2.size()+1;j++){
            dp[0][j]=j;
        }
        return f(word1,word2,m,n,dp);
    }
};