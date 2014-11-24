bool isBalanced(TreeNode *root) {
	if (!root)
		return true;
	int nLeftDepth = maxDepth(root->left);
	int nRightDepth = maxDepth(root->right);
	if (nLeftDepth - nRightDepth > 1 || nRightDepth - nLeftDepth > 1 || !isBalanced(root->left) || !isBalanced(root->right))
		return false;
	else 
		return true;
}