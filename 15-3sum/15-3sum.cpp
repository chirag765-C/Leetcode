class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<3){
            return {};
        }
    sort(nums.begin() , nums.end());    //Sorted Array
    vector<vector<int>>ans;
        for(int i=0;i<nums.size()-2;i++){
            if(i==0 || (i>0 && nums[i] != nums[i-1])){
                int lo=i+1;
                int h=nums.size()-1;
                int sum=0-nums[i];
                while(lo<h){
                    if(nums[lo]+nums[h]==sum){
                        ans.push_back({nums[i],nums[lo],nums[h]});
                        while(lo<h && nums[lo]==nums[lo+1]){
                            lo++;
                        }
                        while(lo<h && nums[h]==nums[h-1]){
                            h--;
                        }
                        lo++;
                        h--;
                    }
                    else if(nums[lo]+nums[h]<sum){
                            lo++;
                        }
                        
                    
                    else{
                        h--;
                    }
                    
                }
            }
        
    
    }
        return ans;
}
};