class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& nums) {
        vector<int>copy=nums;
        sort(copy.begin(),copy.end());
        unordered_map<int,int>mp;
        int rank=1;
        for(int i=0;i<copy.size();i++){
            if(mp[copy[i]]){
                continue;
            }
            else{
            mp[copy[i]]=rank;
                rank++;
            }
        }
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            
        nums[i]=mp[nums[i]];
        }
        return nums;
    }
};