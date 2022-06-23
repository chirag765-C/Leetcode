class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>>ans;
        int i=0;
        while(i<s.size()){
            vector<int>v(2,0);
            char ch=s[i];
            v[0]=(i);
            while(ch==s[i]){
                i++;
            }
            v[1]=(i-1);
            // cout<<v[0]<<" "<<v[1]<<endl;
            int diff=v[1]-v[0]+1;
            if(diff>=3){
            ans.push_back(v);
            }
        }
        return ans;
    }
};