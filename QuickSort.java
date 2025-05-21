import java.util.Arrays;

public class QuickSort {
    public static int partition(int arr[], int l, int h) {
        int pivot = arr[h];
        int i = l - 1;
        for (int j = l; j < h; j++) {
            if (arr[j] <= pivot) {
                i++;
                int tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
        int tmp = arr[i + 1];
        arr[i + 1] = arr[h];
        arr[h] = tmp;
        return i + 1;
    }

    public static void quickSort(int arr[], int l, int h) {
        if (l < h) {
            int pi = partition(arr, l, h);
            quickSort(arr, l, pi - 1);
            quickSort(arr, pi + 1, h);
        }
    }

    public static void main(String args[]) {

        int[] data = { -2, 45, 0, 11, -9 };
        quickSort(data, 0, data.length - 1);
        System.out.println("Sorted Array in Ascending Order:");
        System.out.println(Arrays.toString(data));
    }
}
