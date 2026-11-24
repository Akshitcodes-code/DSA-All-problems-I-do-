class Solution{	
	public:
        int helper(vector<int>& nums, int i) {
        if (i == nums.size()) return 0;           // base case
        return nums[i] + helper(nums, i + 1);     // current + rest
        }

		int arraySum(vector<int>& nums){
            return helper(nums, 0);
		}
        
        
};