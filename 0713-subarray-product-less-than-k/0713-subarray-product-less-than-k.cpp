class Solution {
public:
  
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
    int s=0;
        int count=0;
        int e=0;
        int p=1;
        while(e<nums.size()){
            p*=nums[e];
           while(s<nums.size() and p>=k){
               p=p/nums[s];
               s++;
           }
            if(p<k){
                count+=e-s+1;
            }
            e++;
        }
        return count;
    }
};