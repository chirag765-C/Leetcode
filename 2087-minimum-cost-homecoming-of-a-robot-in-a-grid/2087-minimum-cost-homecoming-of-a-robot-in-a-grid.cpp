class Solution {
public:

    int minCost(vector<int>& startPos, vector<int>& homePos, vector<int>& rowCosts, vector<int>& colCosts) {
    int sum=0;
        while(startPos[0]<homePos[0]){
          int num=startPos[0]+1;
            sum+=rowCosts[num];
            startPos[0]++;
      }
        while(startPos[0]>homePos[0]){
            int num=startPos[0]-1;
            sum+=rowCosts[num];
            startPos[0]--;
        }
        while(startPos[1]<homePos[1]){
            int num=startPos[1]+1;
            sum+=colCosts[num];
            startPos[1]++;
        }
        while(startPos[1]>homePos[1]){
            int num=startPos[1]-1;
            sum+=colCosts[num];
            startPos[1]--;
        }
        return sum;
    }
};