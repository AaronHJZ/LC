class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
	{
		unordered_map<int, int> m1;
		unordered_map<int, int> m2;
		vector<int> common;

		for (int i : nums1)
			m1[i]++;

		for (int i : nums2)
			m2[i]++;

		if (m1.size() < m2.size())
		{
			for (pair<int, int> p : m1)
			{
				int val = p.first;
				int times = m1[val] < m2[val] ? m1[val] : m2[val];
				for (int i = 0; i < times; ++i)
					common.push_back(val);
			}
		}
		else
		{
			for (pair<int, int> p : m2)
			{
				int val = p.first;
				int times = m2[val] < m1[val] ? m2[val] : m1[val];
				for (int i = 0; i < times; ++i)
					common.push_back(val);
			}
		}

		return common;
    }
};
