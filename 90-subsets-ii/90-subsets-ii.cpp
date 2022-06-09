class Solution {
public:
    vector<vector<int>>ans;
   set<vector<int>>st;
    void f(int num,int j,vector<int>&v,vector<int>nums){
        while(num>0){
            if((num&1)==1){
                v.push_back(nums[j]);
            }
            j++;
            num=num>>1;
        }
       st.insert(v);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
    for(int i=0;i<(1<<nums.size());i++){
                vector<int>v;

        f(i,0,v,nums);
        
    }
 for(auto it:st){
     ans.push_back(it);
 }      
        return ans;
    }
};