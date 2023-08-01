#include <bits/stdc++.h>
using namespace std;

int countDistinct(int arr[], int n)
{
  int ans = 1;

  for (int i = 1; i < n; i++)
  {
    int j = 0;
    for (j = 0; j < i; j++)
    {
      if (arr[i] == arr[j])
        break;
    }

    if (i == j)
      ans++;
  }

  return ans;
}

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
    cout << x - countDistinct(ar, x) << endl;
  }

  return 0;
}