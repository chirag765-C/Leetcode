// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:
    string chooseandswap(string a){
        // Code Here
        // int n=a.size();
set<char>s;
for(int i=0;i<a.size();i++){
    s.insert(a[i]);
}
for(int i=0;i<a.size();i++){
    s.erase(a[i]);
    if(s.empty()){
        break;
    }
 char ch=*s.begin();
 if(ch<a[i]){
     char ch2=a[i];
     for(int j=0;j<a.size();j++){
         if(ch==a[j]){
             a[j]=ch2;
         }
         else if(ch2==a[j]){
             a[j]=ch;
         }
         
     }
     break;
 }
 
 
 
 
 
}
return a;
    }
    
};


// { Driver Code Starts.

int main()
{
    Solution obj;
	int t;
	cin >> t;
	while(t--)
	{	
	    string a;
		cin >> a;
		cout << obj.chooseandswap(a) << endl;
	}
	return 0;
}
  // } Driver Code Ends