class Solution {
public:

    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>rowmaker(m,0);
        vector<int>colmaker(n,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    rowmaker[i]=1;
                    colmaker[j]=1;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(rowmaker[i]==1 ){
                    matrix[i][j]=0;
                }
                if(colmaker[j]==1){
                    matrix[i][j]=0;
                }
                
            }
        }
    }
};