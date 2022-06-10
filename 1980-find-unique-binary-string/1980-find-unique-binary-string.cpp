class Solution {
public:


    string findDifferentBinaryString(vector<string>& nums) {
       
      int n=nums.size();
   string s(n,'0');
     for(int i=0;i<nums.size();i++){
         if(nums[i][i]=='0'){
             s[i]='1';
         }
         else{
             s[i]='0';
         }
     }
        return s;
    }
};