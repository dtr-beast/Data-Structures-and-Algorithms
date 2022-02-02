#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    v.erase(v.begin() + 1);
    // int n;
    // cin >> n;
    // multiset<int> ms;

    // while (n--)
    // {
    //     int x;
    //     cin >> x;
    //     ms.insert(x);
    // }
    for (auto ele : v)
    {
        cout << ele << " ";
    }
    return 0;
}