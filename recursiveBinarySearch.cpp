#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int x, int low, int high)
{

    if (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, x, low, mid - 1);

        return binarySearch(arr, x, mid + 1, high);
    }

    return -1;
}
int main()
{
    int n, x, arr[n];
    cout << "Enter size of the array ";
    cin >> n;
    cout << "Enter the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number to be found ";
    cin >> x;
    int low = 0, high = n - 1;
    int index = binarySearch(arr, x, low, high);
    if (index == -1)
    {
        cout << "Not found";
    }
    else
    {
        cout << "Position of " << x << " is " << index + 1;
    }
}