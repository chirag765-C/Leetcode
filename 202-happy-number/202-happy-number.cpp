class Solution {
public:
    bool isHappy(int n) {
        
        while(n>4){
            int c=0;
            int b=n;
            while(b>0){
      c+=pow(b%10,2);
                b=b/10;
                
            
            }
           
            n=c;
          
            
        }
        return n==1;
    }
};