class Solution {
public:
    int missingNumber(vector<int>& nums) 
	{
		int size = nums.size();
		int sum_nums = 0;
		int sum_shouldbe = 0;

		for (int i : nums)
			sum_nums += i;

		for (int i = 1; i <= size; ++i)
			sum_shouldbe += i;

		if (sum_shouldbe > sum_nums)
			return sum_shouldbe - sum_nums; 
		else if (find(nums.begin(), nums.end(), 0) == nums.end())
			return 0;
		else
			return size;
    }
};
