class Solution {
public:
    int minimumSum(int num) {
        vector<int>v;
        while(num){
            int b=num%10;
            v.push_back(b);
            num=num/10;
        }
        sort(v.begin(),v.end());
        int n1=v[0]*10+v[2];
        int n2=v[1]*10+v[3];
        return n1+n2;
    }
};