// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  long long findgcd(long long a,long long b){
      while(b!=0){
          long long c=a%b;
          a=b;
          b=c;
      }
      return a;
  }
 
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        long long t=findgcd(A,B);
        long long s=(A*B)/t;
        vector<long long>v={s,t};
        return v;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends