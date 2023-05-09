class Solution {
public:
	void swap(TreeNode*& l, TreeNode*& r)
	{
		if (l == nullptr && r == nullptr)
			return ;

		TreeNode* temp = l;
		l = r;
		r = temp;

		if (l != nullptr)
			swap(l->left, l->right);

		if (r != nullptr)
			swap(r->left, r->right);
	}

    TreeNode* invertTree(TreeNode* root) 
	{
		if (root != nullptr)
			swap(root->left, root->right);

		return root;
	}
};
