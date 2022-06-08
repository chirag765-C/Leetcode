class Solution {
public:
    bool tocheck(int num){
        int t=num;
        while(num){
            int b=num%10;
            if(b==0){
                return false;
            }
            if(t%b!=0){
                return false;
            }
            num=num/10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>v;
        for(int i=left;i<=right;i++){
            if(tocheck(i)){
                v.push_back(i);
            }
        }
        return v;
    }
};