class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char>s;
        for(int i=0;i<allowed.size();i++){
            s.insert(allowed[i]);
        }
        int count=0;
        int mc=0;
       for(string &ch:words){
           count=0;
           for(int i=0;i<ch.size();i++){
               if(s.find(ch[i])!=s.end()){
                   count=1;
                   continue;
               }
               else{
                   count=0;
                   break;
               }
           
           }
           if(count==1){
               mc++;
           }
      
       }
        return mc;
    }
};