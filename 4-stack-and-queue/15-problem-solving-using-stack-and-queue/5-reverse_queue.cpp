#include <bits/stdc++.h>
queue<int> reverseQueue(queue<int> q)
{
  // Write your code here.
  stack<int> s;
  while (!q.empty())
  {
    s.push(q.front());
    q.pop();
  }
  while (!s.empty())
  {
    q.push(s.top());
    s.pop();
  }

  return q;
}

https: // www.codingninjas.com/studio/problems/reversing-a-queue_982934?leftPanelTab=1