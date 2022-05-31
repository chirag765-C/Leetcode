class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      priority_queue<int,vector<int>,greater<int>>minh;  
        for(int i=0;i<nums.size();i++){
            minh.push(nums[i]*nums[i]);
        }
        int i=0;
     while(minh.size()>0){
         nums[i++]=minh.top();
         minh.pop();
     }
        return nums;
    }
};