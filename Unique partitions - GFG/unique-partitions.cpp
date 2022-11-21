//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:

	void tofind(int n,vector<int>&v,int sum,vector<vector<int>>&ans){

	    if(sum==0){
	        ans.push_back(v);
	        return;
	    }
	    if(n<1){
	        return;
	    }
	 
	    if( n<=sum){
	        v.push_back(n);
	        tofind(n,v,sum-n,ans);
	        v.pop_back();
	        tofind(n-1,v,sum,ans);
	    }
	    else{
	    tofind(n-1,v,sum,ans);
	    }
	}
    vector<vector<int>> UniquePartitions(int n) {
        // Code here
        vector<int>v;
        	vector<vector<int>>ans;
        tofind(n,v,n,ans);
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
		Solution ob;
		vector<vector<int>> ans = ob.UniquePartitions(n);
    	for(auto i : ans)
    		for(auto j: i)
    			cout << j <<" ";
    	cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends