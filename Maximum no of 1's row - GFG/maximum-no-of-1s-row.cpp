//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int tofind(vector<int>mat,int m,int n){
        int l=0;
        int h=n-1;
        int ans=-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(mat[mid]==1){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        if(ans==-1){
            return 0;
        }
        else{
            return n-ans;
        }
    }
        int maxOnes (vector <vector <int>> &Mat, int N, int M)
        {
            // your code here
            int row=-1;
            int mx=0;
           for(int i=0;i<N;i++){
               int find1=tofind(Mat[i],N,M);
               if(mx<find1){
                   row=i;
                   mx=find1;
               }
           }
           return row;
        }
};

//{ Driver Code Starts.

int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        Solution ob;        
        cout << ob.maxOnes(arr, n, m) << endl;
    }
}
// } Driver Code Ends