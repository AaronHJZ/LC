class Solution
{
	public:
		bool isValid(string s)
		{
			if (s.size() % 2 == 1)
				return false;

			map<char, char> m = { 
				{')', '('}, 
				{']', '['}, 
				{'}', '{'} 
			};

			stack<char> stk;
			for (char ch : s)
			{
				if (m.find(ch) == m.end())
					stk.push(ch);
				else
				{
					if (stk.empty() || stk.top() != m[ch])
						return false;
					else
						stk.pop();
				}
			}

			return stk.empty();
		}
};
