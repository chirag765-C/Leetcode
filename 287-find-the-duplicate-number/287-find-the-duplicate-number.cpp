class Solution {
public:
    int findDuplicate(vector<int>& nums) {
for(int i=0;i<nums.size();i++){
    int m=abs(nums[i])-1;
    if(nums[m]<0){
        return abs(nums[i]);
    }
    nums[m]=nums[m]>0?-nums[m]:nums[m];
    
}
        return -1;
        
    }
};