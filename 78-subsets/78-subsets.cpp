class Solution {
public:
     vector<vector<int>>ans;
   void tocheck(vector<int>nums,int i){
       vector<int>v;
       int j=0;
       while(i>0){
       if((i&1)==1){
           v.push_back(nums[j]);
       }    
           j++;
           i=i>>1;
       }
       ans.push_back(v);
       return;
   }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
       for(int i=0;i<(1<<n);i++){
           tocheck(nums,i);
       }
      return ans;
    }
};