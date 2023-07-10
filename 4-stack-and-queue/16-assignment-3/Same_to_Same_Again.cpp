#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int val;
  Node *next;
  Node *prev;
  Node(int val)
  {
    this->val = val;
    this->next = NULL;
    this->prev = NULL;
  }
};

class myStack
{
public:
  Node *head = NULL;
  Node *tail = NULL;
  int sz = 0;
  void push(int val)
  {
    sz++;
    Node *newNode = new Node(val);
    if (head == NULL)
    {
      head = newNode;
      tail = newNode;
      return;
    }
    newNode->prev = tail;
    tail->next = newNode;
    tail = tail->next;
  }
  void pop()
  {
    sz--;
    Node *deleteNode = tail;
    tail = tail->prev;
    if (tail == NULL)
    {
      head = NULL;
    }
    else
    {
      tail->next = NULL;
    }

    delete deleteNode;
  }
  int top()
  {
    return tail->val;
  }
  int size()
  {
    return sz;
  }
  bool empty()
  {
    if (sz == 0)
      return true;
    else
      return false;
  }
};

class myQueue
{
public:
  Node *head = NULL;
  Node *tail = NULL;
  int sz = 0;

  void push(int val)
  {
    sz++;
    Node *newNode = new Node(val);
    if (head == NULL)
    {
      head = newNode;
      tail = newNode;
      return;
    }
    tail->next = newNode;
    tail = tail->next;
  }

  void pop()
  {
    sz--;
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;

    if (head == NULL)
    {
      tail = NULL;
    }
  }

  int front()
  {
    return head->val;
  }

  int size()
  {
    return sz;
  }

  bool empty()
  {
    if (sz == 0)
      return true;
    else
      return false;
  }
};

int main()
{
  myStack st;
  myQueue q;

  int n, m;
  cin >> n >> m;

  while (n--)
  {
    int x;
    cin >> x;
    st.push(x);
  }

  while (m--)
  {
    int x;
    cin >> x;
    q.push(x);
  }

  int s1 = st.size();
  int s2 = q.size();
  if (s1 != s2)
  {
    cout << "NO";
    return 0;
  }

  bool flag = false;
  while (!st.empty())
  {
    if (st.top() != q.front())
    {
      flag = true;
      break;
    }
    st.pop();
    q.pop();
  }
  if (flag)
    cout << "NO";
  else
    cout << "YES";

  return 0;
}

// https://www.hackerrank.com/contests/assignment-03-a-basic-data-structures-a-batch-03/challenges/same-to-same-again-1