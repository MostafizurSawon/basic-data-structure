#include <bits/stdc++.h>
using namespace std;

int main()
{
  queue<int> q;
  int n;
  cin >> n;

  while (n--)
  {
    int x;
    cin >> x;
    q.push(x);
  }

  cout << q.size() << endl;
  while (!q.empty())
  {
    cout << q.front() << " ";
    q.pop();
  }

  return 0;
}