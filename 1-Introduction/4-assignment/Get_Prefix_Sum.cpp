#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;cin >> n;
  long long int a[n];
  for(int i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  for(int i = 1; i < n; i++)
  {
    a[i] = a[i-1]+a[i];
  }
  for(int i = 0,j=n-1; i < j; i++,j--)
  {
    long long int tmp=a[i];
    a[i] = a[j];
    a[j] = tmp;
  }
  for(int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }


  return 0;
}