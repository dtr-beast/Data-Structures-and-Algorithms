public class TreeNode<E> {
    public TreeNode left;
    public TreeNode right;
    E data;
}

class BinaryTree<E> {
    TreeNode<E> root;

    void create() {
        root = new TreeNode<E>();
    }

    BinaryTree() {

    }
}