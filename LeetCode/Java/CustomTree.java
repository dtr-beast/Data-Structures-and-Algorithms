/*
    Types of Tree
    Rooted Binary Tree -
        - Root node with 2 children

    Perfect - 
        - Every internal node has exactly 2 children
        - Every leaf node is at the same depth from the root
    
    Complete - 
        - Every level of the tree is completely filled except possibly the last level
        - Every node is either a leaf or the node has 2 children
        - The last level must be strictly filled from left to right
    
    Skewed - 
        - All the node except the last level has one and only one child

        For all tree programs, binary tree traversal - 
            - Inorder
            - Preorder
            - Postorder
            - Level order 

*/
public class CustomTree {
    class Node<E> {
        public E data;
        public Node<E> left;
        public Node<E> right;
    }
}
