class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) 
	{
		ListNode* phead  = head;
		ListNode* move   = head;
		ListNode* follow = head;

		while (phead != nullptr && phead->val == val)
		{
			phead = phead->next;
			move = phead;
			follow = phead;
		}

		while (move != nullptr)
		{
			while (move != nullptr && move->val != val)
			{
				follow = move;
				move = move->next;
			}
			if (move != nullptr)
			{
				follow->next = move->next;
				move = move->next;
			}
		}

		return phead;
    }
};
