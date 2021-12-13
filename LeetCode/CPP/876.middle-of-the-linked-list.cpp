#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=876 lang=cpp
 *
 * [876] Middle of the Linked List
 */
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        if (head == nullptr)
        {
            return head;
        }

        int len = 0;
        ListNode *slow = head;
        ListNode *fast = head->next;

        while (fast != nullptr)
        {
            slow = slow->next;
            len++;
            fast = fast->next;
            if (fast != nullptr && fast->next != nullptr)
            {
                fast = fast->next;
                len++;
            }
            else
            {
                if (len % 2 == 1)
                {
                    return slow;
                }
                else
                {
                    return slow->next;
                }
            }
        }
        return nullptr;
    }
};
// @lc code=end
