#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
    int x = m - l + 1;
    int y = r - m;
    int a[x], b[y];
    for (int i = 0; i < x; i++)
    {
        a[i] = arr[i + l];
    }
    for (int i = 0; i < y; i++)
    {
        b[i] = arr[m + 1 + i];
    }
    int i = 0, j = 0, k = l;
    while (i < x && j < y)
    {
        if (a[i] <= b[j])
        {
            arr[k] = a[i];
            i++;
            k++;
        }
        else if (b[j] < a[i])
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < x)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < y)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
    int a[] = {8, 6, 3, 2, 1};
    mergeSort(a, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}