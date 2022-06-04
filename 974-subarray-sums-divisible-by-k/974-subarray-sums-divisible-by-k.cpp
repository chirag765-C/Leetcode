class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
       mp[0]=1;
        int ans=0,currsum=0;
        for(int i=0;i<nums.size();i++){
            currsum+=nums[i];
        int rem=currsum%k;
            if(rem<0){
                rem+=k;
            }
            if(mp[rem]){
                ans+=mp[rem];
            }
            mp[rem]++;
        }
        return ans;
    }
};