class Solution {
public:
    bool rotateString(string s, string goal) {
queue<char>q,q1;
        if(s.size()!=goal.size()){
            return false;
        }
        if(s==goal){
            return true;
        }
        for(int i=0;i<s.size();i++){
            q.push(s[i]);
            q1.push(goal[i]);
        }
        int i=0;
        while(i<s.size()){
            q.push(q.front());
            q.pop();
            if(q==q1){
                return true;
            }
            i++;
        }
        return false;
    }
};