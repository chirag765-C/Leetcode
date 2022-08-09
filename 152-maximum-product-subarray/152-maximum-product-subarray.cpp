class Solution {
public:
    int maxProduct(vector<int>& nums) {
int curr=nums[0];
        int ma=curr;
        int mi=curr;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                swap(ma,mi);
            }
            ma=max(nums[i],ma*nums[i]);
            mi=min(nums[i],mi*nums[i]);
            curr=max(curr,ma);
        }
        return curr;
    }
};