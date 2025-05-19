public class StackUsingLinkedList {

    Node head;

    static class Node {
        int val;
        Node next;

        Node(int value) {
            this.val = value;
            this.next = null;
        }
    }

    public void push(int x) {
        Node newNode = new Node(x);
        newNode.next = head;
        head = newNode;
    }

    public boolean isEmpty() {
        return this.head == null;
    }

    public int peek() {
        return this.head.val;
    }

    public void pop() {
        head = head.next;
    }

    public void display() {
        Node tmp = head;
        while (tmp != null) {
            System.out.print(tmp.val + " ");
            tmp = tmp.next;
        }
    }

    public static void main(String[] args) {
        StackUsingLinkedList obj = new StackUsingLinkedList();
        obj.push(11);
        obj.push(22);
        obj.push(33);
        obj.push(44);

        obj.display();
        System.out.printf("\nTop element is %d\n",
                obj.peek());

        obj.pop();
        obj.pop();

        obj.display();

        System.out.printf("\nTop element is %d\n",
                obj.peek());
    }
}
