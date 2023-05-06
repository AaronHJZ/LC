class Solution {
public:
    int singleNumber(vector<int>& nums) 
	{
		if (nums.empty())
			return false;

		set<int> s;
		for (int i : nums)
		{
			set<int>::iterator it = s.find(i);
			if (it == s.end())
				s.insert(i);
			else
				s.erase(it);
		}

		if (!s.empty())
			return *(s.begin());
		else
			return INT_MAX;
	}
};
