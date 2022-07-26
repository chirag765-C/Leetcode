class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        stack<int>st;
        for(int i=nums2.size()-1;i>=0;i--){
            if(st.size()==0){
                v.push_back(-1);
            }
            else if(st.size()>0 && nums2[i]<st.top()){
                v.push_back(st.top());
            }
            else if(st.size()>0 && nums2[i]>st.top()){
                while(st.size()>0 && nums2[i]>st.top()){
                    st.pop();
                }
                if(st.size()==0){
                    v.push_back(-1);
                }
                else{
                    v.push_back(st.top());
                }
            }
            st.push(nums2[i]);
        }
        reverse(v.begin(),v.end());
        unordered_map<int,int>mp;
        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]]=v[i];
        }
        vector<int>v1;
        for(int i=0;i<nums1.size();i++){
            if(mp.find(nums1[i])!=mp.end()){
                v1.push_back(mp[nums1[i]]);
            }
        }
        return v1;
        
        
        
    }
};