class Solution {
public:
    
    vector<int> findEvenNumbers(vector<int>& digits) {
  unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<digits.size();i++){
            mp[digits[i]]++;
        }
        for(int i=100;i<999;i++){
            if(i%2!=0){
                continue;
            }
            else{
                unordered_map<int,int>cp=mp;
                int num=i;
                int f=1;
                while(num){
                    int b=num%10;
                    if(cp.find(b)==cp.end() || cp[b]==0){
                        f=0;
                        break;
                        
                    }
                    else{
                        cp[b]--;
                    }
                    num=num/10;
                    
                }
                if(f==1){
                    ans.push_back(i);
                }
            }
        }
        return ans;
    }
};