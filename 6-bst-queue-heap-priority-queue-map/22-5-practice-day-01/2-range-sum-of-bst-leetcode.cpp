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
class Solution
{
public:
  int sum = 0;
  void calculate(TreeNode *root, int l, int h)
  {
    if (!root)
      return;
    calculate(root->left, l, h);
    if (root->val >= l && root->val <= h)
      sum += root->val;
    calculate(root->right, l, h);
  }

  int rangeSumBST(TreeNode *root, int low, int high)
  {
    calculate(root, low, high);
    return sum;
  }
};

// https://leetcode.com/problems/range-sum-of-bst/description/