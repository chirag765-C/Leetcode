//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<pair<int,int>>aj[V];
        vector<int>dis(V,0);
        for(int i=0;i<V;i++){
            dis[i]=INT_MAX;
        }
        dis[S]=0;
        for(int i=0;i<V;i++){
            for(auto it:adj[i]){
                aj[i].push_back({it[0],it[1]});
            }
        }
        queue<pair<int,int>>q;
        q.push({S,0});
        while(!q.empty()){
            int curr=q.front().first;
            int d=q.front().second;
            q.pop();
            for(auto child:aj[curr]){
                int nodedis=child.second;
                int v=child.first;
                if(d+nodedis<dis[v]){
                    dis[v]=d+nodedis;
                    q.push({v,dis[v]});
                }
            }
        }
        return dis;
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}


// } Driver Code Ends