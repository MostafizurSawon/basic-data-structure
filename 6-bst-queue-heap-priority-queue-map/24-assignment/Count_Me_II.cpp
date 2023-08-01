// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int x;
//   cin >> x;
//   while (x--)
//   {
//     int n;
//     cin >> n;
//     int ar[n];

//     for (int i = 0; i < n; i++)
//     {
//       cin >> ar[i];
//     }

//     map<int, int> mp;
//     for (int i = 0; i < n; i++)
//     {
//       mp[ar[i]]++;
//     }
//     int m = 0;
//     for (auto it = mp.begin(); it != mp.end(); it++)
//     {
//       if (it->second > m)
//         m = it->second;
//     }
//     list<int> in;
//     for (auto it = mp.begin(); it != mp.end(); it++)
//     {
//       if (it->second == m)
//       {
//         in.push_back(it->first);
//       }
//     }
//     in.sort(greater<int>());
//     cout << in.front() << " " << m << endl;
//   }

//   return 0;
// }

// way-> 2

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
    int ar[n];

    for (int i = 0; i < n; i++)
    {
      cin >> ar[i];
    }

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
      mp[ar[i]]++;
    }
    int m = 0;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
      if (it->second > m)
        m = it->second;
    }
    int cn = INT_MIN;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
      if (it->second == m)
      {
        if (it->first > cn)
          cn = it->first;
      }
    }
    cout << cn << " " << m << endl;
  }

  return 0;
}