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

void max_min(Node *head)
{
  Node *tmp=head;
  int mx=tmp->val;
  int mn=tmp->val;
  while(tmp!=NULL)
  {
    if(tmp->val>mx) mx=tmp->val;
    if(tmp->val<mn) mn=tmp->val;
    tmp=tmp->next;
  }
  cout<<mx<<" "<<mn<<endl;
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
  max_min(head);

  return 0;
}