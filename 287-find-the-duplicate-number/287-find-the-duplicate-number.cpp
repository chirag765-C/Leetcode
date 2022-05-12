class Solution {
public:
    int findDuplicate(vector<int>& nums) {
int idx=0;
        int num=nums[0];
        while(nums[idx]!=-1){
            num=nums[idx];
            nums[idx]=-1;
            idx=num;
        }
        return num;
        
    }
};