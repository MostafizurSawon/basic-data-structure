#include<bits/stdc++.h>
using namespace std;

class Node
{
  public:
    int val;
    Node* next;
};

int main()
{
  Node a,b,c;
  a.val = 2;
  b.val = 4;
  c.val = 8;

  a.next=&b;
  b.next=&c;
  c.next=NULL;
  cout<<a.val<<endl;
  cout<<b.val<<endl;
  cout<<c.val<<endl;

  cout<<a.next->val<<endl;
  cout<<b.next->val<<endl;
  // cout<<c.next->val<<endl;
  cout<<(*a.next).val<<endl;

  return 0;
}