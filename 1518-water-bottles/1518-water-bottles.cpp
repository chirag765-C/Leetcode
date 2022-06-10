class Solution {
public:
    int numWaterBottles(int num, int numExchange) {
        
     if(num<numExchange){
         return num;
     }
        int sum=0;
        sum+=num;
        while(num>=numExchange){
            sum+=num/numExchange;
            num=(num/numExchange)+(num%numExchange);
        }
        return sum;
    }
};