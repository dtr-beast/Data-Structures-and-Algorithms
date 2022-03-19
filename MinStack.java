class MinStack {
    /*
     * Using a Node class with min at each node (minimum value possible till the
     * current node), we can get the value in constant time
     */
    class Node {
        public int val, min;
        Node next;

        Node(int val, int min, Node next) {
            this.val = val;
            this.min = min;
            this.next = next;
        }
    }

    Node head;

    /*
     * Give random values so that the head is populated, this avoids the if
     * condition in the push method, we don't have to check whether the head is null
     */
    public MinStack() {
        head = new Node(Integer.MAX_VALUE, Integer.MAX_VALUE, null);
    }

    // Calculate minimum element at pushing time only
    public void push(int val) {
        head = new Node(val, Math.min(val, head.min), head);
    }

    public void pop() {
        head = head.next;
    }

    public int top() {
        return head.val;
    }

    public int getMin() {
        return head.min;
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */