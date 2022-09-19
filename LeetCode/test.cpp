#include <bits/stdc++.h>
int n = 10;

using namespace std;
int main()
{
    map<int, bool> m;
    m[1] = !m[1];
    cout << m[1];
    m[1] = !m[1];
    cout << m[1];

    return 0;
}