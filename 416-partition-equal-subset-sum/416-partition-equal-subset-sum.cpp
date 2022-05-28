class Solution {
public:
    bool tosolve(vector<int>nums,int sum){
     
        
            int n=nums.size();
           bool t[n+1][sum+1];
            
            for(int i=0;i<sum+1;i++){
                t[0][i]=false;
            }
            for(int i=0;i<n+1;i++){
                t[i][0]=true;
            }
            for(int i=1;i<n+1;i++){
                for(int j=1;j<sum+1;j++){
                    if(nums[i-1]<=j){
                        t[i][j]=t[i-1][j-nums[i-1]] || t[i-1][j];
                    }
                    else if(j<nums[i-1]){
                        t[i][j]=t[i-1][j];
                    }
                }
            }  
            return t[n][sum];
    
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        return (sum%2==0 ) && tosolve(nums,sum/2);
        
              
    }
};