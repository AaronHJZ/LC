class Solution {
public:
	// len = allEvenNumber + maxOddNumber
    int longestPalindrome(string s) 
	{
		int len = 0;

		unordered_map<char, int> m;
		for (char c : s)
			m[c]++;

		for (char c : s)
		{
			if (m[c] % 2 == 1)
			{
				len += m[c] - 1;
				m[c] = 1;
			}
			else
			{
				len += m[c];
				m[c] = 0;
			}
		}

		for (pair<char, int> p : m)
			if (p.second == 1)
			{
				len += 1;
				break;
			}

		return len;
    }
};
