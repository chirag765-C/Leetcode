class Solution {
public:
    bool backspaceCompare(string s, string t) {
string str="";
        string ptr="";
        int j=0;
        for(int i=0;i<s.size();i++){
            j=str.size();
            if( s[i]=='#'){
                if(j>0){
                str.pop_back();
                continue;
                }
                else if(j==0){
                    continue;
                }
            }
            str+=s[i];
        }
        j=0;
        for(int i=0;i<t.size();i++){
            j=ptr.size();
            if(t[i]=='#'){
                if(j>0){
                ptr.pop_back();
                continue;
                }
                else{
                    continue;
                }
            }
            ptr+=t[i];
        }
        return str==ptr;
        
    }
};