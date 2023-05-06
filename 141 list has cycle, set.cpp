class Solution {
public:
    bool hasCycle(ListNode *head) 
	{
		set<ListNode*> s;
		while (head != nullptr)
		{
			if (s.count(head) != 0)
				return true;
			s.insert(head);
			head = head->next;
		}

		return false;
    }
};
