class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int>v;
     
      int m=nums.size();
        int n=nums[0].size();
       unordered_map<int,int>mp;
        for(auto vec:nums){
            for(auto num:vec){
                mp[num]++;
            }
        }
        for(auto it:mp){
            if(it.second==m){
                v.push_back(it.first);
            }
        }
        if(v.size()==0){
            return v;
        }
        sort(v.begin(),v.end());
       
        return v;
    }
};