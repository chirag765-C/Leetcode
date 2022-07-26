class Solution {
public:
    bool tobinary(vector<int>nums,int l,int h,int target){
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]==target){
                return true;
            }
            if(nums[l]==nums[mid] and nums[h]==nums[mid]){
                l++;
                h--;
            }
            else if(nums[mid]>=nums[l]){
                if(target>=nums[l] and target<nums[mid]){
                    h=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            else {
                if(target>nums[mid] and target<=nums[h] ){
                    l=mid+1;
                }
                else{
                    h=mid-1;
                }
            }
        }
        return false;
    }
    bool search(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        return tobinary(nums,l,h,target);
    }
};