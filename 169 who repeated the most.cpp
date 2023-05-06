class Solution {
public:
    pair<int, int> majorityElement(vector<int>& nums) 
	{
		map<int, int> m;
		pair<int, int> res;

		for (int i : nums)
		{
			m[i]++;
			if (m[i] > res.second)
			{
				res.first = i;
				res.second = m[i];
			}
		}

		return res;
    }
};

