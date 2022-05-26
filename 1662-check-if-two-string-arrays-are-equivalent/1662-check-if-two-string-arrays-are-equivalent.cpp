class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
     string t1="";
        string t2="";
        for(string ch:word1){
            t1+=ch;
        }
        for(string ch:word2){
            t2+=ch;
        }
        return t1==t2;
    }
};