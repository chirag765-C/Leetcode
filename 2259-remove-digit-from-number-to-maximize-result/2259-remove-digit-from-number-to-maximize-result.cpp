class Solution {
public:
    string removeDigit(string number, char digit) {
        string str;
        for(int i=0;i<number.size();i++){
            if(number[i]==digit){
                if(i!=number.size()-1){
                    str=number.substr(0,i)+number.substr(i+1,number.size());
                    if(number[i+1]>number[i]){
                        return str;
                    }
                }
                else{
                    str=number.substr(0,i)+number.substr(i+1,number.size());
                }
            }
        }
        return str;
    }
};