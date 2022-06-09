class Solution {
public:
    vector<vector<int>>ans;
    void f(int i,int n,int k,vector<int>&v){
    if(v.size()==k){
        ans.push_back(v);
        return;
    }
        for(int ind=i;ind<=n;ind++){
            v.push_back(ind);
           
            f(ind+1,n,k,v);
            v.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
      vector<int>nums;
        for(int i=1;i<=n;i++){
            nums.push_back(i);
        }
        vector<int>v;
         f(1,n,k,v);
        return ans;
    }
};