class Solution {
public:
    vector<long long> kthPalindrome(vector<int>& queries, int intLength) {
     vector<long long>v;
        int n=intLength;
        long long limit=9*pow(10,(n-1)/2);
        for(int i=0;i<queries.size();i++){
            
            
            if(queries[i]>limit){
v.push_back(-1);
            }
            else{
                 long long chk=pow(10,(n-1)/2);
            
            chk+=queries[i];
            chk--;
            string s=to_string(chk);
            string t=s;
            reverse(t.begin(),t.end());
            if(n%2){
                s.pop_back();
            }
            s+=t;
            long long num=0;
            for(int i=0;i<s.size();i++){
                int t=s[i]-'0';
                num=num*10+t;
            }
            v.push_back(num);
        }
                
            }
            
           
        return v;
    }
};