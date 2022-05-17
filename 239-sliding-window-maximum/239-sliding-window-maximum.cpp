class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    deque<int>q;
        vector<int>v;
        int i=0,j=0;
        int n=nums.size();
        while(j<n)
        {
            while(q.size()>0 && nums[j]>q.back()){
                q.pop_back();
            }
            q.push_back(nums[j]);
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                v.push_back(q.front());
                if(nums[i]==q.front()){
                    q.pop_front();
                }
                i++;
                j++;
            }
        }
        return v;
        
    }
};