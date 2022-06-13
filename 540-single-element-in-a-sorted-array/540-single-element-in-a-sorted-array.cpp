class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
   //binary search
        int l=0;
        int h=nums.size()-2;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]==nums[mid^1]){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return nums[l];
    }
};