class Solution {
public:
    bool hasCycle(ListNode *head) 
	{
		set<ListNode*> s;
		while (head != nullptr)
		{
			if (s.count(head) == 0)
				s.insert(head);
			else
				return true;

			head = head->next;
		}

		return false;
    }
};
