class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int idx=0;
        int mn=0;
        for(int i=0;i<nums.size();i++){
            if(mn<nums[i]){
                idx=i;
                mn=nums[i];
            }
        }
        for(int i=0;i<nums.size();i++){
            if(2*nums[i]>mn && i!=idx){
                return -1;
            }
        }
        return idx;
        
    }
};