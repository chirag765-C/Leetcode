class Solution {
public:
vector<vector<int>>ans;
    void tofind(int i,int n,int k,vector<int>v){
        if(v.size()==k){
            ans.push_back(v);
            
        }
        for(int ind=i;ind<=n;ind++){
            v.push_back(ind);
            tofind(ind+1,n,k,v);
            v.pop_back();
        }
        
    }
    vector<vector<int>> combine(int n, int k) {
   vector<int>v;
        tofind(1,n,k,v);
        return ans;
    } 
};