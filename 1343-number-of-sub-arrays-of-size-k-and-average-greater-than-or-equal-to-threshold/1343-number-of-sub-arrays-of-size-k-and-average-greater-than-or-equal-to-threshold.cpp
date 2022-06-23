class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threesold) {
        int count=0;
        int i=0;
        int j=0;
        int sum=0;
        while(j<arr.size()){
            sum+=arr[j];
            if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            int div=sum/k;
            if(div>=threesold){
                count++;
            }
            sum=sum-arr[i];
            i++;
            j++;
        }
        }
    return count;
    }
};