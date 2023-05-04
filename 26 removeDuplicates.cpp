class Solution
{
	public:
		int removeDuplicates(vector<int>& nums)
		{
			int size = nums.size();

			if (size < 2)
				return size;

			int fast = 1, slow = 1;
			while (fast < size)
			{
				if (nums[fast-1] != nums[fast])
				{
					nums[slow++] = nums[fast];
				}

				++fast;
			}

			return slow;
		}
};
