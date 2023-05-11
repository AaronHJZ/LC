class Solution {
public:
    int missingNumber(vector<int>& nums) 
	{
		set<int> s;
		int size = nums.size();
		for (int i = 0; i < size; ++i)
			s.insert(nums[i]);

		for (int i = 0; i < size; ++i)
		{
			if (s.count(i) == 0)
				return i;
		}

		return size;
    }
};
