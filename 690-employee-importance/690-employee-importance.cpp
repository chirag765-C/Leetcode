/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int ans=0;
    void dfs(unordered_map<int,Employee*>mp,int id){
        ans+=mp[id]->importance;
        for(auto it:mp[id]->subordinates){
            dfs(mp,mp[it]->id);
        }
        
    }
    int getImportance(vector<Employee*> employees, int id) {
     unordered_map<int,Employee*>mp;
      for(int i=0;i<employees.size();i++){
          mp[employees[i]->id]=employees[i];
      }
        dfs(mp,id);
           
       return ans;
        
    }
};