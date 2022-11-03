//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int dp[101][101];
    int f(vector<int>arr,int n,int i,int j,int k){
        if(i>=j){
            return 0;
        }
        if(arr[j]-arr[i]<=k){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
    
        return dp[i][j]=1+min(f(arr,n,i+1,j,k),f(arr,n,i,j-1,k));
        
    
        
    }
    int removals(vector<int>& arr, int k){
        //Code here
        int n=arr.size();
        memset(dp,-1,sizeof(dp));
        sort(arr.begin(),arr.end());
        int x=f(arr,n,0,n-1,k);
        return x;
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution ob;
        int ans = ob.removals(arr,k);
        
        cout<<ans<<endl;
    }
}



// } Driver Code Ends