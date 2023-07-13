/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
int x;
class Solution
{
public:
  int ans(TreeNode *root, int x)
  {
    if (!root)
      return 1;
    if (root->val != x)
      return 0;
    int l = ans(root->left, x);
    int r = ans(root->right, x);
    return (l && r);
    // return ans(root->left,x) and ans(root->right,x);
  }
  bool isUnivalTree(TreeNode *root)
  {
    if (!root)
      return false;
    // return ans(root, root->val);
    bool a = ans(root, root->val);
    return a;
  }
};

// https://leetcode.com/problems/univalued-binary-tree/description/