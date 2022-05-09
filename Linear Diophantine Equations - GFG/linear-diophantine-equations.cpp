// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends

class Solution{
public:
int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}
    int isPossible(int A, int B, int C){
        // code here
        return C%gcd(A,B)==0?1:0;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,N;
        cin>>A>>B>>N;
        Solution ob;
        cout << ob.isPossible(A,B,N) << endl;
    }
    return 0; 
}  // } Driver Code Ends