class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int>mp;
        for(int i=0;i<answers.size();i++){
            mp[answers[i]]++;
        }
        int sum=0;
    for(auto it:mp){
        int c=ceil((double)it.second/(it.first+1));
        sum+=c*(it.first+1);
    }
        return sum;
    }
};