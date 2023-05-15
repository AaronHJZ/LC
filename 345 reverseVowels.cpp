class Solution {
public:
	bool isVowel(char c)
	{
		c = tolower(c);
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
			return true;
		else
			return false;
	}

    string reverseVowels(string s) 
	{
		for (int i = 0, j = s.size() - 1; i < j; )
		{
			if (isVowel(s[i]) && isVowel(s[j]))
				swap(s[i++], s[j--]);
			else 
			{
				if (!isVowel(s[i]))
					++i;
				if (!isVowel(s[j]))
					--j;
			}
		}

		return s;
	}
};
