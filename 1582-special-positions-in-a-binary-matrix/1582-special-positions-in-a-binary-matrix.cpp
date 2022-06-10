class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
      int m=mat.size();
        int n=mat[0].size();
vector<int>row(m);
        vector<vector<int>>v;
        vector<int>col(n);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]){
                    v.push_back({i,j});
                    row[i]++;
                    col[j]++;
                }
            }
        }
        int ans=0;
        for(auto it:v){
            if(row[it[0]]==1 && col[it[1]]==1){
                ans++;
            }
        }
        return ans;
    }
};