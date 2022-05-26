// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int pivot=-1;
    int search(int arr[], int l, int h, int key){
    //complete the function here
if(l<=h){
    int mid=(l+h)/2;
    if(arr[mid]==key){
        return mid;
        
    }
    //left part is sorted
    if(arr[mid]>=arr[l]){
        if(key>=arr[l] && key<=arr[mid-1]){
            return search(arr,l,mid-1,key);
        }
        else{
            return search(arr,mid+1,h,key);
        }
        
    }
    //right part mei khojna parega
    
    else {
      if(key>=arr[mid+1] && key<arr[h]){
          return search(arr,mid+1,h,key);
          }
          else{
              return search(arr,l,mid-1,key);
          }
    }
    
}
return -1;
    }
};

// { Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}  // } Driver Code Ends