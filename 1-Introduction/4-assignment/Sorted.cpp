#include<bits/stdc++.h>
using namespace std;

int main()
{
  int x;cin >> x;
  while(x--)
  {
    int n;cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
      cin>>a[i];
    }
    bool flag = false;
    for(int i = 0; i < n-1; i++)
    {
      if( a[i] > a[i+1])
      {
        flag = true;
        break;
      }
    }
    if(flag) cout << "NO" << endl;
    else cout<< "YES" << endl;
  }


  return 0;
}