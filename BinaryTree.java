import java.util.Queue;
import java.util.LinkedList;

public class BinaryTree {
    static class Node {
        private int val;
        private Node left, right;

        Node(int x) {
            this.val = x;
            this.left = this.right = null;
        }
    }

    private Node root;

    BinaryTree() {
        root = null;
    }

    public void inorder(Node n) {
        if (n == null)
            return;
        inorder(n.left);
        System.out.print(n.val + " ");
        inorder(n.right);
    }

    public void preorder(Node n) {
        if (n == null)
            return;
        System.out.print(n.val + " ");
        preorder(n.left);
        preorder(n.right);
    }

    public void postorder(Node n) {
        if (n == null)
            return;
        postorder(n.left);
        postorder(n.right);
        System.out.print(n.val + " ");
    }

    public int height(Node n) {
        if (n == null)
            return 0;
        return 1 + Math.max(height(n.left), height(n.right));
    }

    public void levelOrderTraversal() {
        Node node = this.root;
        Queue<Node> q = new LinkedList<Node>();
        q.add(node);
        while (q.size() != 0) {
            int n = q.size();
            for (int i = 0; i < n; i++) {
                Node currNode = q.remove();
                System.out.print(currNode.val + " ");
                if (currNode.left != null)
                    q.add(currNode.left);
                if (currNode.right != null)
                    q.add(currNode.right);
            }
            System.out.println("");
        }
    }

    public static void main(String[] args) {
        BinaryTree tree = new BinaryTree();
        tree.root = new Node(1);
        tree.root.left = new Node(2);
        tree.root.right = new Node(3);
        tree.root.left.left = new Node(4);
        tree.root.left.right = new Node(5);

        System.out.println("\nPreOrder traversal of binary tree is ");
        tree.preorder(tree.root);

        System.out.println("\nInorder traversal of binary tree is ");
        tree.inorder(tree.root);

        System.out.println("\nPostOrder traversal of binary tree is ");
        tree.postorder(tree.root);

        System.out.println("\nHeight of binary tree is " + tree.height(tree.root));

        tree.levelOrderTraversal();
    }
}
