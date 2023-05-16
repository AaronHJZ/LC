class Solution {
public:
    bool isPerfectSquare(int num) 
	{
		if (num == 0 || num == 1)
			return true;

		int left = 0, right = num;
		bool res = false;

		while (left <= right)
		{
			long mid = left + (right - left) / 2;
			
			if (mid * mid == num)
			{
				res = true;
				break;
			}
			else if (mid * mid < num)
				left = mid + 1;
			else
				right = mid - 1;
		}

		return res;
    }
};
