#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  cin.ignore();
  while (n--)
  {
    string sentence;
    getline(cin, sentence);
    string word;
    stringstream ss(sentence);
    map<string, int> mp;

    int m = INT_MIN;
    string ans = "";
    while (ss >> word)
    {
      mp[word]++;
      if (mp[word] > m)
      {
        m = mp[word];
        ans = word;
      }
    }
    cout << ans << " " << m << endl;
  }

  return 0;
}