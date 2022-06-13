class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        vector<bool>a(nums.size(),1);
        vector<bool>b(nums.size(),1);
        a[0]=true;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                a[i]=true;
            }
            else{
                a[i]=false;
            }
        }
        b[n-1]=true;
        for(int i=n-2;i>=0;i--){
            if(nums[i]>nums[i+1]){
                b[i]=true;
            }
            else{
                b[i]=false;
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]==true && b[i]==true){
                return i;
            }
        }
        return -1;
    }
};