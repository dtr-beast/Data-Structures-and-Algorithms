/*
 * @lc app=leetcode id=707 lang=java
 *
 * [707] Design Linked List
 */

// @lc code=start
class MyLinkedList {

    private class Node {
        Node(int val) {
            next = null;
            this.value = val;
        }

        Node next;
        int value;
    }

    private Node head;
    private int size;

    /** Initialize your data structure here. */
    public MyLinkedList() {
        head = null;
        size = 0;
    }

    /**
     * Get the value of the index-th node in the linked list. If the index is
     * invalid, return -1.
     */
    public int get(int index) {
        if (head == null) {
            return -1;
        }
        if (index < 0 || index >= size) {
            return -1;
        }
        Node curr = head;

        for (int i = 0; i < index; i++) {
            curr = curr.next;
        }

        return curr.value;
    }

    /**
     * Add a node of value val before the first element of the linked list. After
     * the insertion, the new node will be the first node of the linked list.
     */
    public void addAtHead(int val) {
        addAtIndex(0, val);
    }

    /** Append a node of value val to the last element of the linked list. */
    public void addAtTail(int val) {
        addAtIndex(size, val);
    }

    /**
     * Add a node of value val before the index-th node in the linked list. If index
     * equals to the length of linked list, the node will be appended to the end of
     * linked list. If index is greater than the length, the node will not be
     * inserted.
     */
    public void addAtIndex(int index, int val) {
        if (index < 0 || index > size) {
            System.out.println("Wrong Index");
            return;
        }

        Node dummyNode = new Node(0);
        dummyNode.next = head;
        Node curr = dummyNode;

        int i = -1;
        while (++i < index) {
            curr = curr.next;
        }
        Node newNode = new Node(val);
        newNode.next = curr.next;
        curr.next = newNode;
        head = dummyNode.next;
        size++;
    }

    /** Delete the index-th node in the linked list, if the index is valid. */
    public void deleteAtIndex(int index) {
        if (head == null) {
            System.out.println("Linked List is Empty");
            return;
        }
        if (index < 0 || index >= size) {
            System.out.println("Wrong Index");
            return;
        }
        Node dummyNode = new Node(0);
        dummyNode.next = head;
        Node curr = dummyNode;
        int i = -1;
        while (++i < index - 1) {
            curr = curr.next;
        }
        curr.next = curr.next.next;
        head = dummyNode.next;
        size--;
    }

    public void printList() {
        Node curr = head;
        while (curr != null) {
            System.out.print(curr.value + " ");
            curr = curr.next;
        }
        System.out.println();
    }

    public static void main(String[] args) {
        MyLinkedList myLinkedList = new MyLinkedList();
        myLinkedList.addAtHead(1);
        myLinkedList.addAtTail(3);
        myLinkedList.addAtIndex(1, 2); // linked list becomes 1->2->3

        // Return 2
        System.out.println(myLinkedList.get(1));
        myLinkedList.deleteAtIndex(1); // now the linked list is 1->3
        // Return 3
        System.out.println(myLinkedList.get(1));
    }
}

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList obj = new MyLinkedList(); int param_1 = obj.get(index);
 * obj.addAtHead(val); obj.addAtTail(val); obj.addAtIndex(index,val);
 * obj.deleteAtIndex(index);
 */
// @lc code=end