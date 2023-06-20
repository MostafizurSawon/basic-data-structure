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

void insert_at_tail(Node *&head, int val)
{
  Node *newNode = new Node(val);
  if(head==NULL)
  {
    head = newNode;
    return;
  }
  Node *tmp=head;
  while(tmp->next != NULL)
  {
    tmp=tmp->next;
  }
  tmp->next = newNode;
}

void sort(Node *head)
{
  for (Node *i = head; i->next != NULL; i = i->next)
  {
      for (Node *j = i->next; j != NULL; j = j->next)
      {
          if (i->val < j->val)
          {
              swap(i->val, j->val);
          }
      }
  }
}

int size(Node *head)
{
  Node *tmp=head;
  int count=0;
  while(tmp!=NULL)
  {
    count++;
    tmp=tmp->next;
  }
  return count;
}

void print_mid(Node *head)
{
  Node *tmp=head;
  int mid=size(head);
  int pos=0;
  if(mid%2!=0) pos=mid/2+1;
  else pos=mid/2;

  for (int i = 1; i < pos ; i++)
  {
      tmp = tmp->next;
  }
  if(mid%2!=0) cout<<tmp->val<<endl;
  else cout<<tmp->val<<" "<<tmp->next->val<<endl;
}

int main()
{
  int val;
  Node *head = NULL;
  while(true)
  {
    cin>>val;
    if(val==-1) break;
    insert_at_tail(head, val);
  }

  sort(head);
  print_mid(head);

  return 0;
}