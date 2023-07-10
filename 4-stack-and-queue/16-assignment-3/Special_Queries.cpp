#include <bits/stdc++.h>
using namespace std;

int main()
{
  queue<string> q;
  int n;
  cin >> n;
  while (n--)
  {
    int x;
    string str;
    cin >> x;
    if (x == 0)
    {
      cin >> str;
      q.push(str);
    }
    else
    {
      if (!q.empty())
      {
        cout << q.front() << endl;
        q.pop();
      }
      else
        cout << "Invalid" << endl;
    }
  }

  return 0;
}

// https://www.hackerrank.com/contests/assignment-03-a-basic-data-structures-a-batch-03/challenges/special-queries-1-1