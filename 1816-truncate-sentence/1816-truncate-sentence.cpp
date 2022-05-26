class Solution {
public:
    string truncateSentence(string s, int k) {
        string newstring;
        int cnt=0;
        for(int i=0;i<s.size();i++){
         
            if(isspace(s[i])){
               ++cnt;
                if(cnt==k){
                    newstring+="";
                    break;
                }
                newstring+=" ";
               
             
            }
          else{
              newstring+=s[i];
          }
        }
        return newstring;
    }
};