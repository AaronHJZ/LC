class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
	{
		int size = nums.size();

		int i = 0;
		while (i < size && nums[i] <= target)
			++i;

		return i;
	}
};

