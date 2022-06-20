class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>res;
        vector<string>v;
        tof(s,0,res,v);
        return res;
    }
    void tof(string s,int i,vector<vector<string>>&res,vector<string>&v){
        if(i==s.size()){
            res.push_back(v);
            return;
        }
        for(int j=i;j<s.size();j++){
            if(ispalindrome(s,i,j)){
                v.push_back(s.substr(i,j-i+1));
                tof(s,j+1,res,v);
                v.pop_back();
            }
        }
    }
    bool ispalindrome(string s,int l,int r){
        while(l<=r){
            if(s[l]!=s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};