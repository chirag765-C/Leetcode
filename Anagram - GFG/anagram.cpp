//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        unordered_map<char,int>mp;
        for(char c:a){
            mp[c]++;
        }
        for(char c:b){
            if(mp.find(c)==mp.end()){
                return false;
            }
            else{
                mp[c]--;
                if(mp[c]<0){
                    return false;
                }
            }
        }
        return true;
        
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends