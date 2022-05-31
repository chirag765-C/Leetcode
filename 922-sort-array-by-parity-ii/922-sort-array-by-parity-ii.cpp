class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
 
            
       int n = nums.size();
	vector<int> evens, odds;
	evens.reserve(n/2);
	odds.reserve(n/2);
	for(int i = 0; i<n; i++) {
		if(nums[i] % 2 == 0) {
			evens.push_back(nums[i]);
        }
		else {
			odds.push_back(nums[i]);
	}
        }
	//filling even spaces
	for(int i = 0; i<n; i+=2) {
		nums[i] = evens[i/2];
	}
	//filling odd spaces
	for(int i = 1; i<n; i+=2) {
		nums[i] = odds[i/2];
	}
	return nums;
    
    }
    
};