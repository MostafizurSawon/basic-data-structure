class Solution
{
public:
  bool checkTree(TreeNode *root)
  {
    int p = root->val;
    int c = root->left->val + root->right->val;
    if (p == c)
      return true;
    else
      return false;
  }
};

// https://leetcode.com/problems/root-equals-sum-of-children/