class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
	{
		int i = digits.size() - 1;
		if (digits[i] + 1 < 10)
		{
			digits[i] += 1;
			return digits;
		}
		else
		{
			while (digits[i] + 1 == 10 && i > 0)
			{
				digits[i] = 0;
				--i;
			}

			if (i > 0)
				digits[i] += 1;
			else if (i == 0 && digits[i] < 9)
				digits[i] += 1;
			else if (i == 0 && digits[i] == 9)
			{
				//digits.insert(digits.begin(), 1); works in g++, but failed in leetcode, because of indexoutofrange.
				digits[0] = 1;
				digits.push_back(0);
			}
		}

		return digits;
	}
};
