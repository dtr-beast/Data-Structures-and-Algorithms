import java.util.HashMap;

/*
 * @lc app=leetcode id=82 lang=java
 *
 * [82] Remove Duplicates from Sorted List II
 */
public class ListNode {
    int val;
    ListNode next;

    ListNode() {
    }

    ListNode(int val) {
        this.val = val;
    }

    ListNode(int val, ListNode next) {
        this.val = val;
        this.next = next;
    }
}

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
    /*
     * HINT! - We know that the list is sorted, can we use this idea reduce the
     * amount of value assignments?
     * Maybe we can get away reassigning prev.next multiples time to only one when
     * we have traversed all the duplicates
     */
    public ListNode deleteDuplicates(ListNode head) {
        HashMap<Integer, Boolean> m = new HashMap<>();
        if (head == null)
            return head;
        // Initialize Dummy Node (For corner cases (only 1/0 node in Linked List))
        // and Previous Node (Saves Previous Node)
        ListNode d = new ListNode(-1, head), prev = d;

        while (head != null && head.next != null) {
            if (head.val == head.next.val) {
                // Take the value
                int dup = head.val;
                // And reassign the previous node's next to current node's next (essentially
                // deleting the current node)
                while (head != null && head.val == dup)
                    prev.next = head = head.next;

                continue;
            }
            prev = head;
            head = head.next;
        }
        return d.next;
    }
}
// @lc code=end
