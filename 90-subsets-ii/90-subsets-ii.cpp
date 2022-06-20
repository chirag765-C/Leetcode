class Solution {
public:
    vector<vector<int>>ans;
   set<vector<int>>st;
  void tofind(int i,vector<int>nums,vector<int>&v){
  st.insert(v);
      for(int j=i;j<nums.size();j++){
          v.push_back(nums[j]);
          tofind(j+1,nums,v);
          v.pop_back();
      }
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