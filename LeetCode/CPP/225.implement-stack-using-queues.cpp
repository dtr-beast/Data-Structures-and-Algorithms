/*
 * @lc app=leetcode id=225 lang=cpp
 *
 * [225] Implement Stack using Queues
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class MyStack
{
public:
    int k = 0;
    queue<int> front, back;
    int topValue = -1;
    MyStack()
    {
    }
    void push(int x)
    {
        topValue = x;
        front.push(x);
    }

    int pop()
    {
        int value = front.back();

        while (!front.empty() && front.size() > 1)
        {
            back.push(front.front());
            front.pop();
        }
        if (!front.empty())
            front.pop();
        back.pop();
        if (back.empty())
            topValue = -1;
        else
            topValue = back.back();

        while (!back.empty())
        {
            front.push(back.front());
            back.pop();
        }
        return value;
    }

    int top()
    {
        return topValue;
    }

    bool empty()
    {
        return front.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
// @lc code=end