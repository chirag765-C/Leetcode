class Solution {
public:
   string tocheck(string s,int left,int right){
       while(left>=0 and right<s.size()){
           if(s[left]==s[right]){
               left--;
               right++;
           }
       else{
           break;
       }
       }
       return s.substr(left+1,right-left-1);
   }
    string longestPalindrome(string s) {
        string longest;
        for(int i=0;i<s.size();i++){
            string odd=tocheck(s,i,i);
            if(odd.size()>longest.size()){
                longest=odd;
            }
        }
        for(int i=0;i<s.size();i++){
            string even=tocheck(s,i,i+1);
            if(even.size()>longest.size()){
                longest=even;
                }
        }
        return longest;
    }
};