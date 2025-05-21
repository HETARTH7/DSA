import java.util.Arrays;

public class MergeSort {
    public static void merge(int arr[], int l, int m, int r) {
        int n1 = m - l + 1, n2 = r - m;
        int L1[] = new int[n1];
        int L2[] = new int[n2];
        for (int i = 0; i < n1; i++) {
            L1[i] = arr[i + l];
        }
        for (int j = 0; j < n2; j++) {
            L2[j] = arr[j + m + 1];
        }
        int i = 0, j = 0, k = l;
        while (i < n1 && j < n2) {
            if (L1[i] <= L2[j]) {
                arr[k] = L1[i];
                i++;
            } else {
                arr[k] = L2[j];
                j++;
            }
            k++;
        }
        while (i < n1) {
            arr[k] = L1[i];
            i++;
            k++;
        }
        while (j < n2) {
            arr[k] = L2[j];
            j++;
            k++;
        }
    }

    public static void mergeSort(int arr[], int l, int r) {
        if (l < r) {
            int m = (l + r) / 2;
            mergeSort(arr, l, m);
            mergeSort(arr, m + 1, r);
            merge(arr, l, m, r);
        }
    }

    public static void main(String args[]) {

        int[] data = { -2, 45, 0, 11, -9 };
        mergeSort(data, 0, data.length - 1);
        System.out.println("Sorted Array in Ascending Order:");
        System.out.println(Arrays.toString(data));
    }
}
