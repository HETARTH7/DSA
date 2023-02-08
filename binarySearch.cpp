#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> v, int x, int low, int high)
{
    int mid = (low + high) / 2;
    if (v[mid] == x)
    {
        return mid;
    }
    else
    {
        if (v[mid] > x)
        {
            return binarySearch(v, x, low, mid - 1);
        }
        else
        {
            return binarySearch(v, x, mid + 1, high);
        }
    }
    return -1;
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int x = 4;
    int ans = binarySearch(v, x, 0, v.size());
    if (ans == -1)
    {
        cout << "Not found";
    }
    else
    {
        cout << x << " found at index: " << ans;
    }
}