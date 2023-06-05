//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        // code here
        vector<int>revadj[V];
        vector<int>ans;
        queue<int>q;
        int in[V]={0};
        for(int i=0;i<V;i++){
            for(auto it:adj[i]){
                revadj[it].push_back(i);
                in[i]++;
                
            }
        }
        for(int i=0;i<V;i++){
            if(in[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            ans.push_back(curr);
            for(auto child:revadj[curr]){
                in[child]--;
                if(in[child]==0){
                q.push(child);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends