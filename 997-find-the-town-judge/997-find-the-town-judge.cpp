class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<vector<int>>ans(n+1,vector<int>(n+1,0));
        for(auto &v:trust){
            ans[v[0]][v[1]]=1;
        }
        stack<int>st;
        for(int i=1;i<=n;i++){
            st.push(i);
        }
        while(st.size()>=2){
            int i=st.top();
            st.pop();
            int j=st.top();
            st.pop();
            if(ans[i][j]==1){
                //i knows j
                st.push(j);
            }
            else{
                st.push(i);
            }
        }
        int pot=st.top();
        st.pop();
        int c=1;
        for(int i=1;i<=n;i++){
            if(i!=pot){
                if(ans[i][pot]==0 || ans[pot][i]==1){
                    return -1;
                }
            }
        }
        return pot;
        
        
    }
};