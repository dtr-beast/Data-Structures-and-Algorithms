#
# @lc app=leetcode id=19 lang=python3
#
# [19] Remove Nth Node From End of List
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
# TODO: 190/208
class Solution:
    def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
        dummyNode = ListNode()
        dummyNode.next = head

        leader = follower = dummyNode

        # Maintain a gap of 'n', so the leader node notifies ending of the list of nodes
        for _ in range(n + 1):
            leader = leader.next

        while leader:
            leader = leader.next
            follower = follower.next

        follower.next = follower.next.next

        # Returning dummyNode.next instead of head guarantees dealing with corner cases
        # len(ListNode) < 3
        # Since the changes will be accommodated in the dummyNode.
        return dummyNode.next

        """
        My Solution (above one copied from LeetCode):
        Could not handle Corner cases, where the length of the Linked List is smaller than 3
        nodes = []
        maxNodeLen = n + 1
        tempHead = head

        while tempHead:
            nodes.append(tempHead)
            if len(nodes) > maxNodeLen:
                nodes.pop(0)
            tempHead = tempHead.next

        if len(nodes) == 1:
            return None

        try:
            nodes[len(nodes) - n].next = nodes[len(nodes) - n].next.next
            del nodes[len(nodes) - n + 1]
        except IndexError:
            pass
            # nodes[0].next = None
        """
# @lc code=end
