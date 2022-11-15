class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            unordered_map<int,int>mp;
            int j=i+1;
            while(j<nums.size()){
            if(mp.find(nums[j])==mp.end()){
                int anti=(nums[i]+nums[j])/2;
                if(nums[j]-nums[i]==2*diff and mp.find(anti)!=mp.end()){
                    cnt++;
                }
            }
            
            mp[nums[j]]=1;
                j++;
            }
        }
        return cnt;
    }
};