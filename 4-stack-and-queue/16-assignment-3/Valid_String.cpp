#include <bits/stdc++.h>
using namespace std;

int main()
{
  stack<char> str;
  int n;
  cin >> n;
  while (n--)
  {
    string str;
    cin >> str;
    int counter = 0;
    for (char c : str)
    {
      if (c == 'A')
        counter++;
      else
        counter--;
    }
    if (counter == 0)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}

// https://www.hackerrank.com/contests/assignment-03-a-basic-data-structures-a-batch-03/challenges/valid-parentheses-16