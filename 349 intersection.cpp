class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
	{
		int size = nums1.size() < nums2.size() ? nums1.size() : nums2.size();
		vector<int> common;

		if (nums1.size() < nums2.size())
		{
			for (int i = 0; i < size; ++i)
			{
				if (find(nums2.begin(), nums2.end(), nums1[i]) != nums2.end() 
						&& find(common.begin(), common.end(), nums1[i]) == common.end())
					common.push_back(nums1[i]);
			}
		}
		else
		{
			for (int i = 0; i < size; ++i)
			{
				if (find(nums1.begin(), nums1.end(), nums2[i]) != nums1.end()
						&& find(common.begin(), common.end(), nums2[i]) == common.end())
					common.push_back(nums2[i]);
			}
		}

		return common;
	}
};
