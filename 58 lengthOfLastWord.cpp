class Solution
{
	public:
		int lengthOfLastWord(string s)
		{
			int length = 0;

			string::reverse_iterator it = s.rbegin();
			while (isspace(*it) || iscontrl(*it))
				++it;

			if (it != s.rend())
			{
				string::reverse_iterator start = it;
				while (it != s.rend() && isalnum(*it))
					++it;

				length = it - start;
			}

			return length;
		}
};
