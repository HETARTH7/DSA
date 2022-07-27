#include <bits/stdc++.h>
using namespace std;

void linearSearch(int arr[], int n, int k)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            cout << "Position of " << k << " is " << i + 1;
        }
    }
}
int main()
{
    int n, k, arr[n];
    cout << "Enter the size of array";
    cin >> n;
    cout << "Enter the number to be searhced";
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    linearSearch(arr, n, k);
}