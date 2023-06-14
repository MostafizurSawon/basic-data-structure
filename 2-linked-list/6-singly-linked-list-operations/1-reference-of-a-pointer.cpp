#include<bits/stdc++.h>
using namespace std;

void fun(int * &p)
{
  *p=4;
  cout <<"fun->"<< &p << endl;
}

int main()
{
  int a=2;
  int *ptr=&a;
  fun(ptr);
  cout<<&ptr<<endl;
  cout<<&a<<endl;

  return 0;
}