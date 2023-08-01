#include <bits/stdc++.h>
using namespace std;

int main()
{
  string str;

  while (getline(cin, str))
  {
    stringstream ss(str);
    string word;
    string ans = "";
    while (ss >> word)
    {
      ans += word;
    }

    sort(ans.begin(), ans.end());
    cout << ans << endl;
  }

  return 0;
}