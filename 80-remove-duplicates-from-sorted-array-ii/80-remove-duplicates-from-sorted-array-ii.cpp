class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
   int start,end,ans;
        start=end=ans=0;
        while(end<nums.size()){
        while(end<nums.size() and nums[start]==nums[end]){
            end++;
        }
            if(end-start<=2){
                ans+=end-start;
                start=end;
                
            }
            else{
                int cnt=end-start;
                while(start!=end){
                    if(cnt>2){
                           nums[start]=1e9;
                    cnt--;
                    }
                 start++;
                }
                ans+=2;
            }
            
            
        }
        sort(nums.begin(),nums.end());
        return ans;
    }
};