class Solution {
public:
    int firstUniqChar(string s) 
	{
		int size = s.size();
		for (int i = 0; i < size; ++i)
		{
			int n = count(s.begin(), s.end(), s[i]);
			if (n == 1)
				return i;
		}

		return -1;
    }
};
