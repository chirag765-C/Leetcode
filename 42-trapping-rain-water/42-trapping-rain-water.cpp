class Solution {
public:
    int trap(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int sum=0;
        int mxl=0;
        int mxr=0;
        while(left<=right){
            if(height[left]<=height[right]){
                if(height[left]>=mxl){
                    mxl=height[left];
                }
                else{
                    sum+=mxl-height[left];
                }
                left++;
            }
            else{
                if(height[right]>=mxr){
                    mxr=height[right];
                }
                else{
                    sum+=mxr-height[right];
                    
                }
                right--;
            }
        }
        return sum;
    }
};