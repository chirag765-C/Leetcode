class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int extra) {
     priority_queue<int>maxh;
        for(int i=0;i<c.size();i++){
            maxh.push(c[i]);
            c[i]=c[i]+extra;
        }
    int t=maxh.top();
        vector<bool>ans;
        for(int i=0;i<c.size();i++){
            if(c[i]>=t){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};