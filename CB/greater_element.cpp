#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n), ans(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < arr.size(); i++)
    {
        bool found = false;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] > arr[i])
            {
                cout << arr[j];
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << -1;
        }
        cout << " ";
    }
    return 0;
}
