class Solution {
public:
    int maxArea(vector<int>& height) {
int n=height.size();
        int i=0;
        int j=n-1;
        int mx=INT_MIN;
        // int mn=INT_MAX:
        while(i<j){
            int m=min(height[i],height[j]);
            mx=max(mx,m*(j-i));
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return mx;
    }
};