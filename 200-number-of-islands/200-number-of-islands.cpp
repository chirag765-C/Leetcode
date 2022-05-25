class Solution {
public:
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
   
    void bfs(int x,int y,vector<vector<char>>&grid){
      grid[x][y]='0';
        queue<pair<int,int>>q;
        q.push({x,y});
        while(!q.empty()){
            int currx=q.front().first;
            int curry=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int newx=currx+dx[i];
                int newy=curry+dy[i];
                if(newx<0 || newx>=grid.size() || newy<0 || newy>=grid[0].size() || grid[newx][newy]=='0'){
                 continue;
                }
                q.push({newx,newy});
                grid[newx][newy]='0';
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
      int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if( grid[i][j]=='1'){
                        count++;
                   bfs(i,j,grid);
                
                }
            }
        }
        return count;
    }
};