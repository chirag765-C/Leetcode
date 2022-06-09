class Solution {
public:
    vector<int>parent;
    int tofind(int x){
        return (parent[x]==x)?x:tofind(parent[x]);
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
   if(n-1>connections.size()){
       return -1;
   }
        parent.resize(n);
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
        for(auto it:connections){
            int a=tofind(it[0]);
            int b=tofind(it[1]);
            if(a!=b){
                parent[b]=a;
            }
        }
        int cc=0;
        for(int i=0;i<n;i++){
            if(parent[i]==i){cc++;}
        }
        return cc-1;
    }
};