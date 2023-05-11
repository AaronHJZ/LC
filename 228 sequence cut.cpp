class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) 
	{
		vector<string> res;
		int i = 0;
		int size = nums.size();

		while (i < size)
		{
			int low = i;
			++i;
			while (i < size && nums[i] == nums[i-1] + 1)
				++i;

			int high = i - 1;
			string temp = to_string(nums[low]);
			if (low < high)
				temp = temp + "->" + to_string(nums[high]);

			res.push_back(temp);
		}

		return res;
    }
};

