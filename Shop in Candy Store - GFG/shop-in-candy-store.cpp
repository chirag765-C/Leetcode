//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
static bool comp(int a,int b){
    return a>b;
}
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        vector<int>ans;
        sort(candies,candies+N);
    int i=0;
    int j=N-1;
    int mx=0;
    int mn=0;
    while(i<=j){
        mn+=candies[i];
        i++;
        int c=0;
        while(c<K){
            j--;
            c++;
        }
    }
    i=0;
    j=N-1;
    sort(candies,candies+N,comp);
    while(i<=j){
        mx+=candies[i++];
        int c=0;
        while(c<K){
            c++;
            j--;
        }
    }
    ans.push_back(mn);
    ans.push_back(mx);
    return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends