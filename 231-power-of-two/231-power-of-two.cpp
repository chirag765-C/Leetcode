class Solution {
public:
    bool isPowerOfTwo(int n) {
   int cnt=0;
        int i=n;
        while(i>0){
            cnt++;
            i=i&(i-1);
        }
        if(cnt==1 && n==1){
            return true;
        }
        else if(cnt==1 and (n&1)==0){
            return true;
        }
        return false;
        
    }
};