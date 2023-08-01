#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x;
  cin >> x;
  while (x--)
  {
    int n;
    cin >> n;
    int arr[n];
    int m = INT_MAX;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      if (arr[i] < m)
        m = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
      cout << arr[i] << " ";
    }
  }

  // cout << endl
  //      << m << endl;

  return 0;
}