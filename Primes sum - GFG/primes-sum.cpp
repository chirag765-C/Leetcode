//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:

  vector<int>getprimes(int n){
      vector<int>isprime(n+1,true);
      isprime[0]=false;
      for(int i=2;i*i<=n;i++){
          for(int j=i*2;j<=n;j+=i){
              isprime[j]=false;
          }
      }
      vector<int>prime;
      for(int i=0;i<isprime.size();i++){
          if(isprime[i]){
              prime.push_back(i);
          }
      }
      return prime;
  }

    string isSumOfTwo(int N){
        // code here
        vector<int>ans=getprimes(N);
        int i=0;
        int j=ans.size()-1;
        while(i<j){
            if(ans[i]+ans[j]==N){
                return "Yes";
            }
            else if(ans[i]+ans[j]>N){
                j--;
            }
            else{
                i++;
            }
        }
        return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends