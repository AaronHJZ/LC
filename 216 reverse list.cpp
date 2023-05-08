class Solution {
public:
    ListNode* reverseList(ListNode* head) 
	{
		ListNode* follow = nullptr;
		ListNode* move = head;

		while (move != nullptr)
		{
			ListNode* temp = move->next;
			move->next = follow;
			follow = move;
			move = temp;
		}

		return follow;
    }
};
