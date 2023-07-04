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

int main()
{
  myStack st, st2;
  int flag = 1;
  int n, m;
  cin >> n;

  while (n--)
  {
    int x;
    cin >> x;
    st.push(x);
  }
  cin >> m;

  while (m--)
  {
    int x;
    cin >> x;
    st2.push(x);
  }
  if (n != m)
    cout << "NO";
  else
  {
    while (!st.empty())
    {
      if (st.top() != st2.top())
      {
        flag = 0;
        break;
      }
      st2.pop();
      st.pop();
    }

    if (flag)
      cout << "YES";
    else
      cout << "NO";
  }

  return 0;
}