class Solution {
public:
   
 int first=-1;
    int last=-1;
    void tofindlower(vector<int>&nums,int target){
        int l=0;
        int h=nums.size()-1;
        //lower bound
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]==target){
                first=mid;
                h=mid-1;
            }
            else if(nums[mid]>target){
                h=mid-1;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
        }
    }
    void tofindupper(vector<int>&nums,int target){
        int l=0;
        int h=nums.size()-1;
        //lower bound
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]==target){
                last=mid;
                l=mid+1;
            }
            else if(nums[mid]>target){
                h=mid-1;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
        }
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v;
 if(nums.size()==0){
     return {-1,-1};
     
 }
        tofindlower(nums,target);
        tofindupper(nums,target);
      v.push_back(first);
        v.push_back(last);
        return v;
        
    }
};