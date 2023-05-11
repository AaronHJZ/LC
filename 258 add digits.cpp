class Solution {
public:
    int addDigits(int num) 
	{
		int sum = 0;
		
		while (num > 0)
		{
			sum = 0;
			while (num > 0)
			{
				int i = num % 10;
				sum += i;
				num /= 10;
			}

			if (sum >= 10)
				num = sum;
		}

		return sum;
    }
};
