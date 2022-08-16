class Solution {
public:
   
    int minimumTotal(vector<vector<int>>& triangle) {
        int m=triangle.size();
        vector<int>front(m,0);
        vector<int>curr(m,0);
        for(int j=0;j<m;j++){
            front[j]=triangle[m-1][j];
        }
        for(int i=m-2;i>=0;i--){
            for(int j=i;j>=0;j--){
                int down=triangle[i][j]+front[j];
                int rdown=triangle[i][j]+front[j+1];
                curr[j]=min(down,rdown);
            }
            front=curr;
        }
       return  front[0];
    }
};