public class LinkedList {
    Node head;

    public void push(int new_data) {
        Node tmp = new Node(new_data);
        tmp.next = this.head;
        this.head = tmp;
    }

    public void insertAfter(Node prev_node, int new_data) {
        Node newNode = new Node(new_data);
        newNode.next = prev_node.next;
        prev_node.next = newNode;
    }

    public void append(int new_data) {
        Node newNode = new Node(new_data);
        if (this.head == null) {
            this.head = newNode;
            return;
        }
        Node tmp = this.head;
        while (tmp.next != null) {
            tmp = tmp.next;
        }
        tmp.next = newNode;
    }

    public void printList() {
        Node tmp = this.head;
        while (tmp.next != null) {
            System.out.print(tmp.val + "->");
            tmp = tmp.next;
        }
        System.out.print(tmp.val);
    }

    public void removeFirstNode() {
        this.head = this.head.next;
    }

    public void removeLastNode() {
        if (this.head == null) {
            return;
        } else if (this.head.next == null) {
            this.head = null;
        } else {
            Node tmp = this.head;
            while (tmp.next.next != null) {
                tmp = tmp.next;
            }
            tmp.next = null;
        }
    }

    static class Node {
        public int val;
        public Node next;

        Node(int value) {
            this.val = value;
            this.next = null;
        }
    }

    public static void main(String[] args) {
        LinkedList llist = new LinkedList();
        llist.push(1);
        llist.push(2);
        llist.append(3);
        llist.removeFirstNode();
        llist.removeLastNode();
        llist.printList();
    }
}
