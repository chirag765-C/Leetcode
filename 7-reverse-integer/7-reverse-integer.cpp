class Solution {
public:
    int reverse(int x) {
     int sign=1;
        if(x<0){
            sign=-1;
        }
        x=abs(x);
        //toreverse;
        int num=0;
        int sum=0;
        while(x>0){
            if(sum>INT_MAX/10 || sum<INT_MIN/10){
            return 0;
        }
            int b=x%10;
            sum=sum*10+b;
            x=x/10;
        }
        
        return sum*sign;
        
    }
};