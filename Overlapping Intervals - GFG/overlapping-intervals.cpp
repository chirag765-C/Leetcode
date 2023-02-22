//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
         vector<vector<int>>ans;
         sort(intervals.begin(),intervals.end());
         vector<int>temp(2);
         temp=intervals[0];
         for(int i=1;i<intervals.size();i++){
             if(temp[1]>=intervals[i][0]){
                 
                 temp[1]=max(intervals[i][1],temp[1]);
                 
             }
             else{
                 ans.push_back(temp);
                 temp=intervals[i];
             }
         }
             
             ans.push_back(temp);
             return ans;
             
             
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends