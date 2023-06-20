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

int main()
{
  list<int>myList;
  list<int>myList2;
  int v;
  while(true)
  {
    cin >> v;
    if(v>=0)
    {
        myList.push_back(v);
    }
    else
    {
        break;
    }
  }

  int v2;
  while(true)
  {
    cin >> v2;
    if(v2>=0)
    {
        myList2.push_back(v2);
    }
    else
    {
        break;
    }
  }
  if(myList==myList2) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;

//   for (int val : myList)
//     {
//         cout << val << " ";
//     }


    return 0;
}