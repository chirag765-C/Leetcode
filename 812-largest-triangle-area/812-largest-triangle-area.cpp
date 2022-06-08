class Solution {
public:
   double tofind(vector<int>a,vector<int>b,vector<int>c){
   return 0.5*(a[0]*(b[1]-c[1])+ b[0]*(c[1]-a[1]) + c[0]*(a[1]-b[1]));     
    }
    double largestTriangleArea(vector<vector<int>>& points) {
       double prev=0.0;
        for(int i=0;i<points.size();i++){
            for(int j=i+1;j<points.size();j++){
                for(int k=j+1;k<points.size();k++){
                    double maxarea=abs(tofind(points[i],points[j],points[k]));
                    if(maxarea>prev){
                       prev=maxarea;
                    }
                }
            }
        }
        return prev;
    }
};