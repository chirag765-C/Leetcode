class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
  int ans=0;
        int j=-1;
        int i=0;
        int cnt=0;
        while(i<nums.size()){
            if(nums[i]==0){
                cnt++;
            }
            while(cnt>k){
                j++;
                if(nums[j]==0){
                    cnt--;
                }

            }
            int len=i-j;
            if(len>ans){
                ans=len;
            }
            i++;
        }
        return ans;
    }
};