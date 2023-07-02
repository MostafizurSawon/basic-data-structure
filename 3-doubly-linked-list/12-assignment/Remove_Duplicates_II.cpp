#include <bits/stdc++.h>
using namespace std;

int main()
{
  list<int>myList;
  int v;

  while(true)
  {
    cin >> v;
    if(v>=0)
    {
        myList.push_back(v);
    }
    else
    {
        break;
    }
  }

  myList.sort();
  myList.unique();

  for (int val : myList)
  {
      cout << val << " ";
  }

  return 0;
}

