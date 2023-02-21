//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
   {
       
       if(A==B){
           return "-1";
       }
       int h1[26]={0},h2[26]={0};
       
       for(int i=0;i<A.size();i++){
           h1[A[i]-'a']++;
       }
       for(int j=0;j<B.size();j++){
           h2[B[j]-'a']++;
       }
       string ans;
       for(int i=0;i<26;i++){
           if(h1[i]>=1 and h2[i]==0 || h1[i]==0 and h2[i]>=1){
               ans+=char(i+'a');
           }
       }
       if(ans.size()==0){
           return "-1";
       }
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
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends