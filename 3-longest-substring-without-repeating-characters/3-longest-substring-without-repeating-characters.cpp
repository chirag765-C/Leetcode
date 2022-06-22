class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int i=0;
        int j=0;
        int mx=0;
        while(j<s.size()){
            if(st.count(s[j])==0){
                st.insert(s[j]);
                int n=st.size();
                mx=max(mx,n);
                j++;
            }
            else{
                st.erase(s[i]);
                i++;
            }
        }
        return mx;
    }
};