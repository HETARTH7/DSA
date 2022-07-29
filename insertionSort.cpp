#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, j, k;
    for (i = 1; i < n; i++)
    {
        j = i - 1;
        k = arr[i];
        while (j >= 0 && arr[j]>k)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = k;
    }
    for (int x = 0; x < n; x++)
    {
        cout << arr[x]<<" ";
    }
}
int main()
{
    int n, arr[n];
    cout << "Enter size of the array ";
    cin >> n;
    cout << "Enter the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertionSort(arr, n);
}