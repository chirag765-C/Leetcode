class Solution {
public:
    string addBinary(string a, string b) {
        string res="";
        int c1=a.size()-1;
        int c2=b.size()-1;
                    int carry=0;
int sum=0;
        while(c1>=0 || c2>=0){
        int sum=carry;
            if(c1>=0){
                sum+=a[c1--]-'0';
                
            }
            if(c2>=0){
                sum+=b[c2--]-'0';
                
            }
            carry=sum>1?1:0;
            res+=to_string(sum%2);
        }
        if(carry){
            res+=to_string(carry);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};