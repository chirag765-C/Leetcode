class Solution {
public:
    int minSteps(string s, string t) {
     
    int cnt=0;
        vector<int>v(26,0);
        for(int i=0;i<s.size();i++){
            v[s[i]-'a']++;
            v[t[i]-'a']--;
        }
        for(int it:v){
            if(it>0){
            cnt+=abs(it);
            }
        }
        return cnt;
    }
};