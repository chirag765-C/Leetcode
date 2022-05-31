class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
    priority_queue<int,vector<int>,greater<int>>minh(nums.begin(),nums.end());
        while(k--){
            int curr=minh.top();
            minh.pop();
            minh.push(curr*-1);
        }
        int sum=0;
        while(!minh.empty()){
            sum+=minh.top();
            minh.pop();
        }
        return sum;
    }
};