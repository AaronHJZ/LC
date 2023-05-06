class Solution {
public:
    int singleNumber(vector<int>& nums) 
	{
		if (nums.empty())
			return false;

		map<int, int> m;
		for (int i : nums)
				m[i]++;

		for (map<int, int>::iterator it = m.begin(); it != m.end(); ++it)
			if (it->second == 1)
				return it->first;

		return INT_MAX;
    }
};
