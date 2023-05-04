class Solution
{
	public:
		int removeElement(vector<int>& nums, int val)
		{
			int size = nums.size();
			int fast = 0, slow = 0;
			while (fast < size)
			{
				if (nums[fast] != val)
					nums[slow++] = nums[fast];

				++fast;
			}

			return slow;
		}
};
