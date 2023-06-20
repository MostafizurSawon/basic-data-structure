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

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void print_normal(Node *head)
{
  Node *tmp = head;
  while (tmp != NULL)
  {
      cout << tmp->val << " ";
      tmp = tmp->next;
  }
  cout << endl;
}

void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

void reverse(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j)
    {
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
    swap(i->val, j->val);
}

void palidrome(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    int flag = 1;
    while (i != j && i->next != j)
    {
      if(i->val!=j->val)
      {
        flag = 0;
      }
      i = i->next;
      j = j->prev;
    }
    if(i->val!=j->val)
    {
      flag = 0;
    }

    if(flag)  cout<<"YES";
    else cout<<"NO";
}

int main()
{
  Node *head = NULL;
  Node *tail = NULL;
  int val;
  while (true)
  {
      cin >> val;
      if (val == -1)
          break;
      insert_tail(head, tail, val);
  }

  // reverse(head,tail);
  palidrome(head,tail);
  // print_normal(head);
  // print_reverse(tail);

  return 0;
}