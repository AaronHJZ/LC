/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
	public:
		ListNode* deleteDuplicates(ListNode* head) 
		{
			if (head == nullptr || head->next == nullptr)
				return head;

			ListNode* slow = head;
			ListNode* fast = head->next;

			while (fast != nullptr)
			{
				while (fast != nullptr && fast->val == slow->val)
					fast = fast->next;

				if (fast != slow)
				{
					slow->next = fast;
					slow = fast;

					if (fast != nullptr)
						fast = fast->next;
				}
			}

			return head;
		}
};
