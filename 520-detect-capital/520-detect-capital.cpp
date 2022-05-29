class Solution {
public:
    bool detectCapitalUse(string word) {
       int n=word.size();
        if(isupper(word[n-1])){
            for(int i=0;i<n;i++){
                if(islower(word[i])){
                    return false;
                }
            }
        }
        else if(islower(word[n-1])){
            if(islower(word[0])){
                for(int i=0;i<n;i++){
                    if(isupper(word[i])){
                        return false;
                    }
                }
            }
            else{
                for(int i=1;i<n;i++){
                    if(isupper(word[i])){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};