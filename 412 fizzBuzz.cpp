class Solution {
public:
    vector<string> fizzBuzz(int n) 
	{
		vector<string> res;

		for (int i = 1; i <= n; ++i)
		{
			string elem = "";

			if (i % 3 == 0)
				elem += "Fizz";
			if (i % 5 == 0)
				elem += "Buzz";

			if (elem.empty())
				elem += to_string(i);

			res.push_back(elem);
		}

		return res;
    }
};
