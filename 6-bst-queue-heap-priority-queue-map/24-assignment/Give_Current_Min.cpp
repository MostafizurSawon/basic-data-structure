// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int x;
//   cin >> x;
//   list<int> myList(x);

//   for (int i = 0; i < x; i++)
//   {
//     int n;
//     cin >> n;
//     myList.push_back(n);
//   }
//   myList.remove(0);
//   myList.sort();

//   int n;
//   cin >> n;

//   while (n--)
//   {
//     int x;
//     cin >> x;
//     if (x == 0)
//     {
//       int t;
//       cin >> t;
//       myList.push_back(t);
//       myList.sort();
//       cout << myList.front() << endl;
//     }
//     else if (x == 1)
//     {
//       if (myList.empty())
//       {
//         cout << "Empty" << endl;
//       }
//       else
//       {
//         cout << myList.front() << endl;
//       }
//     }
//     else if (x == 2)
//     {
//       if (myList.empty())
//       {
//         cout << "Empty" << endl;
//       }
//       else
//       {
//         myList.pop_front();
//         if (myList.empty())
//         {
//           cout << "Empty" << endl;
//         }
//         else
//         {
//           cout << myList.front() << endl;
//         }
//       }
//     }
//   }

//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  priority_queue<int, vector<int>, greater<int>> pq;
  while (n--)
  {
    int x;
    cin >> x;
    pq.push(x);
  }
  int t;
  cin >> t;
  while (t--)
  {
    int c;
    cin >> c;
    if (c == 0)
    {
      int x;
      cin >> x;
      pq.push(x);
      cout << pq.top() << endl;
    }
    else if (c == 1)
    {
      if (pq.empty())
      {
        cout << "Empty" << endl;
      }
      else
        cout << pq.top() << endl;
    }
    else if (c == 2)
    {
      if (pq.empty())
      {
        cout << "Empty" << endl;
      }
      else
      {
        pq.pop();
        if (pq.empty())
        {
          cout << "Empty" << endl;
        }
        else
          cout << pq.top() << endl;
      }
    }
  }

  return 0;
}
