class Solution
{
	public:
		ListNode* deleteDuplicates(ListNode* head)
		{
			if (head == nullptr || head->next == nullptr)
				return head;

			ListNode* follow = head;
			ListNode* move = head->next;

			while (move != nullptr)
			{
				while (move != nullptr && move->val == follow->val)
					move = move->next;

				if (move != nullptr)
				{
					follow->next = move;
					follow = move;
					move = move->next;
				}
				else
					follow->next = nullptr;
			}

			return head;
		}
};
