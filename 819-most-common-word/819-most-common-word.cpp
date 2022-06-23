class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
      unordered_map<string,int>ban;
        for(int i=0;i<banned.size();i++){
            ban[banned[i]]++;
        }
        
        string ans="";
        unordered_map<string,int>mp;
        int mx=0;
        for(int i=0;i<paragraph.size();i++){
            string word="";
            while(i<paragraph.size() && isalpha(paragraph[i])){
                word.push_back(tolower(paragraph[i]));
                i++;
                
            }
            if(word!="" && ban.find(word)==ban.end()){
                mp[word]++;
                if(mx<mp[word]){
                    mx=mp[word];
                    ans=word;
                }
            }
            
        }
        return ans;
        
    }
};