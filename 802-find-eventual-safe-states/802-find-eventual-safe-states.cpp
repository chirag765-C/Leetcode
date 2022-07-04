class Solution {
public:
    
    bool cycle(int s,vector<int>&vis,vector<int>&dfsvis,vector<vector<int>>&graph){
        vis[s]=1;
        dfsvis[s]=1;
        for(auto child:graph[s]){
            if(vis[child]==0){
                if(cycle(child,vis,dfsvis,graph)){
                    return true;
                }
            }
            else if(dfsvis[child]){
                return true;
            }
        }
        dfsvis[s]=0;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>ans;
        int n=graph.size();
        vector<int>vis(n,0),dfsvis(n,0);
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                cycle(i,vis,dfsvis,graph);
            }
        }
        for(int i=0;i<n;i++){
            if(dfsvis[i]==0){
                ans.push_back(i);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
   
    }
};