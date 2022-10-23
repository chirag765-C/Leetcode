class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int,int>mp;
    mp[5]=0;
        mp[10]=0;
        mp[20]=0;
        
        for(int i=0;i<bills.size();i++){
            mp[bills[i]]++;
            if(bills[i]==5){
                continue;
            }
            else if(bills[i]==10){
                if(mp[5]>0){
                    mp[5]--;
                }
                else{
                    return false;
                }
            }
            else if(bills[i]==20){
                int x=15;
                if( mp[10]>0){
                    
                    mp[10]--;
                    x=x-10;
                    if(mp[5]>0){
                        mp[5]--;
                        x=x-5;
                    }
                    else{
                        return false;
                    }
                }
                else{
                    if(mp[5]>=3){
                        while(x>0 and mp[5]>0){
                            mp[5]--;
                            x=x-5;
                        }
                     if(x>0){
                         return false;
                     }
                    }
                    else{
                        return false;
                    }
                }
           
            }
        }
        return true;
    }
};