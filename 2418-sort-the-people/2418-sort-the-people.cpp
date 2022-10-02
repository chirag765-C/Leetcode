class Solution {
public:
  
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
     priority_queue<pair<int,string>>p;
        vector<string>res;
        int n=heights.size();
        for(int i=0;i<n;i++){
            p.push({heights[i],names[i]});
        }
        while(p.size()>0){
         res.push_back(p.top().second);
            p.pop();
        }
        return res;
    }
    
};