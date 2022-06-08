class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mx=INT_MIN;
        int mn=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(mx<nums[i]){
                mx=nums[i];
            }
            if(mn>nums[i]){
                mn=nums[i];
            }
        }
        int t=mx-mn-2*k;
        if(t<0){
            return 0;
        }
        return t;
    }
};