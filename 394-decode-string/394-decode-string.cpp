class Solution {
public:
   string decode(string &s,int &i){
       string result;
       while(i<s.size() and s[i]!=']'){
           if(isdigit(s[i]) ){
                          int k=0;

               while(i<s.size() and isdigit(s[i])){
                     k=k*10+s[i++]-'0';
                   
               }
               //starting bracker
               i++;
               string r=decode(s,i);
               while(k-->0){
                   result+=r;
                   
                   
               }
               
             // for last bracket
               i++;
           }
           else{
               result+=s[i++];
               
           }
       }
       return result;
   }
    string decodeString(string s) {
      int i=0;
        return decode(s,i);
    }
};