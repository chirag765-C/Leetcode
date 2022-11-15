class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
     vector<vector<int>>ans;
        unordered_map<int,int>mp;
        for(auto it:items1){
            mp[it[0]]+=it[1];
        }
        for(auto it:items2){
            mp[it[0]]+=it[1];
        }
        for(auto it:mp){
            vector<int>v;
            v.push_back(it.first);
            v.push_back(it.second);
            ans.push_back(v);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};