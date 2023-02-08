#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}

int main()
{
    int a[] = {2, 1, 3, 4};
    selectionSort(a, 4);
    for (int i = 0; i < 4; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}