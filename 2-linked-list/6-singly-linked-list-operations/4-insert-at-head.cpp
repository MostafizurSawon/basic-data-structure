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
    cout<<endl<<"Inserted "<<val<<" at head successfully!"<<endl<<endl;
    return;
  }
  Node *tmp=head;
  while(tmp->next != NULL)
  {
    tmp=tmp->next;
  }
  tmp->next = newNode;
  cout<<"Inserted "<<val<<" at tail successfully!"<<endl<<endl;
}

void insert_at_any_position(Node *head, int pos, int val)
{
  Node *newNode = new Node(val);
  Node *tmp=head;
  for(int i=1; i<pos; i++)
  {
    tmp=tmp->next;
  }
  newNode->next = tmp->next;
  tmp->next = newNode;
  cout<<endl<<endl<<"Inserted at position "<<pos<<" successfully!"<<endl<<endl;
}

void insert_at_head(Node* &head,int val)
{
  Node* newNode = new Node(val);
  newNode->next = head;
  head=newNode;
  cout<<endl<<"Inserted at head"<<endl<<endl;
}

void print_linked_list(Node *head)
{
  Node *tmp=head;
  cout<<"Your linked list: ";
  while(tmp!=NULL)
  {
    
    cout<<tmp->val<<" ";
    tmp=tmp->next;
  }
  cout<<endl;
}

int main()
{
  Node *head=NULL;
  Node *tmp=head;
  while(1)
  {
    int choice;
    cout<<endl;
    cout<<"---------------- Insert to a linked list ----------------"<<endl;
    cout<<"Option 1: Insert at tail"<<endl;
    cout<<"Option 2: Print linked list"<<endl;
    cout<<"Option 3: Insert at any position"<<endl;
    cout<<"Option 4: Insert at head"<<endl;
    cout<<"Option 5: Terminate program"<<endl<<endl;
    cout<<"Your choice: ";
    cin>>choice;
    cout<<endl;
    if(choice==1)
    {
      int v;
      cout<<"Insert value: ";
      cin>>v;
      insert_at_tail(head,v);
    }
    else if(choice==2)
    {
      print_linked_list(head);
    }
    else if(choice==3)
    {
      int pos,val;
      cout<<endl<<"Insert Position: ";
      cin>>pos;
      cout<<endl<<"Insert Value: ";
      cin>>val;
      if(pos==0)
      {
        insert_at_head(head,val);
        
      }
      else
      {
        insert_at_any_position(head, pos,val);
      }
      cout<<endl<<endl;
      
    }
    else if(choice == 4)
    {
      int val;
      cout<<"Insert Value: ";
      cin>>val;
      insert_at_head(head,val);
    }
    else if(choice==5)
    {
      cout<<"Are you sure to terminate the linked list?(Enter yes/no)"<<endl;
      cout<<endl<<"Your choice: ";
      string ch;
      cin >> ch;
      if(ch=="yes")
      {
        cout<<endl<<"Thank you for using my program!"<<endl<<"Developed by Mostafziur1102@gmail.com"<<endl;
        break;
      }
      else
      {
        cout<<endl;
        cout<<"---------------- Insert to a linked list ----------------"<<endl;
        cout<<"Option 1: Insert at tail"<<endl;
        cout<<"Option 2: Print linked list"<<endl;
        cout<<"Option 3: Insert at any position"<<endl;
        cout<<"Option 4: Insert at head"<<endl;
        cout<<"Option 5: Terminate program"<<endl<<endl;
        cout<<"Your choice: ";
        cin>>choice;
        cout<<endl;
      }
    }
  }

  return 0;
}