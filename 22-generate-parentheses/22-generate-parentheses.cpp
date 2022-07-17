class Solution {
public:
    void tosolve(int n ,int oc,int cc,vector<string>&s,string ans){
        if(oc==n && cc==n){
            s.push_back(ans);
            return;
        }
        if(oc<n){
            tosolve(n,oc+1,cc,s,ans+'(');
        }
        if(cc<oc){
            tosolve(n,oc,cc+1,s,ans+')');
        }
        
    }
    vector<string> generateParenthesis(int n) {
        
        vector<string>s;
        string ans;
        tosolve(n,0,0,s,ans);
        return s;
    }
};