class Solution {
public:
    int mySqrt(int x) 
	{
		int left = 0, right = x;
		int ans = -1;

		while (left <= right)
		{
			int mid = left + (right - left) / 2;
			//if ((long long)(mid * mid) <= x)
			if (mid <= x/mid)
			{
				ans = mid;
				left = mid + 1;
			}
			else
				right = mid - 1;
		}

		return ans;
    }
};
