class Solution {
public:
    string shortestCompletingWord(string l, vector<string>& words) {
        string res="";
         transform(l.begin(), l.end(), l.begin(), ::tolower);
        string t=l;
        for(char ch:t){
            if(ch>='a' && ch<='z'){
                
                res+=ch;
            }
        }
        string ans;
        int mxl=INT_MAX;
        vector<int>harsh(26,0);
        for(int i=0;i<res.size();i++){
            harsh[res[i]-'a']++;
        }
        for(string s:words){
            vector<int>aksh(26,0);
            for(int i=0;i<s.size();i++){
                aksh[s[i]-'a']++;
            }
            bool complete=true;
            for(int i=0;i<26;i++){
                if(aksh[i]<harsh[i]){
                    complete=false;
                    break;
                }
            }
            if(complete && s.size()<mxl){
                ans=s;
                mxl=s.size();
            }
        }
return ans;
    }
};