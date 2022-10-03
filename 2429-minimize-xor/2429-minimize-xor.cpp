class Solution {
public:

    int minimizeXor(int num1, int num2) {
int noofbits=0;
        while(num2){
            if(num2&1){
                noofbits++;
            }
            num2=num2>>1;
        }
        vector<int>bits1(32,0),bits2(32,0);
        int pos=0;
        while(num1){
            if(num1&1){
                bits1[pos]++;
            }
            pos++;
            num1=num1>>1;
        }
        for(int i=31;i>=0;i--){
            if(bits1[i] and noofbits){
                bits2[i]++;
                noofbits--;
            }
        }
        for(int i=0;i<=31;i++){
            if(bits1[i]==0 and noofbits){
                bits2[i]++;
                noofbits--;
            }
        }
        int ans=0;
        for(int i=0;i<32;i++){
            if(bits2[i]==1){
                ans+=pow(2,i);
            }
        }
        return ans;
    }
};