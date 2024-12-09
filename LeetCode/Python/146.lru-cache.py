#
# @lc app=leetcode id=146 lang=python3
#
# [146] LRU Cache
#

# @lc code=start

from typing import Dict


class Node:
    next = None
    prev = None

    def __init__(self, key: int = 0, val: int = 0) -> None:
        self.key = key
        self.val = val


class LRUCache:
    def __init__(self, capacity: int):
        self.capacity = capacity
        self.cache: Dict[int, Node] = {}
        self.head = Node()
        self.tail = Node()

        self.head.next = self.tail
        self.tail.prev = self.head

    def get(self, key: int) -> int:
        if key not in self.cache:
            return -1

        n = self.cache[key]
        self._remove(n)
        self._insert(n)

        return n.val

    def put(self, key: int, value: int) -> None:
        if key in self.cache:
            self._remove(self.cache.pop(key))

        if len(self.cache) >= self.capacity:
            lruNode = self.head.next
            self._remove(lruNode)
            self.cache.pop(lruNode.key)

        n = Node(key, value)
        self.cache[key] = n
        self._insert(n)

    def _remove(self, node: Node):
        prev = node.prev
        next = node.next

        prev.next, next.prev = next, prev

    def _insert(self, node: Node):
        prev = self.tail.prev

        node.prev = prev
        node.next = self.tail
        prev.next = self.tail.prev = node


# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)
# @lc code=end

if __name__ == '__main__':
    print("\n\rStart")
    capacity = 2
    obj = LRUCache(capacity)
    obj.put(1, 1)
    obj.put(2, 2)
    print(obj.get(1))
    obj.put(3, 3)
    print(obj.get(2))
    obj.put(4, 4)
    print(obj.get(1))
    print(obj.get(3))
    print(obj.get(4))