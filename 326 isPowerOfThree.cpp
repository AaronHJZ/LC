class Solution {
public:
    bool isPowerOfThree(int n) 
	{
		if (n <= 0)
			return false;
		else if (n == 1)
			return true;

		if (n % 3 != 0)
			return false;
		else
		{
			while (n % 3 == 0 && n > 3)
			{
				n /= 3;
				if (n % 3 != 0)
					return false;
			}
		}

		return true;
    }
};
