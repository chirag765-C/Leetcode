class Solution {
public:
    int numberOfSubstrings(string s) {
        int count=0;
        int ans=0;
        vector<int>v(3);
        for(int i=0;i<s.size();i++){
            v[s[i]-'a']++;
            while(v[0] and v[1] and v[2]){
                v[s[count]-'a']--;
                count++;
            }
            ans+=count;
            
        }
        return ans;
    }
};