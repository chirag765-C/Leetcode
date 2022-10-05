class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        unordered_set<string>st;
        vector<string>v;
        v.push_back(words[0]);
        string t=words[0];
      sort(t.begin(),t.end());
        st.insert(t);
        for(int i=1;i<words.size();i++){
            string t=words[i];
            sort(t.begin(),t.end());
            string last=words[i-1];
            sort(last.begin(),last.end());
            if(t==last){
                continue;
            }
            else{
                v.push_back(words[i]);
            }
        }
        return v;
    }
};