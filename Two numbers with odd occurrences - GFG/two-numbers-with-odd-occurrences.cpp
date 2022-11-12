//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        // code here
        long long f=0;
        for(long long  i=0;i<N;i++){
            f=f^Arr[i];
        }
        int lastbit=f&~(f-1);
        long long x=0;
        long long y=0;
        for(long long i=0;i<N;i++){
            if(Arr[i]&lastbit){
                x=x^Arr[i];
            }
            else{
                y=y^Arr[i];
            }
        }
        vector<long long>ans;
        ans.push_back(x);
        ans.push_back(y);
        
        sort(ans.begin(),ans.end());
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends