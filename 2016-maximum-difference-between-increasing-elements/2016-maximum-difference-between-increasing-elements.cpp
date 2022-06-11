class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mx=-1;
        int i=0;
        int j=1;
        while(i<nums.size()-1){
            j=i+1;
            while(j<nums.size()){
                if(nums[j]>nums[i]){
                int diff=nums[j]-nums[i];
                
                if(diff>mx){
                    mx=diff;
                }
                }
                j++;
            }
            i++;
        }
        return mx;
    }
};