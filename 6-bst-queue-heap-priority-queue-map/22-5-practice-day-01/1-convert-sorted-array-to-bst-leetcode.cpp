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
  TreeNode *convert(vector<int> &nums, int left, int right)
  {
    if (left > right)
      return NULL;
    int mid = (left + right) / 2;
    TreeNode *NewNode = new TreeNode(nums[mid]);
    NewNode->left = convert(nums, left, mid - 1);
    NewNode->right = convert(nums, mid + 1, right);
    return NewNode;
  }
  TreeNode *sortedArrayToBST(vector<int> &nums)
  {
    return convert(nums, 0, nums.size() - 1);
  }
};

// https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/description/