class Solution {
public:
    string convertToTitle(int num) {
 string res="";
    while(num>0){
        int c=64+(num%26);
        char b;
        if(c==64){
            b='Z';
            num--;
        }
        else{
            b=c;
        }
        res+=b;
        num=num/26;
    }
        reverse(res.begin(),res.end());
        return res;
  
    }
};