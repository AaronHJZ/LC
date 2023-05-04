class Solution {
public:
    bool isPalindrome(int input) 
	{
		if (input < 0 || (input % 10 == 0 && input != 0))
			return false;

		int rn = 0;
		while (input > rn)
		{
			rn = rn*10 + input%10;
			input /= 10;
		}

		return (input == rn || input == rn/10);
    }
};

