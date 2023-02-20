//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    
    string reverseWords(string S) 
    { 
        // code here 
        string ans="";
        string t="";
        for(int i=S.size()-1;i>=0;i--){
            if(S[i]=='.'){
                reverse(t.begin(),t.end());
                
                ans+=t;
                ans+='.';
                t="";
            }
            else{
                t+=S[i];
            }
        }
        reverse(t.begin(),t.end());
        ans+=t;
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
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends