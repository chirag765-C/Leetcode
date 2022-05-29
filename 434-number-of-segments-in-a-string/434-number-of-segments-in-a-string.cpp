class Solution {
public:
    int countSegments(string s) {
        if(s.size()==0){
            return 0;
        }
        stack<string>st;
        int cnt=0;
                   string t="";

        for(int i=0;i<s.size();i++){
            if(!isspace(s[i])){
                t+=s[i];
            }
            else{
                if(t!=""){
                st.push(t);
                }
                t="";
            }
            if(i==s.size()-1){
                if(t!=""){
                st.push(t);
                }
            }
        }
        return st.size();
    }
};