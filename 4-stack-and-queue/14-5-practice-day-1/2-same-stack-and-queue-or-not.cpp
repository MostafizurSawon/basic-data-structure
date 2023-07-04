#include <bits/stdc++.h>
using namespace std;

int main()
{
  stack<int> st;
  queue<int> q;
  int n, m;
  cin >> n;
  while (n--)
  {
    int x;
    cin >> x;
    st.push(x);
  }
  cin >> m;
  while (m--)
  {
    int x;
    cin >> x;
    q.push(x);
  }

  if (m != n)
    cout << "NO";
  else
  {
    int flag = 1;
    while (!st.empty())
    {
      if (st.top() != q.front())
      {
        flag = 0;
        break;
      }
      q.pop();
      st.pop();
    }
    if (flag)
      cout << "YES";
    else
      cout << "NO";
  }

  return 0;
}
