

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

void getLeftView(Node *root, int x)
{
  //    Write your code here
  bool frq[1005] = {false};
  queue<pair<Node *, int>> q;
  if (root)
    q.push({root, 0});
  while (!q.empty())
  {
    pair<Node *, int> pr = q.front();
    q.pop();
    Node *node = pr.first;
    int level = pr.second;

    if (level == x)
      v.push_back(node->val);

    if (node->left)
      q.push({node->left, level + 1});
    if (node->right)
      q.push({node->right, level + 1});
  }
}

int main()
{
  Node *root = input_tree();
  int n;
  cin >> n;
  getLeftView(root, n);
  if (!v.empty())
  {
    for (auto it = v.begin(); it != v.end(); it++)
      cout << *it << " ";
  }
  else
    cout << "Invalid" << endl;

  return 0;
}

// https://www.hackerrank.com/contests/assignment-04-a-basic-data-structures-a-batch-03/challenges/level-nodes-2