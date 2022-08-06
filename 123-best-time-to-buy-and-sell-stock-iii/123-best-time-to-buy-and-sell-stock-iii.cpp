class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int dp[n];
        for(int i=0;i<n;i++){
            dp[i]=0;
        }
        int ma=prices[n-1];
        int mi=prices[0];
        for(int i=n-2;i>=0;i--){
            if(prices[i]>ma)
                ma=prices[i];
            dp[i]=max(dp[i+1],ma-prices[i]);
        }
        for(int i=1;i<n;i++){
            if(prices[i]<mi)
                mi=prices[i];
            dp[i]=max(dp[i-1],dp[i]+prices[i]-mi);
        }
        return dp[n-1];
    }
};