class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int cnt=0;
        for(auto it:operations){
            if(it=="X++" ||  it=="++X"){
                cnt=cnt+1;
            }
            else if(it=="--X" || it=="X--"){
                cnt=cnt-1;
            }
        }
        return cnt;
    }
};