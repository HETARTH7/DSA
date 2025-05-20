public class BST {
    static class Node {
        private int val;
        private Node left, right;

        Node(int x) {
            this.val = x;
            this.left = this.right = null;
        }
    }

    private Node root;

    BST() {
        root = null;
    }

    public void insert(int x) {
        this.root = insertNode(this.root, x);
    }

    public Node insertNode(Node node, int x) {
        if (node == null) {
            Node newNode = new Node(x);
            return newNode;
        } else if (node.val < x) {
            node.right = insertNode(node.right, x);
        } else {
            node.left = insertNode(node.left, x);
        }
        return node;
    }

    public void delete(int x) {
        this.root = deleteNode(this.root, x);
    }

    public Node deleteNode(Node node, int x) {
        if (node == null)
            return null;
        if (node.val > x)
            node.left = deleteNode(node.left, x);
        else if (node.val < x)
            node.right = deleteNode(node.right, x);
        else {
            if (node.right == null)
                return node.left;
            else if (node.left == null)
                return node.right;
            node.val = minVal(node.right);
            node.right = deleteNode(node.right, node.val);
        }
        return node;
    }

    public int minVal(Node node) {
        while (node.left != null) {
            node = node.left;
        }
        return node.val;
    }

    public void inorder(Node n) {
        if (n == null)
            return;
        inorder(n.left);
        System.out.print(n.val + " ");
        inorder(n.right);
    }

    public static void main(String[] args) {
        BST tree = new BST();
        tree.insert(50);
        tree.insert(30);
        tree.insert(20);
        tree.insert(40);
        tree.insert(70);
        tree.insert(60);
        tree.insert(80);

        System.out.println("\nInorder traversal of binary tree is ");
        tree.inorder(tree.root);
        System.out.println("\nDelete 20");
        tree.delete(20);
        System.out.println("\nInorder traversal of binary tree is ");
        tree.inorder(tree.root);
        System.out.println("\nDelete 30");
        tree.delete(30);
        System.out.println("\nInorder traversal of binary tree is ");
        tree.inorder(tree.root);
        System.out.println("\nDelete 50");
        tree.delete(50);
        System.out.println("\nInorder traversal of binary tree is ");
        tree.inorder(tree.root);
    }
}
