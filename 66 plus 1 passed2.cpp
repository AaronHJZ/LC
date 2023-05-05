class Solution {
public:
	bool allNine(vector<int>& digits)
	{
		for (int i = 0; i < digits.size(); ++i)
			if (digits[i] != 9)
				return false;

		return true;
	}

    vector<int> plusOne(vector<int>& digits) 
	{
		if (digits.empty())
			digits.push_back(1);
		else if (allNine(digits))
		{
			digits[0] = 1;
			for (int i = 1; i < digits.size(); ++i)
				digits[i] = 0;

			digits.push_back(0);
		}
		else
		{
			vector<int>::reverse_iterator it = digits.rbegin();	
			while (it != digits.rend())
			{
				if (*it == 9)
				{
					*it = 0;
					++it;
				}
				else
				{
					*it += 1;
					break;
				}
			}
		}

		return digits;
	}
};
