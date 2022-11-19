//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int>res,ans;
        
stack<pair<int,int>>st;
for(int i=n-1;i>=0;i--){
    if(st.size()==0){
     res.push_back(-1);
    }
    else if(st.size()>0 and st.top().second>a[i]){
        res.push_back(st.top().first);
    }
    else if(st.size()>0 and st.top().second<=a[i]){
        while(st.size()>0 and st.top().second<=a[i]){
            st.pop();
        }
        if(st.size()==0){
            res.push_back(-1);
        }
        else{
            res.push_back(st.top().first);
        }
    }
    st.push({i,a[i]});
}
reverse(res.begin(),res.end());

for(int i=0;i<res.size();i++){
   if(res[i]==-1){
       ans.push_back(a[i]);
   }
}
return ans;
        
    }
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends