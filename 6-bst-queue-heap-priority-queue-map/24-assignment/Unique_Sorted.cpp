// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int n;
//   cin >> n;
//   while (n--)
//   {
//     int x;
//     cin >> x;
//     list<int> myList(x);
//     for (int i = 0; i < x; i++)
//     {
//       int t;
//       cin >> t;
//       myList.push_back(t);
//     }
//     myList.sort(greater<int>());
//     myList.unique();
//     for (auto it = myList.begin(); it != myList.end(); it++)
//     {
//       if (*it)
//         cout << *it << " ";
//     }

//     cout << endl;
//   }

//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x;
  cin >> x;
  while (x--)
  {
    set<int> s;
    int n;
    cin >> n;
    while (n--)
    {
      int x;
      cin >> x;
      s.insert(x);
    }

    for (auto it = s.rbegin(); it != s.rend(); it++)
    {
      cout << *it << " ";
    }
    cout << endl;
  }

  return 0;
}
