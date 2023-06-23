//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:

	int NthRoot(int n, int m)
	{
	    // Code here.
	        long long int i = 1;
	    long long int ans = 1;
	    while(pow(i, n) <= m){
	        ans = pow(i, n);
	        i++;
	    }
	    if(ans == m) return i - 1;
	    return -1;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends