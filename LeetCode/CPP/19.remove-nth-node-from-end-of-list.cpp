#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *dummyNode = new ListNode();
        dummyNode->next = head;
        ListNode *fastNode = dummyNode;
        ListNode *slowNode = dummyNode;

        for (int i = 0; i < n; i++)
        {
            fastNode = fastNode->next;
        }
        while (fastNode->next != nullptr)
        {
            slowNode = slowNode->next;
            fastNode = fastNode->next;
        }
        slowNode->next = slowNode->next->next;
        return dummyNode->next;
    }
};
// @lc code=end
