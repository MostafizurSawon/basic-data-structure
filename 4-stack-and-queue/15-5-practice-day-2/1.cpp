/****************************************************************

    Following is the class structure of the Node class:

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

*****************************************************************/

class Stack
{
  // Write your code here

public:
  Node *head;
  int sz;
  Stack()
  {
    // Write your code here
    head = NULL;
    sz = 0;
  }

  int getSize()
  {
    // Write your code here
    return sz;
  }

  bool isEmpty()
  {
    // Write your code here
    if (sz == 0)
      return true;
    else
      return false;
  }

  void push(int data)
  {
    // Write your code here
    sz++;
    Node *newNode = new Node(data);
    if (head == NULL)
    {
      head = newNode;
      return;
    }
    newNode->next = head;
    head = newNode;
  }

  void pop()
  {
    // Write your code here
    sz--;
    if (head == NULL)
      return;
    Node *deleteNode = head;

    head = head->next;

    delete deleteNode;
  }

  int getTop()
  {
    // Write your code here
    if (sz == 0)
      return -1;
    else
    {
      int k = head->data;
      return k;
    }
  }
};

// https://www.codingninjas.com/studio/problems/implement-stack-with-linked-list_630475?leftPanelTab=0