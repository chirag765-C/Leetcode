class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>>mp;
        for(auto edge:edges){
            mp[edge[0]].push_back(edge[1]);
            mp[edge[1]].push_back(edge[0]);
        }
        queue<int>q;
        vector<int>vis(n,0);
        q.push(source);
        vis[source]=1;
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            if(curr==destination){
                return 1;
            }
            for(auto &child:mp[curr]){
                if(vis[child]==0){
                    q.push(child);
                    vis[child]=1;
                }
            }
        }
        return false;
    }
};