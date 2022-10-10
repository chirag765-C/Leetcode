class Solution {
public:

    vector<string> stringMatching(vector<string>& words) {
vector<string>ans;
        for(auto s:words){
            for(auto w:words){
                if(w==s){
                    continue;
                }
                if(w.find(s)!=-1){
                    ans.push_back(s);
                    break;
                }
            }
        }
        return ans;
    }
    
};