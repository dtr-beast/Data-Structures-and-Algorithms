from typing import Dict
#
# @lc app=leetcode id=460 lang=python3
#
# [460] LFU Cache
#

# @lc code=start


class Node:
    def __init__(self, key: int, val: int) -> None:
        self.key = key
        self.val = val
        self.frequency = 1
        self.prev: Node = None
        self.next: Node = None


class DoublyLinkedList:
    def __init__(self) -> None:
        self.head = Node(0, 0)
        self.tail = Node(0, 0)
        self.head.next = self.tail
        self.tail.prev = self.head
        self.length = 0

    def __len__(self) -> int:
        return self.length

    def remove(self, node: Node):
        prev_node = node.prev
        next_node = node.next

        prev_node.next = next_node
        next_node.prev = prev_node
        self.length -= 1

    def insert(self, node: Node):
        prev_node = self.tail.prev
        prev_node.next = self.tail.prev = node
        node.prev = prev_node
        node.next = self.tail
        self.length += 1


class LFUCache:
    def __init__(self, capacity: int):
        self.capacity = capacity
        self.cache: Dict[int, Node] = {}
        self.least_frequency = 1
        self.frequency_cache: Dict[int, DoublyLinkedList] = {}

    def get(self, key: int) -> int:
        if key not in self.cache:
            return -1

        node = self.cache[key]
        self.frequency_cache[node.frequency].remove(node)

        node.frequency += 1
        frequency = node.frequency
        self._addToFrequencyCache(frequency, node)

        if not len(self.frequency_cache[self.least_frequency]):
            self.least_frequency = frequency
        return node.val

    def put(self, key: int, value: int) -> None:
        frequency = 1
        if key in self.cache:
            node = self.cache.pop(key)
            self.frequency_cache[node.frequency].remove(node)
            frequency = node.frequency + 1

        if len(self.cache) + 1 > self.capacity:
            node = self.frequency_cache[self.least_frequency].head.next
            self.frequency_cache[node.frequency].remove(node)
            self.cache.pop(node.key)

        node = Node(key, value)
        self.cache[key] = node

        node.frequency = frequency
        self._addToFrequencyCache(frequency, node)

        if (
            not len(self.frequency_cache[self.least_frequency])
            or frequency < self.least_frequency
        ):
            self.least_frequency = frequency

    def _addToFrequencyCache(self, frequency: int, node: Node):
        if frequency not in self.frequency_cache:
            self.frequency_cache[frequency] = DoublyLinkedList()
        self.frequency_cache[frequency].insert(node)


# Your LFUCache object will be instantiated and called as such:
# obj = LFUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)
# @lc code=end

# print("Start")
# capacity = 2
# obj = LFUCache(capacity)
# obj.put(1, 1)
# obj.put(2, 2)
# print(obj.get(1))
# obj.put(3, 3)
# print(obj.get(2))
# print(obj.get(3))
# obj.put(4, 4)
# print(obj.get(1))
# print(obj.get(3))
# print(obj.get(4))


# capacity = 3
# obj = LFUCache(capacity)
# obj.put(2, 2)
# obj.put(1, 1)
# print(obj.get(2))
# print(obj.get(1))
# print(obj.get(2))
# obj.put(3, 3)
# obj.put(4, 4)
# print(obj.get(3))
# print(obj.get(2))
# print(obj.get(1))
# print(obj.get(4))


# capacity = 2
# obj = LFUCache(capacity)
# obj.put(1, 1)
# obj.put(2, 2)
# print(obj.get(1))
# obj.put(3, 3)
# print(obj.get(2))
# print(obj.get(3))
# obj.put(4, 4)
# print(obj.get(1))
# print(obj.get(3))
# print(obj.get(4))
