class Solution {
public:
    bool isPalindrome(string s) 
	{
		if (s.size() <= 1)
			return true;

		int i = 0, j = s.size() - 1;
		while (i < j)
		{
			// 1. filter all negligible chars before compare s[i] with s[j]
			while (i< j && !isalnum(s[i]))
				++i;
			while (i< j && !isalnum(s[j]))
				--j;

			// 2. start comparing
			while (i < j && tolower(s[i]) == tolower(s[j]))
			{
				++i;
				--j;
			}

			// 3. the comparing process interrupted, check it out
			if (i < j)
			{
				if (isalnum(s[i]) && isalnum(s[j]) && tolower(s[i]) != tolower(s[j]))
					return false;

				while (i< j && !isalnum(s[i]))
					++i;
				while (i< j && !isalnum(s[j]))
					--j;
			}
		}

		return true;
    }
};
