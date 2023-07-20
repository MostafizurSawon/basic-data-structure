#include <bits/stdc++.h>
class Node
{
public:
  int data;
  Node *next;
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};

class Queue
{
public:
  Node *head;
  Node *tail;
  int sz;
  Queue()
  {
    // Implement the Constructor
    head = NULL;
    tail = NULL;
    sz = 0;
  }

  /*----------------- Public Functions of Queue -----------------*/

  bool isEmpty()
  {
    // Implement the isEmpty() function
    if (sz == 0)
      return true;
    else
      return false;
  }

  void enqueue(int data)
  {
    // Implement the enqueue() function
    sz++;
    Node *newNode = new Node(data);
    if (head == NULL)
    {
      head = newNode;
      tail = newNode;
      return;
    }
    tail->next = newNode;
    tail = tail->next;
  }

  int dequeue()
  {
    // Implement the dequeue() function

    if (head == NULL)
      return -1;
    int k = head->data;
    Node *tmp = head;
    Node *deleteNode = tmp;

    head = head->next;

    delete deleteNode;
    sz--;
    return k;
  }

  int front()
  {
    // Implement the front() function
    if (sz == 0)
      return -1;
    else
      return head->data;
  }
};

// https://www.codingninjas.com/studio/problems/queue-using-array-or-singly-linked-list_2099908?leftPanelTab=0