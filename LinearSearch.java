public class LinearSearch {
    public static int linearSearch(int arr[], int x) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == x)
                return i;
        }
        return -1;
    }

    public static void main(String args[]) {
        int array[] = { 2, 4, 0, 1, 9 };
        int x = 1;

        int result = linearSearch(array, x);

        if (result == -1)
            System.out.print("Element not found");
        else
            System.out.print("Element found at index: " + result);
    }
}
