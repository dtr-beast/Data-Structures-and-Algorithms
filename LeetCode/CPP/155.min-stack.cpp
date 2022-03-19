/*
 * @lc app=leetcode id=155 lang=cpp
 *
 * [155] Min Stack
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Node
{
public:
    int val;
    int min;
    Node *next;
    Node() : val(0), min(0), next(nullptr) {}
    Node(int val, int min) : val(val), min(min), next(nullptr) {}
    Node(int val, int min, Node *next) : val(val),
                                         min(min),
                                         next(next) {}
};
class MinStack
{
public:
    Node *head;
    MinStack()
    {
    }

    void push(int val)
    {
        cout << "Pushing " << val;
        if (head == nullptr)
            head = new Node(val, val);
        else
        {
            Node *tmp = new Node(val, min(val, head->min), head);
            head = tmp;
        }
        cout << "Pushing " << val;
    }

    void pop()
    {
        cout << "Popping " << head->val;

        head = head->next;
    }

    int top()
    {
        cout << "Topping " << head->val;
        return head->val;
    }

    int getMin()
    {
        cout << "Min Ele " << head->min;
        return head->min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end
