#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 3)
    {
        cout << 1;
        return 0;
    }
    if (n == 3)
    {
        cout << 2;
        return 0;
    }

    int dp[n + 1] = {};
    dp[0] = dp[1] = dp[2] = 1;
    dp[3] = 2;

    for (int i = 4; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 3] + dp[i - 4];
    }
    cout << dp[n];
    return 0;
}