class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=1;i<nums.size();i++){
            int sum1=nums[i]+nums[i-1];
           if(mp.find(sum1)!=mp.end()){
               return true;
           }
            else{
            mp[sum1]=1;
            }
        }
        return false;
    }
};