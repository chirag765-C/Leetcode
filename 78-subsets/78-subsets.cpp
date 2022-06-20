class Solution {
public:
    vector<vector<int>>ans;
    void tofind(int i,vector<int>nums,vector<int>&v){
        if(i==nums.size()){
            ans.push_back(v);
            return;
        }
       
            v.push_back(nums[i]);
            tofind(i+1,nums,v);
            v.pop_back();
         tofind(i+1,nums,v);
        }
    
    vector<vector<int>> subsets(vector<int>& nums) {
     vector<int>v;
        tofind(0,nums,v);   
        
        return ans;
    }
};