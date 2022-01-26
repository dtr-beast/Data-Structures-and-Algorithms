#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<char> st;

    for (char c : s)
    {
        if (c == '{')
            st.push('}');
        else if (c == '(')
            st.push(')');
        else if (c == '[')
            st.push(']');
        else
        {
            if (st.empty() || st.top() != c)
            {
                cout << "No";
                return 0;
            }
            else
            {
                st.pop();
            }
        }
    }
    cout << (st.empty() ? "Yes" : "No");
    return 0;
}
