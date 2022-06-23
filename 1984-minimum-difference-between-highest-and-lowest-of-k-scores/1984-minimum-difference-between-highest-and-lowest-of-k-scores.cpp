class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
       int i=0;
        int j=0;
        sort(nums.begin(),nums.end());
        int mn=INT_MAX;
        while(j<nums.size()){
            if(j-i+1<k){
                j++;
                }
            else if(j-i+1==k){
              
                mn=min(mn,nums[j]-nums[i]);
                i++;
                j++;
            }
        }
        return mn;
    }
};