/*
 * @lc app=leetcode id=232 lang=cpp
 *
 * [232] Implement Queue using Stacks
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class MyQueue
{
public:
    stack<int> front, back;
    int top;
    MyQueue()
    {
        top = -1;
    }

    void push(int x)
    {
        if (front.empty())
        {
            front.push(x);
            top = x;
            return;
        }
        if (!back.empty())
        {
            while (!back.empty())
            {
                front.push(back.top());
                back.pop();
            }
        }
        front.push(x);
    }

    int pop()
    {
        while (!front.empty())
        {
            back.push(front.top());
            front.pop();
        }
        int value = back.top();
        back.pop();
        top = back.empty() ? -1 : back.top();
        return value;
    }

    int peek()
    {
        return top;
    }

    bool empty()
    {
        return front.empty() && back.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
// @lc code=end
