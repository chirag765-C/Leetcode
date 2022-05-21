class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size()-1;
       int reachable=0;
    if(nums.size()==1){
        return true;
    }
        if(nums[0]==0){
            return false;
        }
        for(int i=0;i<nums.size();i++){
            if(i>reachable){
                return false;
            }
            int j=i+nums[i];
            reachable=max(reachable,j);
             
        }
      
        return true;
    }
};