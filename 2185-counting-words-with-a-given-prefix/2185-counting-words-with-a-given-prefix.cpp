class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
     int cnt=0;
        for(auto it:words){
            if(pref==it.substr(0,pref.size())){
                cnt++;
            }
        }
        return cnt;
    }
};