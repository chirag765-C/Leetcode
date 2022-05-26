class Solution {
public:
    bool tocheck(int s,int c,vector<int>&col,vector<int>&vis,vector<vector<int>>&graph){
        vis[s]=1;
        col[s]=c;
        for(int child:graph[s]){
            if(vis[child]==0){
                if(tocheck(child,c^1,col,vis,graph)==false){
                    return false;
                }
            }
            else if(col[s]==col[child]){
                return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        
     vector<int>col(graph.size(),0);
        vector<int>vis(graph.size(),0);
        int count=0;
       for(int i=0;i<graph.size();i++){
           if(vis[i]==0 && tocheck(i,0,col,vis,graph)==false){
               return false;
           }
       }
        return true;
    }
};