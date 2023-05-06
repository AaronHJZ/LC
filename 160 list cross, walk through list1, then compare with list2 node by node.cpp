class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
	{
		set<ListNode*> visited;

		while (headA != nullptr)
		{
			visited.insert(headA);
			headA = headA->next;
		}

		while (headB != nullptr)
		{
			//if (visited.find(headB) != visited.end())
			if (visited.count(headB) != 0)
				return headB;

			headB = headB->next;
		}

		return nullptr;
	}
};

