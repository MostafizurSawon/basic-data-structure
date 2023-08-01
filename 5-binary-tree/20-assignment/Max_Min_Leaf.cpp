#include <bits/stdc++.h>
using namespace std;

int ma = INT_MIN;
int mi = INT_MAX;

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

void min_max(Node *root)
{
  if (root == NULL)
    return;
  if (root->left == NULL && root->right == NULL)
  {
    if (root->val > ma)
      ma = root->val;
    if (root->val < mi)
      mi = root->val;
  }
  else
  {
    min_max(root->left);
    min_max(root->right);
  }
}

int main()
{
  Node *root = input_tree();
  min_max(root);
  cout << ma << " " << mi << endl;

  return 0;
}

// https://www.hackerrank.com/contests/assignment-04-a-basic-data-structures-a-batch-03/challenges/max-min-leaf/problem