class Solution {
public:
    int mySqrt(int x) 
	{
		if (x <= 0)
			return 0;
		else if (x <= 3)
			return 1;

		int root = 0;
		int size = (x / 2) + 1;
		//for (int i = 2; i <= size; ++i)
		for (long long i = 2; i <= size; ++i)
		{
			if (i * i < x)
				continue;
			else if (i * i == x)
			{
				root = i;
				break;
			}
			else
			{
				root = i - 1;
				break;
			}
		}

		return root;
    }
};
