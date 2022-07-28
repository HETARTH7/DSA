#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
            cout<<mid;

        if (arr[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
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
    binarySearch(arr, n, x);
}