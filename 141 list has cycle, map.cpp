class Solution {
public:
    bool hasCycle(ListNode *head) 
	{
		map<ListNode*, int> m;
		while (head != nullptr)
		{
			if (m.find(head) != m.end())
				return true;
			
			m[head]++;
			head = head->next;
		}

		return false;
    }
};
