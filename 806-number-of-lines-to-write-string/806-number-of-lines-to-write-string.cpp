class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
    int count=0;
        int num=0;
        for(int i=0;i<s.size();i++){
            int c=s[i]-'a';
            
                num=num+widths[c];
          
              if(num>100){
                  num=widths[c];
                  count++;
              }
         
             
        }
        count++;
        return {count,num};
    }
};