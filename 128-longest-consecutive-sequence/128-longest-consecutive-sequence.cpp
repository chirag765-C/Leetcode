class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int mx=0;
       for(int num:nums){
           if(s.count(num-1)==0){
              int cnt=1;
               while(s.count(num+cnt)>0){
                   cnt++;
               }
               mx=max(mx,cnt);
           }
       }
        return mx;
    }
};