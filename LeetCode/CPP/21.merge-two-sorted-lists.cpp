// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem21.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
 */
// struct ListNode
// {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
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
    // TODO: Fix and Improve
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *d = new ListNode(-1, l1), *tmp = nullptr, *prev = d;
        while (l1 != nullptr && l2 != nullptr)
        {
            if (l1->val < l2->val)
            {
                tmp = l2;
                l2 = l2->next;
                tmp->next = l1->next;
                l1->next = tmp;
                l1 = tmp->next;
                prev = tmp;
            }
            else
            {
                tmp = l2;
                l2 = l2->next;
                tmp->next = l1;
                prev->next = tmp;
                prev = tmp;
                l1 = l1->next;
            }
        }
        ListNode *th = d->next;
        while (th != nullptr)
        {
            cout << th->val << " ";
            th = th->next;
        }
        return d->next;
    }
};
// @lc code=end
