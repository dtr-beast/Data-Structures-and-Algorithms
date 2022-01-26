#include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;

void rStack(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int c = s.top();
    s.pop();
    rStack(s);
    cout << c << "\n";
}

int main()
{
    int n;
    cin >> n;
    stack<int> s;
    while (n--)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    rStack(s);
    return 0;
}