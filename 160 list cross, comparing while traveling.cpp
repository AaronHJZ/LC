class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
	{
		set<ListNode*> s1;
		set<ListNode*> s2;

		while (headA != nullptr || headB != nullptr)
		{
			if (headA != nullptr)
			{
				s1.insert(headA);
				if (s1.find(headA) != s1.end() && s2.find(headA) != s2.end())
					return headA;

				headA = headA->next;
			}

			if (headB != nullptr)
			{
				s2.insert(headB);
				if (s1.find(headB) != s1.end() && s2.find(headB) != s2.end())
					return headB;

				headB = headB->next;
			}
		}

		return nullptr;
    }
};

