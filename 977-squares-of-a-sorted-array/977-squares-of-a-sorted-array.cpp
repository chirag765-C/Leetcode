class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
 vector<int>v(nums.size());
        int k=nums.size()-1;
        int i=0;
        int j=nums.size()-1;
        while(k>=0){
            if(abs(nums[i])>abs(nums[j])){
                v[k]=nums[i]*nums[i];
                i++;
            }
            else{
                v[k]=nums[j]*nums[j];
                j--;
            }
            k--;
        }
        return v;
    }
};