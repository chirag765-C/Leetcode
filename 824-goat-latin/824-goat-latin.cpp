class Solution {
public:
    bool isvowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
          c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
            return true;
        }
        return false;
    }
    string toGoatLatin(string sentence) {
        string ans;
        int count=1;
        char add_char='a';
        sentence+=" ";
        for(int i=0;i<sentence.size();i++){
            string word="";
            char ch=sentence[i];
            if(!isspace(ch)){
            if(isvowel(ch)){
               
                while(!isspace(sentence[i])){
                    ch=sentence[i];
                    word+=ch;
                    i++;
                }
                word+="ma";
                int cnt=count;
                while((cnt)--){
                    word+=add_char;
                }
                ans+=word;
                ans+=" ";
                count++;
                
            }
            else{
                i++;
                while(!isspace(sentence[i])){
                    word+=sentence[i];
                    i++;
                }
                                

                word+=ch;
                word+="ma";
                int cnt=count;
                while((cnt)--){
                    word+=add_char;
                }
                
                ans+=word;
                ans+=" ";
                count++;
            }
            }
        }
        ans.pop_back();
        return ans;
    }
};