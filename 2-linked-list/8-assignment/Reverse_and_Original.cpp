#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_reverse(Node *n)
{
    if (n == NULL)  return;

    print_reverse(n->next);
    cout << n->val << " ";
}

void print_linked_list(Node *n)
{
    if (n == NULL)  return;

    cout << n->val << " ";
    print_linked_list(n->next);
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

  print_reverse(head);
  cout<<endl;
  print_linked_list(head);

  return 0;
}