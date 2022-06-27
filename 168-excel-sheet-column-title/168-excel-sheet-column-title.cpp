class Solution {
public:
    string convertToTitle(int columnNumber) {
        
      
            string res;
            while(columnNumber>0){
                int b=columnNumber%26;
                char c;
                if(b==0){
                    c='Z';
                    columnNumber--;
                }
                else{
                    c=char(64+b);
                }
                res+=c;
                columnNumber=columnNumber/26;
            }
            reverse(res.begin(),res.end());
            
            
        
        return res;
        
        
    }
};