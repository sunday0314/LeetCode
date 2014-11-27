vector<int> preorderTraversal(TreeNode *root) {
     vector<int> result;
     if (root)
     {
          result.push_back(root->val);
          vector<int> ret = preorderTraversal(root->left);
          for (size_t i = 0; i < ret.size(); i++)
               result.push_back(ret[i]);
          ret = preorderTraversal(root->right);
          for (size_t i = 0; i < ret.size(); i++)
               result.push_back(ret[i]);
     }
     return result;
}