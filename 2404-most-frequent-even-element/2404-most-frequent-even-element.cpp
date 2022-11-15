class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int mn=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
            mp[nums[i]]++;
                
            }
        }
        int node=-1;
        for(auto it:mp){
            cout<<it.second<<endl;
            if(mn<it.second){
                mn=it.second;
                node=it.first;
            }
            else if(mn==it.second){
                if(node>it.first){
                    node=it.first;
                }
            }
        }
        return node;
        
        
    }
};