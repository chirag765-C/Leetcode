//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
	public:
		int NthTerm(int n){
		    // Code  here
	
		 if(n==1){
		     return 2;
		     
		 }
		 int mod=1000000007;
		 int i=2;
		 long long pro=1,prev=2;
		 
		 while(i<=n){
		      pro=(prev*i+1)%mod;
		     
		   
		     prev=pro;
		       i++;
		 }
		 return prev;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution obj;
		int ans = obj.NthTerm(n);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends