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

void insert_head(Node* &head, Node* &tail, int val)
{
  Node *newNode = new Node(val);
  if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
  else
  {
    newNode->next=head;
    head=newNode;
  }
}

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

int main()
{
  int n;
  cin >> n;
  Node *head = NULL;
  Node *tail = NULL;

  while(n--)
  { 
    int x,val;
      
    cin >> x >> val;
    if(x == 0)  insert_head(head, tail, val);
    
    else  insert_tail(head, tail, val);
    
    cout<<head->val<<" "<<tail->val<<endl;
  }

  return 0;
}