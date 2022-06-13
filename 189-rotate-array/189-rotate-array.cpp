class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //reverse till 0 to n-k
        //reverse from n-k to n
        //rotate 0 to n
        
        int n=nums.size();
        if(n==1){
            return;
        }
        

        if(n<k){
            k=k%n;
        }
        
        k=abs(n-k);
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        reverse(nums.begin(),nums.end());
        
        
    }
};