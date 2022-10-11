class Solution {
public:
    int tofind(int num){
        int cnt=0;
        while(num){
            int b=num%10;
            cnt+=b;
            num=num/10;
        }
        return cnt;
    }
    int countLargestGroup(int n) {
        //maximum n can be 9999 and its digit sum is 9*4=36
        //so we make arrya of size 36
        vector<int>cnt(37,0);
        for(int i=1;i<=n;i++){
            int x=tofind(i);
            cnt[x]++;
        }
        int mx=0;
        int freq=0;
        for(int num:cnt){
            cout<<num<<" ";
            if(mx<num){
                mx=num;
            }
        }
        for(int num:cnt){
            if(mx==num){
                freq++;
            }
        }
        return freq;
    }
};