class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
int mx=INT_MIN;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=1;i<m-1;i++){
            
            for(int j=1;j<n-1;j++){
                int sum=0;
                sum=grid[i][j]+grid[i-1][j]+grid[i-1][j-1]+grid[i-1][j+1]+grid[i+1][j-1]+grid[i+1][j]+grid[i+1][j+1];
                mx=max(mx,sum);
            }
        }
        return mx;
    }
};