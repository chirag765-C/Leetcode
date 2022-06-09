class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n<=1){
            return n;
        }
      vector<int>nums(n+1);
        nums[0]=0;
        nums[1]=1;
        int mx=0;
        for(int i=2;i<=n;i++){
            int t=(i/2);
            if(i%2==0){
                nums[i]=nums[t];
            }
            else{
                
                nums[i]=nums[t]+nums[t+1];
                
            }
            mx=max(mx,nums[i]);
        }
        return mx;
    }
};