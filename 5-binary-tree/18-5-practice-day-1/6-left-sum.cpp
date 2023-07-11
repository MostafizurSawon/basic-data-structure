#include <bits/stdc++.h>
/*
  Tree Node class.

  class BinaryTreeNode
  {
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
      this->data = data;
      left = NULL;
      right = NULL;
    }
  }
*/

long long leftSum(BinaryTreeNode<int> *root)
{
  // Write your code here.
  long long int ans = 0;

  if (root == NULL)
  {
    return ans;
  }

  queue<BinaryTreeNode<int> *> q;
  q.push(root);
  while (!q.empty())
  {
    BinaryTreeNode<int> *f = q.front();
    q.pop();

    if (f->left)
    {
      q.push(f->left);
      ans += f->left->data;
    }
    if (f->right)
      q.push(f->right);
  }

  return ans;
}

// https://www.codingninjas.com/studio/problems/left-sum_920380?leftPanelTab=0