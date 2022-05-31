class Solution {
public:

    vector<vector<int>> generate(int numRows) {

  vector<vector<int>>v;
     v.push_back({1});
        if(numRows==1){
            return v;
        }
        v.push_back({1,1});
        if(numRows==2){
          return v;
        }
        int j=1;
        while(j<numRows-1){
        vector<int>ans;
        ans.push_back(1);
        int i=v[j].size();
        for(int t=0;t+1<i;t++){
            ans.push_back(v[j][t]+v[j][t+1]);
        }
        ans.push_back(1);
            v.push_back(ans);
        j++;
    }
        return v;
        
    }
};