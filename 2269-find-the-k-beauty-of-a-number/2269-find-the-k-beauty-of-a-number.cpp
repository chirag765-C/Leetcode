class Solution {
public:
    int divisorSubstrings(int num, int k) {
     int i=0,j=0,count=0;
        string s;
        int n=num;
        while(n>0){
            int b=n%10;
            s+=to_string(b);
            n=n/10;
        }
        reverse(s.begin(),s.end());
        string t;
        while(j<s.size()){
            
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                int div=stoi(s.substr(i,k));
                cout<<div<<endl;
                if(div!=0){
                if(num%div==0){
                    count++;
                }
                }
                i++;
                j++;
            }
        }
        return count;
    }
};