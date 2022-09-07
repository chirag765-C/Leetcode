class Solution {
public:
    // bool tocheck(vector<int>)
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
int n=rooms.size();
        queue<int>q;
        q.push(0);
        vector<int>vis(n,0);
        vis[0]=1;
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            
            for(auto child:rooms[curr]){
                 if(vis[child]==0){
                vis[child]=1;
                     q.push(child);
            }
            }
           
            
        }
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                return false;
            }
            
        }
        return true;
        
    }
};