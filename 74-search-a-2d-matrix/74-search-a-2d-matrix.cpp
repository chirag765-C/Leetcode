class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto &it:matrix){
            int first=it[0];
            int last=it[it.size()-1];
            if(target>=first && target<=last){
               for(int i=0;i<it.size();i++){
                   if(it[i]==target){
                       return true;
                   }
               }
            }
            else{
                continue;
            }
            
        }
        return false;
    }
};