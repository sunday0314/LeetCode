vector<int> inorderTraversal(TreeNode *root) {
	vector<int> result;
	if (root)
	{
		vector<int> ret = inorderTraversal(root->left);
		for (size_t i = 0; i < ret.size(); i++)
			result.push_back(ret[i]);
		result.push_back(root->val);
		ret = inorderTraversal(root->right);
		for (size_t i = 0; i < ret.size(); i++)
			result.push_back(ret[i]);
	}
	return result;
}