#include <bits/stdc++.h>
using namespace std;

long long largPow(int base, long exponent)
{
    long long result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
        {
            result = (result * base) % 1000000007;
        }
        base = (base * base) % 1000000007;
        exponent = exponent / 2;
    }
    return result;
}

int main()
{
    long c = 1000000007;
    long a = 1, b = 15;
    long long powAns = (largPow(b, c - 2) % c);
    cout << ((a % c) * (powAns) % c) << endl;
    return 0;
}