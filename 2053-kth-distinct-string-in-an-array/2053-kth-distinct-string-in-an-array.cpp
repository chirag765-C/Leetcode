class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
       int idx=0;
        string ans;
        unordered_map<string,int>mp;
        for(auto it:arr){
            mp[it]++;
        }
      for(int i=0;i<arr.size();i++){
          if(mp.find(arr[i])!=mp.end() and mp[arr[i]]==1){
              if(k==1){
                  ans=arr[i];
              }
              k--;
          }
      }
        return ans;
    }
};