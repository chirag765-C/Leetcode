class Solution {
public:
    
    int fillCups(vector<int>& amount) {
        int cnt=0;
        
      priority_queue<int>maxh;
        for(int i=0;i<amount.size();i++){
            maxh.push(amount[i]);
        }
        while(maxh.top()!=0){
            int first=maxh.top();
            maxh.pop();
            int second=maxh.top();
            maxh.pop();
            first--;
            second--;
            maxh.push(first);
            maxh.push(second);
            cnt++;
        }
        return cnt;
    }
};