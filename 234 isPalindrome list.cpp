class Solution {
public:
    bool isPalindrome(ListNode* head) 
	{
		vector<int> vec;

		while (head != nullptr)
		{
			vec.push_back(head->val);
			head = head->next;
		}

		for (int i = 0, j = vec.size() -1; i < j; ++i, --j)
			if (vec[i] != vec[j])
				return false;

		return true;
    }
};
