class Solution {
public:
	bool AllZero(map<char, int>& m)
	{
		for (pair<char, int> p : m)
			if (p.second != 0)
				return false;

		return true;
	}

    bool isAnagram(string s, string t) 
	{
		map<char, int> m;
		for (char c : s)
			m[c]++;

		for (char c : t)
			m[c]--;

		return AllZero(m);
    }
};

