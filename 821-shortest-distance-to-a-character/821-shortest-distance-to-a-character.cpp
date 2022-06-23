class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
     vector<int>v;
      
        for(int i=0;i<s.size();i++){
            if(s[i]==c){
                v.push_back(i);
            }
        }
     
        int n=s.size();
        vector<int>ans;
        for(int i=0;i<s.size();i++){
              int mx=INT_MAX;
            for(int j=0;j<v.size();j++){
                int diff=abs(v[j]-i);
                
                  mx=min(mx,diff);    
                
              
            }
            ans.push_back(mx);
        }
        return ans;
    }
};