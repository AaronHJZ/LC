class Solution
{
	public:
		int climbStairs(int)
		{
			int p = 0, q = 0, r = 1;
			for (int i = 1; i <= n; ++i)
			{
				p = q;
				q = r;
				r = p + q;
			}

			return r;
		}
};

// illustration
//
// p   q   r   n
// 0   0   1   0 
// 0   1   1   1 
// 1   1   2   2 
// 1   2   3   3 
// 2   3   5   4 
