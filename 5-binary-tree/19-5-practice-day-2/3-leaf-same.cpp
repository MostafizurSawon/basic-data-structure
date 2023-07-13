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
  void leaf_operation(TreeNode *root, vector<int> &v)
  {
    if (!root)
      return;
    if (root->left == NULL && root->right == NULL)
      v.push_back(root->val);

    leaf_operation(root->left, v);
    leaf_operation(root->right, v);
  }
  bool leafSimilar(TreeNode *root1, TreeNode *root2)
  {
    vector<int> v1;
    vector<int> v2;
    leaf_operation(root1, v1);
    leaf_operation(root2, v2);
    if (v1 == v2)
      return true;
    else
      return false;
  }
};

// https://leetcode.com/problems/leaf-similar-trees/description/