class Solution {
public:
    int f(string x,string y,int i,int j,vector<vector<int>>&dp){
        if(i==0){
            return j;
        }
        if(j==0){
            return i;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(x[i-1]==y[j-1]){
            return dp[i][j]= f(x,y,i-1,j-1,dp);
        }
        //insert delete and replace operation
        return dp[i][j]= 1+ min(f(x,y,i,j-1,dp),min(f(x,y,i-1,j,dp),f(x,y,i-1,j-1,dp)));
    }
    int minDistance(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
        if(m==0 and n==0){
            return 0;
        }
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return f(word1,word2,m,n,dp);
    }
};