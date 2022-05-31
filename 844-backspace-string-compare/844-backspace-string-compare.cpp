class Solution {
public:
    bool backspaceCompare(string s, string t) {
string str="";
        string ptr="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='#'){
                if(str.size()==0){
                    continue;
                }
                str.pop_back();
                continue;
            }
            str+=s[i];
        }
        for(int i=0;i<t.size();i++){
            if(t[i]=='#'){
                if(ptr.size()==0){
                    continue;
                }
                ptr.pop_back();
                continue;
            }
            ptr+=t[i];
        }
        return str==ptr;
        
    }
};