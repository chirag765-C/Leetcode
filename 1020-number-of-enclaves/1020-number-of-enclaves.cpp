class Solution {
public:
    bool isvalid(int i,int j,vector<vector<int>>&grid,int m,int n){
        if(i>=0 && i<m && j>=0 && j<n && grid[i][j]==1){
            return true;
        }
        return false;
    }
    void dfs(int i,int j,vector<vector<int>>&grid,int m,int n){
        grid[i][j]=0;
        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
        for(int k=0;k<4;k++){
            int nx=i+dx[k];
            int ny=j+dy[k];
            if(isvalid(nx,ny,grid,m,n)){
                dfs(nx,ny,grid,m,n);
            }
        }
    }
    int cnt(vector<vector<int>>grid){
        int cnt=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    cnt++;
                }
            }
        }
        return cnt;
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            int j=0;
            if(grid[i][j]==1){
                dfs(i,j,grid,m,n);
            }
            j=n-1;
            if(grid[i][j]==1){
                dfs(i,j,grid,m,n);
            }
        }
        
        
        for(int i=0;i<n;i++){
            int j=0;
            if(grid[j][i]==1){
                dfs(j,i,grid,m,n);
                
            }
            j=m-1;
            if(grid[j][i]==1){
                dfs(j,i,grid,m,n);
            }
        }
        return cnt(grid);
    }
};