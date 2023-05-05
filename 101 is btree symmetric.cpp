class Solution
{
	public:
		bool check(TreeNode* p, TreeNode* q)
		{
			if (p == nullptr && q == nullptr)
				return true;
			else if (p == nullptr || q == nullptr)
				return false;
			if (p->val != q->val)
				return false;
			else
			{
				return check(p->left, q->right) && check(p->right, q->left);
			}
		}

		bool isSymmetric(TreeNode* root) 
		{
			return check(root, root);
		}
};
    
