#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        int x;
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            sum += x;
        }
        if (sum == 0)
        {
            return i;
        }
    }
    return 0;
}