/*
 * @lc app=leetcode id=1472 lang=cpp
 *
 * [1472] Design Browser History
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class BrowserHistory
{
private:
    stack<string> h, f;

public:
    BrowserHistory(string homepage)
    {
        h.push(homepage);
    }

    void visit(string url)
    {
        h.push(url);
        cout << "Visiting: " << url << "\n";
        f = stack<string>();
    }

    string back(int steps)
    {
        while (h.size() >= 1 && steps--)
        {
            cout << "Backing: " << h.top() << "\n";
            f.push(h.top());
            h.pop();
        }
        if (h.empty())
        {
            h.push(f.top());
            f.pop();
        }
        cout << "Back To: " << h.top() << "\n";

        return h.top();
    }

    string forward(int steps)
    {
        while (f.size() >= 1 && steps--)
        {
            cout << "Forwarding: " << h.top() << "\n";
            h.push(f.top());
            f.pop();
        }
        cout << "Forward To: " << h.top() << "\n";
        return h.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
// @lc code=end