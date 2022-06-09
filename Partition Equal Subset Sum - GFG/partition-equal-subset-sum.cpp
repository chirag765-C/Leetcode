// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
int f(int n,int arr[],int target){
 vector<vector<bool>>dp(n+1,vector<bool>(target+1,0));
 for(int i=0;i<target+1;i++){
     dp[0][i]=false;
 }
for(int i=0;i<n+1;i++){
    dp[i][0]=true;
}
for(int i=1;i<n+1;i++){
    for(int j=1;j<target+1;j++){
        if(j>=arr[i-1]){
            dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j];
        }
        else if(j<arr[i-1]){
            dp[i][j]=dp[i-1][j];
        }
    }
}
return dp[n-1][target];

    
    
}
    int equalPartition(int n, int arr[])
    {
        // code here
        int sum=0,target;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if(sum%2!=0){
            return 0;
        }
     
             return f(n,arr,sum/2);
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends