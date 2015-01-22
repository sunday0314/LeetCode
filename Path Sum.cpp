bool hasPathSum(TreeNode *root, int sum) {
	if (!root)
		return false;
	if (root->val == sum && root->left == NULL && root->right == NULL)
		return true;
	int nValue = sum - root->val;
	if (hasPathSum(root->left, nValue) || hasPathSum(root->right, nValue))
		return true;
	return false;
}