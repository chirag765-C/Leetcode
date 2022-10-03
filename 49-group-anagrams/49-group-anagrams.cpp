class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      map<map<char,int>,vector<string>>mp;
        for(string s:strs){
            map<char,int>sp;
            for(char ch:s){
                sp[ch]++;
            }
            mp[sp].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};