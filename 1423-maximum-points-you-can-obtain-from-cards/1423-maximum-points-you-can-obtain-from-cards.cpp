class Solution {
public:
    int maxScore(vector<int>& card, int k) {
        int total=0;
        for(int i=0;i<k;i++){
            total+=card[i];
        }
        int best=total;
        for(int i=k-1,j=card.size()-1;i>=0;i--,j--){
            total+=card[j]-card[i];
            best=max(best,total);
            
        }
return best;
    }
};