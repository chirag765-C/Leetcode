class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int cnt=0;
        unordered_map<string,int>mp1;
        unordered_map<string,int>mp2;
        for(auto it:words1){
            mp1[it]++;
        }
        for(auto it:words2){
            mp2[it]++;
        }
        if(words1.size()<words2.size()){
            swap(words1,words2);
        }
        for(auto it:words2){
            if(mp1[it]==1 and mp2[it]==1){
                cnt++;
            }
        }
        return cnt;
  
    }
    
};