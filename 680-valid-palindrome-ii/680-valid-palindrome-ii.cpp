class Solution {
public:
    bool validPalindrome(string s) {
        
        int cnt1=0,cnt2=0;
     int i=0;
     int j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                cnt1++;
                i++;
            }
           else{
            i++;
            j--;
           }
             if(cnt1>1){
                break;
            }
        }
i=0;
        j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                cnt2++;
                j--;
            }
           else{
            i++;
            j--;
           }
             if(cnt2>1){
                break;
            }
        }
        if(cnt1==1 || cnt2==1){
            return true;
        }
        else if(cnt1==0 and cnt2==0){
           return true; 
        }
        return false;
    }
};