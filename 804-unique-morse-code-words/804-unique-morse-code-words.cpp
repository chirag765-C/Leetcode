class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string ch[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string>s;
        for(auto &str:words){
            string t="";
            for(int i=0;i<str.size();i++){
                t+=ch[str[i]-'a'];
            }
          s.insert(t);
        }
        int cnt=0;
        if(s.size()==0){
            return 0;
        }
        return s.size();
        
        
    }
};