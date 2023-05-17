class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) 
	{
		if (root == nullptr)
			return 0;

		int n = 0;
		if (root->left != nullptr && root->left->left == nullptr && root->left->right == nullptr)
			n = root->left->val;

		return n + sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
    }
};
