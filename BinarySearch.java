public class BinarySearch {
    public static int binarySearch(int arr[], int x) {
        int i = 0, j = arr.length - 1;
        while (i <= j) {
            int mid = (i + j) / 2;
            if (arr[mid] == x)
                return mid;
            else if (arr[mid] > x)
                j = mid - 1;
            else
                i = mid + 1;
        }
        return -1;
    }

    public static void main(String args[]) {
        int array[] = { 3, 4, 5, 6, 7, 8, 9 };
        int x = 6;

        int result = binarySearch(array, x);

        if (result == -1)
            System.out.print("Element not found");
        else
            System.out.print("Element found at index: " + result);
    }
}
