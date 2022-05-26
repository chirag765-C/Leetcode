class Solution {
public:
    string reverseStr(string s, int k) {
        if(s.size()<k){
            reverse(s.begin(),s.end());
            return s;
        }
        int i=0;
        while(i<s.size()){
            
            reverse(s.begin()+i , s.begin()+i+k >s.end() ? s.end() : s.begin()+i+k);
            
            i=i+2*k;
        }
        return s;
        
    }
};