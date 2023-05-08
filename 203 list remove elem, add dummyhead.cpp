class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) 
	{
		ListNode* dummyhead = new ListNode(INT_MAX, head);
		ListNode* move = dummyhead;

		while (move->next != nullptr)
		{
			if (move->next->val == val)
				move->next = move->next->next;
			else
				move = move->next;
		}

		head = dummyhead->next;
		delete dummyhead;

		return head;
    }
};
