//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:

	int LongestBitonicSequence(vector<int>nums)
	{
	int n=nums.size();
	vector<int>left(n,1);
	vector<int>right(n,1);
	for(int i=0;i<nums.size();i++){
	   
	    for(int j=0;j<i;j++){
	        if(nums[j]<nums[i] and 1+left[j]>left[i]){
	            left[i]=1+left[j];
	        }
	    }
	}
	for(int i=n-1;i>=0;i--){
	    right[i]=1;
	    for(int j=n-1;j>i;j--){
	        if(nums[j]<nums[i] and 1+right[j]>right[i]){
	            right[i]=1+right[j];
	        }
	    }
	}
	int mx=0;
	for(int i=0;i<n;i++){
	    int sum=left[i]+right[i]-1;
	    if(mx<sum){
	        mx=sum;
	    }
	}
	return mx;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.LongestBitonicSequence(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends