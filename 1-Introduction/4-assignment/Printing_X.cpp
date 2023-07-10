#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;cin >> n;
  int s=0;
  int b=n-1;
  for (int i = 0; i < n/2; i++)
  {
      for(int j = 0; j < b; j++)
      {
        if(j==s) cout<<"\\";
        if(j==b-1) cout<<"/";
        if(j!=s || j!=b-1)
        {
          cout<<" ";
        }
      }
      s++;
      b--;
      cout<<endl;
  }
  for(int i=0;i<s;i++)
  {
    cout<<" ";
  }
  cout<<'X'<<endl;
  
  for (int i = 0; i < n/2; i++)
  {
      for(int j = 0; j < n; j++)
      {
        if(j==s) cout<<"\\";
        if(j==b-1) cout<<"/";
        if(j!=s || j!=b-1)
        {
          cout<<" ";
        }
      }
      s++;
      b--;
      cout<<endl;
  }
  

  return 0;
}