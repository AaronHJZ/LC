class Solution {
public:
    bool isSubsequence(string s, string t) 
	{
		if (s.empty())
			return true;

		int i = 0, j = 0;
		while (j < t.size())
		{
			while (j < t.size() && t[j] != s[i])
				++j;

			if (t[j] == s[i])
				++i, ++j;

			if (i == s.size())
				return true;
		}

		return false;
    }
};
