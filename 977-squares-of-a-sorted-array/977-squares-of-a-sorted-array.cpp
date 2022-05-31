class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>num;
        for(int i=0;i<nums.size();i++){
            num.push_back(nums[i]*nums[i]);
        }
        sort(num.begin(),num.end());
        return num;
    }
};