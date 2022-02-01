#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    set<multiset<int>> s;
    multiset<int> ms = {4, 1, 2, 3};
    multiset<int> ms2 = {4, 1, 2, 5};
    vector<vector<int>> v1;

    s.insert(ms);
    s.insert(ms2);
    for (auto i : s)
    {
        v1.push_back(vector<int>(i.begin(), i.end()));
    }
    for (auto i : v1)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
    }
    vector<int> v(ms.begin(), ms.end());

    // for (int ele : v)
    // {
    //     cout << ele << " ";
    // }

    map<int, int> m;
    // m[5] = 0;
    // map<int, pair<int, int>> m;
    // m[5] = make_pair(5, 6);
    // cout << m.count(5);
    // cout << m[5].first << " " << m[5].second;
    // m[1] = true;
    // cout << m[5] << endl;
    // cout << m[1];
    vector<vector<int>> arr;
    arr.push_back({12, 12});
    // vector<int> a1 = {3, 1, 2};
    // vector<int>  a2 = {1, 2, 3};
    // cout << is_permutation(a2.begin(), a2.end(), a1.begin());
    return 0;
}
