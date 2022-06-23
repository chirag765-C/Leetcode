// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int kthElement(int a[], int b[], int m, int n, int k)
    {
        if(m>n){
            return kthElement(b,a,n,m,k);
            
        }
        int low=max(0,k-n);
        int high=min(k,m);
       while(low<=high){
           int  cut1=(low+high)>>1;
           int cut2=k-cut1;
           int l1=cut1==0?INT_MIN:a[cut1-1];
           int l2=cut2==0?INT_MIN:b[cut2-1];
           int r1=cut1==m?INT_MAX:a[cut1];
           int r2=cut2==n?INT_MAX:b[cut2];
        
        
        
        if(l1<=r2 && l2<=r1){
            return max(l1,l2);
            
        }
        else if(l1>r2){
            high=cut1-1;
        }
        else {
            low=cut1+1;
        }
    }
    return 1;
    }
};

// { Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}  // } Driver Code Ends