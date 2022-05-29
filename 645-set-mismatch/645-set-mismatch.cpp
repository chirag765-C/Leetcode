class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
vector<int>v(2);
        vector<int>arr(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            arr[nums[i]-1]++;
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]==2){
                v[0]=i+1;
            }
            if(arr[i]==0){
                v[1]=i+1;
            }
        }
        return v;
    }
};