#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;cin >> n;
  vector<int>a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int m;cin >> m;
  vector<int>a2(m);
  for (int i = 0; i < m; i++)
  {
    cin >> a2[i];
  }
  int x;cin >> x;
  a.insert(a.begin()+x,a2.begin(),a2.end());
  for(int i = 0; i <size(a); i++)
  {
    cout << a[i] << " ";
  }

  return 0;
}