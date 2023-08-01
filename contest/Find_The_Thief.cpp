#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int x;
    cin >> x;
    int ar[x];

    for (int i = 0; i < x; i++)
    {
      cin >> ar[i];
    }
    sort(ar, ar + x);
    int ans;
    for (int i = 0; i < x; i += 2)
    {
      // if (ar[i + 1])
      if (ar[i] != ar[i + 1])
      {
        ans = ar[i];
        break;
      }
      // cout << ar[i] << endl;
    }
    cout << ans << endl;
  }

  return 0;
}