/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
 */
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    // HINT!- There is no performance improvement here, but the while loop can improved...
    // having true as the while loop condition is not a good practice
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *A = headA, *B = headB;
        bool restartedA = false, restartedB = false;

        while (true)
        {
            if (A == nullptr)
            {
                A = headB;
                if (restartedA)
                    break;
                restartedA = true;
            }
            if (B == nullptr)
            {
                B = headA;
                if (restartedB)
                    break;
                restartedB = true;
            }
            if (A != nullptr && A == B)
                return A;
            A = A->next;
            B = B->next;
        }

        return nullptr;
    }
};
// @lc code=end
