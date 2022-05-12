class Solution {
public:

    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int >rowmaker(m,1);
        vector<int >colmaker(n,1);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    rowmaker[i]=0;
                    colmaker[j]=0;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(rowmaker[i]==0 || colmaker[j]==0){
                    matrix[i][j]=0;
                }
            }
        }
    }
};