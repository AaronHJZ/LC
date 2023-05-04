class Solution
{
	public:
		string getCommonPrefix(string& s1, string& s2)
		{
			if (s1 == "" || s2 == "")
				return "";

			int len = min(s1.size(), s2.size());
			int i = 0;
			while (i < len && s1[i] == s2[i])
				++i;

			return s1.substr(0, i);
		}

		string longestCommonPrefix(vector<string>& strs)
		{
			string lcp = strs[0];
			for (string s : strs)
			{
				lcp = getCommonPrefix(lcp, s);
			}

			return lcp;
		}
};
