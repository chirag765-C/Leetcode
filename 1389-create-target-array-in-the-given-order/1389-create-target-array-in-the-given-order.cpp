class Solution {
public:
  
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>target(index.size(),-1);
       for(int i=0;i<index.size();i++){
           cout<<target[index[i]]<<" ";
           cout<<endl;
           if(target[index[i]]!=-1){
              int idx=nums.size()-1;
               while(idx>=index[i] and idx!=0){
                   target[idx]=target[idx-1];
                   idx--;
               }
               target[index[i]]=nums[i];
           }
           else{
               target[index[i]]=nums[i];
           }
       }    
        return target;
    }
};