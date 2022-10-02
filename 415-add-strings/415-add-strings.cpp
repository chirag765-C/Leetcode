class Solution {
public:
    string addStrings(string num1, string num2) {
        int m=num1.size()-1;
        int n=num2.size()-1;
        // int sum=0;
        string s;
                    int c=0;

        while(m>=0 and n>=0){
            int first=num1[m--]-'0';
            int second=num2[n--]-'0';
            c+=first+second;
            s.push_back(char(c%10+'0'));
          c=c/10;
        }
        while(m>=0){
            c+=num1[m--]-'0';
            s.push_back(char(c%10 + '0'));
            c=c/10;
            
        }
               while(n>=0){
            c+=num2[n--]-'0';
            s.push_back(char(c%10 + '0'));
            c=c/10;
            
        }
        if(c>0){
            s.push_back(char(c%10 + '0'));
        }
        reverse(s.begin(),s.end());
        return s;
        
        
    }
};