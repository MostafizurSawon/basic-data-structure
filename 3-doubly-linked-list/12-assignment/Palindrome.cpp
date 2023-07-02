#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int val;
  Node *next;
  Node(int val)
  {
    this->val = val;
    this->next = NULL;
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
  tail = tail->next;
}

void reverse(Node *&head, Node *cur)
{
    if (cur->next == NULL)
    {
        head = cur;
        return;
    }
    reverse(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}

void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

bool isPalindrome(Node *head)
{
    Node *newHead = NULL;
    Node *newTail = NULL;
    Node *tmp = head;
    while (tmp != NULL)
    {
        insert_tail(newHead, newTail, tmp->val);
        tmp = tmp->next;
    }
    reverse(newHead, newHead);
    // print_list(newHead);
    tmp = head;
    Node *tmp2 = newHead;
    while (tmp != NULL)
    {
        if (tmp->val != tmp2->val)
        {
            return false;
        }
        tmp = tmp->next;
        tmp2 = tmp2->next;
    }
    return true;
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

  bool ans=isPalindrome(head);

  if (ans) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}




// #include<bits/stdc++.h>
// using namespace std;

// class Node
// {
//     public:
//         int val;
//         Node* next;
//     Node(int val)
//     {
//         this->val=val;
//         this->next=NULL;
//     }
// };

// void insert_at_head(Node* &head,int val)
// {
//   Node* newNode = new Node(val);
//   newNode->next = head;
//   head=newNode;
// }

// void insert_at_tail(Node *&head, int val)
// {
//   Node *newNode = new Node(val);
//   if(head==NULL)
//   {
//     head = newNode;
//     return;
//   }
//   Node *tmp=head;
//   while(tmp->next != NULL)
//   {
//     tmp=tmp->next;
//   }
//   tmp->next = newNode;
// }

// int size(Node *head)
// {
//   Node *tmp=head;
//   int count=0;
//   while(tmp!=NULL)
//   {
//     count++;
//     tmp=tmp->next;
//   }
//   return count;
// }

// void check_same(Node *head, Node *head2)
// {
//   Node *tmp=head;
//   Node *tmp2=head2;
//   bool flag=true;
//   while(tmp!=NULL)
//   {
//     if(tmp->val != tmp2->val)
//     {
//       flag=false;
//       break;
//     }
//     tmp=tmp->next;
//     tmp2=tmp2->next;
//   }
//   if(flag==true) cout<<"YES";
//   else cout<<"NO";
// }

// void print(Node* head)
// {
//   while(head!=NULL)
//   {
//     cout<<head->val<<" ";
//     head=head->next;
//   }
//   cout<<endl;
// }

// int main()
// {
//   int val;
//   Node *head = NULL;
//   Node *head2 = NULL;
//   while(true)
//   {
//     cin>>val;
//     if(val==-1) break;
//     insert_at_tail(head, val);
//   }
//   Node *tmp=head;
//   while(tmp!=NULL)
//   {
//     insert_at_head(head2,tmp->val);
//     tmp=tmp->next;
//   }

//   // print(head);
//   // print(head2);

//   if(size(head)!=size(head2)) cout<<"NO"<<endl;
//   else check_same(head,head2);

//   return 0;
// }