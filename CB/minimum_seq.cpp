#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        vector<int> arr(str.size());
        int mini = 0, maxi = 0;
        int cmin = 0, cmax = 0;
        for (char c : str)
        {
            if (c == 'I')
            {
                cmax++;
                cmin++;
                maxi = max(maxi, cmax);
            }
            else
            {
                cmax--;
                cmin--;
                mini = min(mini, cmin);
            }
        }
        if (mini < 0)
        {
            int num = abs(mini) + 1;
            while (num)
            {
                cout << num--;
            }
        }
        else
        {
            int num = 1;
            while (num <= (maxi + 1))
            {
                cout << num++;
            }
        }
        cout << endl;
    }
    return 0;
}