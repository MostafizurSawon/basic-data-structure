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

void insert_at_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i < pos; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;  
    tmp->next = newNode;           
    newNode->next->prev = newNode; 
    newNode->prev = tmp;           
}

void print_normal(Node *head)
{
  Node *tmp = head;
  if(tmp!=NULL) cout<<"L -> ";
  while (tmp != NULL)
  {
      cout << tmp->val << " ";
      tmp = tmp->next;
  }
  if(tmp==NULL) cout << endl;
}

void print_reverse(Node *tail)
{
    Node *tmp = tail;
    if(tmp!=NULL) cout<<"R -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    if(tmp==NULL) cout << endl;
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

int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

int main()
{
  Node *head = NULL;
  Node *tail = NULL;
  int n;
  cin >> n;
  while (n--)
  {
    int pos, val;
    cin >> pos >> val;
    int flag = 0;
    if (val == -1)  break;
    if (pos > size(head))
    {
      cout << "Invalid" <<endl;
      flag=1;
    }
    else if (pos == 0)
    {
      insert_head(head, tail, val);
    }
    else if (pos == size(head))
    {
      insert_tail(head, tail, val);
    }
    else
    {
      insert_at_position(head, pos, val);
    }
  
    
    if(head != NULL && flag == 0)  print_normal(head);
    if(head != NULL && flag == 0)  print_reverse(tail);
  }
  

  return 0;
}