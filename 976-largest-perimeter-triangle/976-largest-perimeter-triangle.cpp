class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
  sort(nums.begin(),nums.end());
        int mx=0;
        for(int i=nums.size()-1;i-2>=0;i--){
            if(nums[i-1]+nums[i-2]>nums[i]){
                mx=max(mx,nums[i]+nums[i-1]+nums[i-2]);
            }
        }
        return mx==0?0:mx;
    }
};