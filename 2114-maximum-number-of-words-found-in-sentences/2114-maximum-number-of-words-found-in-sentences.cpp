class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxcount=0;
      for(string s:sentences){
          s+=" ";
          int cnt=0;
          for(int j=0;j<s.size();j++){
              if(isspace(s[j])){
                  cnt++;
                  if(maxcount<cnt){
                      maxcount=cnt;
                  }
              }
          }
      }
        return maxcount;
    }
};