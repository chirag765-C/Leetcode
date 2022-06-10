class Solution {
public:
    vector<int>parent;
    int tofind(int x){
        return parent[x]==x?x:tofind(parent[x]);
    }
    int findCircleNum(vector<vector<int>>& g) {
        int m=g.size();
        int n=g[0].size();
    parent.resize(m);
        for(int i=0;i<m;i++){
            parent[i]=i;
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i!=j && g[i][j]){
                    int a=tofind(i);
                    int b=tofind(j);
                    if(a!=b){
                        parent[b]=a;
                    }
                }
            }
        }
        int cnt=0;
        for(int i=0;i<m;i++){
            if(parent[i]==i){
                cnt++;
            }
        }
        return cnt;
    }
};