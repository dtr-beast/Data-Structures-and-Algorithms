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
    public ListNode middleNode(ListNode head) {
        ListNode slow = head;
        ListNode fast = head.next;
        int len = 0;
        while (fast != null) {
            slow = slow.next;
            fast = fast.next;
            len++;

            if (fast != null && fast.next != null) {
                fast = fast.next;
                len++;
            } else {
                if (len % 2 == 1) {
                    return slow;
                } else {
                    return slow.next;
                }
            }
        }
        return slow;
    }
}