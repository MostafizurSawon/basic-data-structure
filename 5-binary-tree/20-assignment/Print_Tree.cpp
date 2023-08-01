#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int val;
  Node *left;
  Node *right;
  Node(int val)
  {
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};

Node *input_tree()
{
  int val;
  cin >> val;
  Node *root;
  if (val == -1)
    root = NULL;
  else
    root = new Node(val);
  queue<Node *> q;
  if (root)
    q.push(root);
  while (!q.empty())
  {
    // 1. Pop
    Node *p = q.front();
    q.pop();

    // 2. All work
    int l, r;
    cin >> l >> r;
    Node *myLeft;
    Node *myRight;
    if (l == -1)
      myLeft = NULL;
    else
      myLeft = new Node(l);
    if (r == -1)
      myRight = NULL;
    else
      myRight = new Node(r);

    p->left = myLeft;
    p->right = myRight;

    // 3. Push children to recursion
    if (p->left)
      q.push(p->left);
    if (p->right)
      q.push(p->right);
  }
  return root;
}

vector<int> v;
void level_order(Node *root)
{
  queue<Node *> q;
  if (root)
    q.push(root);
  while (!q.empty())
  {
    Node *nd = q.front();
    q.pop();
    v.push_back(nd->val);

    if (nd->right)
      q.push(nd->right);
    if (nd->left)
      q.push(nd->left);
  }
  reverse(v.begin(), v.end());
}

int main()
{
  Node *root = input_tree();
  level_order(root);
  for (auto it = v.begin(); it != v.end(); it++)
    cout << *it << " ";

  return 0;
}

// https://www.hackerrank.com/contests/assignment-04-a-basic-data-structures-a-batch-03/challenges/print-tree-3