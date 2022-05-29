class Solution {
public:
    bool rotateString(string s, string goal) {
     string t=s;
        for(int i=1;i<s.size();i++){
        reverse(t.begin(),t.begin()+1);
        reverse(t.begin()+1,t.end());
        reverse(t.begin(),t.end());
        if(t==goal){
            return true;
        }
        }
        return false;
    }
};