class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char,int>,vector<string>>mp;
        for(string s:strs){
            map<char,int>mp2;
        for(char ch:s){
            mp2[ch]++;
        }
            mp[mp2].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto it:mp){
            ans.push_back(it.second);
            
        }
        return ans;
    }
};