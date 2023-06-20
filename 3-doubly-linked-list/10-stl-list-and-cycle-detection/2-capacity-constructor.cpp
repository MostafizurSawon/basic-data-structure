#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30, 40};
    // cout << myList.max_size();
    // myList.clear();
    myList.resize(3);
    myList.resize(5, 100);
    cout << myList.size() << endl;
    for (int val : myList)
    {
        cout << val << " ";
    }
    return 0;
}