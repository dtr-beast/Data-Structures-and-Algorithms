/*
 * @lc app=leetcode id=21 lang=java
 *
 * [21] Merge Two Sorted Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * public class ListNode {
 * int val;
 * ListNode next;
 * ListNode() {}
 * ListNode(int val) { this.val = val; }
 * ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        ListNode d = new ListNode(-1, l1), tmp;

        while (l1 != null && l2 != null) {
            if (l1.val < l2.val) {
                tmp = l2;
                l2 = l2.next;
                tmp.next = l1.next;
                l1.next = tmp;
                l1 = tmp.next;
            } else {
                tmp = l1;
                l1 = l1.next;
                tmp.next = l2.next;
                l2.next = tmp;
                l2 = tmp.next;
            }
        }
        return d.next;
    }
}
// @lc code=end
