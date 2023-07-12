// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int n;
//   cin >> n;
//   queue<char> cr;
//   stack<char> ans;
//   stack<char> st;
//   while (n--)
//   {
//     int x;
//     cin >> x;
//     while (x--)
//     {
//       char c;
//       cin >> c;
//       cr.push(c);
//     }

//     while (!cr.empty())
//     {
//       char a1 = cr.front();
//       cr.pop();
//       char a2;
//       if (cr.empty())
//       {
//         ans.push(a1);
//         break;
//       }
//       else
//       {
//         a2 = cr.front();
//         cr.pop();
//       }

//       if ((a1 == 'R' & a2 == 'B') || (a1 == 'B' & a2 == 'R'))
//       {
//         ans.push('P');
//       }
//       else if ((a1 == 'R' & a2 == 'G') || (a1 == 'G' & a2 == 'R'))
//       {
//         ans.push('Y');
//       }
//       else if ((a1 == 'B' & a2 == 'G') || (a1 == 'G' & a2 == 'B'))
//       {
//         ans.push('C');
//       }
//     }

//     while (!ans.empty())
//     {
//       if (st.empty())
//       {
//         st.push(ans.top());
//         ans.pop();
//       }
//       else if (st.top() != ans.top())
//       {
//         st.push(ans.top());
//         ans.pop();
//       }
//       else
//       {
//         st.pop();
//         ans.pop();
//       }
//     }

//     while (!st.empty())
//     {
//       cout << st.top();
//       st.pop();
//     }

//     cout << endl;
//   }

//   return 0;
// }

// https://www.hackerrank.com/contests/assignment-03-a-basic-data-structures-a-batch-03/challenges/magic-colors-and-the-magician

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int T;
  cin >> T;
  for (int t = 0; t < T; t++)
  {
    int N;
    cin >> N;
    string colors;
    cin >> colors;
    stack<char> box;
    stack<char> box2;
    for (char c : colors)
    {
      if (!box.empty())
      {
        char top = box.top();
        if ((c == 'R' && top == 'B') || (c == 'B' && top == 'R'))
        {
          box.pop();
          box.push('P');
        }
        else if ((c == 'R' && top == 'G') || (c == 'G' && top == 'R'))
        {
          box.pop();
          box.push('Y');
        }
        else if ((c == 'B' && top == 'G') || (c == 'G' && top == 'B'))
        {
          box.pop();
          box.push('C');
        }
        else if (c == top)
        {
          box.pop();
        }
        else
        {
          box.push(c);
        }
      }
      else
      {
        box.push(c);
      }
    }
    while (!box.empty())
    {
      if (box2.empty())
      {
        box2.push(box.top());
        box.pop();
      }
      else if (box2.top() != box.top())
      {
        box2.push(box.top());
        box.pop();
      }
      else
      {
        box2.pop();
        box.pop();
      }
    }
    while (!box2.empty())
    {
      cout << box2.top();
      box2.pop();
    }

    cout << endl;
  }

  return 0;
}