#include <bits/stdc++.h>
queue<int> reverseElements(queue<int> q, int k)
{
  stack<int> st;
  queue<int> q2;
  while (k--)
  {
    st.push(q.front());
    q.pop();
  }
  while (!st.empty())
  {
    q2.push(st.top());
    st.pop();
  }
  while (!q.empty())
  {
    q2.push(q.front());
    q.pop();
  }
  return q2;
}

// https://www.codingninjas.com/studio/problems/reverse-first-k-elements-of-queue_982771