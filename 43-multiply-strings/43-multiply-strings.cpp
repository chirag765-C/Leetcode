class Solution {
public:
    string multiply(string num1, string num2) {
        
string s;
    int m=num1.size();
    int n=num2.size();
    if(m==0 || n==0 || num1=="0" || num2=="0"){
        return "0";

    }
    if(num1=="1"){
        return num2;
    }
    if(num2=="1"){
        return num1;
    }
    vector<int>result(m+n,0);
    for(int i=m-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            int product=(num1[i]-'0')*(num2[j]-'0');
            product+=result[i+j+1];
            result[i+j+1]=product%10;
            result[i+j]+=product/10;

        }
    }
for(int i=0;i<m+n;i++){
    if(i==0 and result[i]==0){
        continue;
    }
    s+=to_string(result[i]);
}

    return s;
    }
};