class Solution {
public:
    int majorityElement(vector<int>& nums) 
	{
		int size = nums.size();
		map<int, int> m;

		for (int i : nums)
		{
			m[i]++;
			if (m[i] > size/2)
				return i;
		}

		return INT_MAX;
    }
};
