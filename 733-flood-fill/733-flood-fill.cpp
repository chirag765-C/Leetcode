class Solution {
public:
 
    void dfs(int x,int y,int col,int num,vector<vector<int>>&image){
        if(x<0 || y<0 || x>=image.size() || y>=image[0].size() || image[x][y]==col || image[x][y]!=num){
            return;
        }
        image[x][y]=col;
        dfs(x+1,y,col,num,image);
                dfs(x-1,y,col,num,image);

                dfs(x,y+1,col,num,image);
        dfs(x,y-1,col,num,image);

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        vector<vector<int>>ans;
        dfs(sr,sc,newColor,image[sr][sc],image);
        for(auto it:image){
            ans.push_back(it);
        }
        return ans;
    }
};