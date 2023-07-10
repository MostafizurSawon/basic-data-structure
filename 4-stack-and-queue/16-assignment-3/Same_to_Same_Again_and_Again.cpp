#include <bits/stdc++.h>
using namespace std;

int main()
{
  stack<int> st;
  queue<int> q;
  int n, m;
  cin >> n >> m;

  while (n--)
  {
    int x;
    cin >> x;
    st.push(x);
  }
  while (m--)
  {
    int x;
    cin >> x;
    q.push(x);
  }

  if (st.size() != q.size())
  {
    cout << "NO";
    return 0;
  }

  bool flag = false;
  while (!st.empty())
  {
    if (st.top() != q.front())
    {
      flag = true;
      break;
    }
    st.pop();
    q.pop();
  }
  if (flag)
    cout << "NO";
  else
    cout << "YES";

  return 0;
}

// https://www.hackerrank.com/contests/assignment-03-a-basic-data-structures-a-batch-03/challenges/same-to-same-again
