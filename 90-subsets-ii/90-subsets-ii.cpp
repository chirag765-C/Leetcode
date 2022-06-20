class Solution {
public:
    vector<vector<int>>ans;
   set<vector<int>>st;
  void tofind(int i,vector<int>nums,vector<int>&v){
      if(i==nums.size()){
          st.insert(v);
          return;
      }
      v.push_back(nums[i]);
      tofind(i+1,nums,v);
      v.pop_back();
      tofind(i+1,nums,v);
      
  }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>v;
    tofind(0,nums,v);
 for(auto it:st){
     ans.push_back(it);
 }      
        return ans;
    }
};