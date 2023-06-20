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

void check_same(Node *head, Node *head2)
{
  Node *tmp=head;
  Node *tmp2=head2;
  bool flag=true;
  while(tmp!=NULL)
  {
    if(tmp->val != tmp2->val)
    {
      flag=false;
      break;
    }
    tmp=tmp->next;
    tmp2=tmp2->next;
  }
  if(flag==true) cout<<"YES";
  else cout<<"NO";
}

int main()
{
  int val;
  Node *head = NULL;
  Node *head2 = NULL;
  while(true)
  {
    cin>>val;
    if(val==-1) break;
    insert_at_tail(head, val);
  }
  while(true)
  {
    cin>>val;
    if(val==-1) break;
    insert_at_tail(head2, val);
  }
  if(size(head)!=size(head2)) cout<<"NO"<<endl;
  else check_same(head,head2);

  return 0;
}