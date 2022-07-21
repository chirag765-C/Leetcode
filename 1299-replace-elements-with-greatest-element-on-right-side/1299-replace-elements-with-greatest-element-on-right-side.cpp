class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
       int mx=-1;
        vector<int>v;
        for(int i=arr.size()-1;i>=0;i--){
            v.push_back(mx);
            mx=max(mx,arr[i]);
        }
        reverse(v.begin(),v.end());
        return v;
        
    }
};