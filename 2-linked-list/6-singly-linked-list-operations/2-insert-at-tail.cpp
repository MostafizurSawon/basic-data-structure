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
    cout<<"---------------- Insert at tail to a linked list ----------------"<<endl;
    cout<<"Option 1: Insert at tail"<<endl;
    cout<<"Option 2: Print linked list"<<endl;
    cout<<"Option 3: Terminate program"<<endl<<endl;

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
        cout<<"---------------- Insert at tail to a linked list ----------------"<<endl<<endl;
        cout<<"Option 1: Insert at tail"<<endl;
        cout<<"Option 2: Print linked list"<<endl;
        cout<<"Option 3: Terminate program"<<endl<<endl;
        cout<<"Your choice: ";
        cin>>choice;
        cout<<endl;
      }
    }
  }

  return 0;
}