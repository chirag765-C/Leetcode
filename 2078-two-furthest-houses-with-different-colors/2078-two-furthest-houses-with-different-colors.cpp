class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int d=0;
        int j;
        for(int i=0;i<colors.size();i++){
            j=colors.size()-1;
            while(j>0){
            if(colors[i]!=colors[j]){
                d=max(d,j-i);
             
            }
                     j--;
            }
       
        }
        return d;
    }
};