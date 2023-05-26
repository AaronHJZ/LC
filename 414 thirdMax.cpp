class Solution {
public:
    int thirdMax(vector<int>& nums) 
	{
		set<int> s;
		for (int i : nums)
		{
			s.insert(i);
			if (s.size() > 3)
				s.erase(s.begin());
		}

		if (s.size() == 3)
			return *(s.begin());
		else
			return *(s.rbegin());
    }
};
