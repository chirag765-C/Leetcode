class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
   unordered_map<char,int>mp;
        for(auto &it:jewels){
            mp[it]++;
        }
        int cnt=0;
        for(auto &it:stones){
            if(mp.find(it)!=mp.end()){
                cnt++;
            }
        }
        return cnt;
    }
};