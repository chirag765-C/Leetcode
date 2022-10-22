//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
 int mod=1e8;
    int fillingBucket(int n) {
if(n==1) return 1;
if(n==2) return 2;

int a=1,b=2,ans;
for(int i=3;i<=n;i++){
    ans=(a+b)%mod;
    a=b%mod;
    b=ans%mod;
}
  return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.fillingBucket(N) << endl;
    }
    return 0;
}
// } Driver Code Ends