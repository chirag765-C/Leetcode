class Solution {
public:
    bool validPalindrome(string s) {
   int i=0;
        int j=s.size()-1;
        int cnt1=0;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                i++;
                cnt1++;
            }
            if(cnt1>1){
                break;
            }
        }
        int cnt2=0;
        i=0;
        j=s.size()-1;
        while(i<j)
        {
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                j--;
                cnt2++;
            }
            if(cnt2>1){
                break;
            }
            
        } 
    if(cnt1==1 || cnt2==1){
        return true;
    }
        if(cnt1==0 || cnt2==0){
            return true;
        }
        return false;
    
    
    }
};