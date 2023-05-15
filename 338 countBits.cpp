class Solution {
public:
	int countOnes(int x)
	{
		int n = 0;
		while (x > 0)
		{
			x &= (x-1);
			++n;
		}

		return n;
	}

    vector<int> countBits(int n) 
	{
		vector<int> bits(n+1);
		for (int i = 0; i <= n; ++i)
			bits[i] = countOnes(i);

		return bits;
    }
};
