#include <bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int cnt = 0;

int mm(TreeNode<int> *root)
{
  if (root == NULL)
    return 0;
  int l = mm(root->left);
  int r = mm(root->right);
  cnt = max(l, r) + 1;
}

int maxDepth(TreeNode<int> *root)
{
  // Write your code here.
  cnt = 0;
  int ans = mm(root);
  return cnt - 1;
}

// https://www.codingninjas.com/studio/problems/tree-height_4609628