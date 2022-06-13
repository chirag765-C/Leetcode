class Solution {
public:
    string decodestring(string &s,int &i){
        string result;
        while(i<s.size() && s[i]!=']'){
            if(isdigit(s[i])){
                int k=0;
                while(i<s.size() && isdigit(s[i])){
                    k=k*10 + s[i++]-'0';
                }
                i++;//for opening bracket skip
                string ans=decodestring(s,i);
                while(k-->0){
                    result+=ans;
                }
                i++;//for closing bracket skip
            }
            else{
                result+=s[i++];
            }
        }
        return result;
    }
    string decodeString(string s) {
      int i=0;
        return decodestring(s,i);
    }
};