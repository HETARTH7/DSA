public class Stack_using_array {
    static final int MAX = 1000;
    int[] st = new int[MAX];
    int top;

    Stack_using_array() {
        top = -1;
    }

    boolean isEmpty() {
        return st.length == 0;
    }

    boolean push(int x) {
        if (top + 1 == MAX) {
            System.out.println("Stack is full.");
            return false;
        }
        st[++top] = x;
        System.out.println("Element " + x + " inserted.");
        return true;
    }

    int pop() {
        if (top < 0) {
            System.out.println("Stack empty");
            return 0;
        }
        int x = st[top--];
        return x;
    }

    int peek() {
        if (top < 0) {
            System.out.println("Stack empty");
            return 0;
        }
        return st[top];
    }

    void print() {
        for (int i = top; i > -1; i--) {
            System.out.print(st[i] + " ");
        }
    }

    public static void main(String args[]) {
        Stack_using_array s = new Stack_using_array();
        s.push(10);
        s.push(20);
        s.push(30);
        System.out.println(s.pop() + " Popped from stack");
        System.out.println("Top element is : " + s.peek());
        System.out.print("Elements present in stack : ");
        s.print();
    }
}