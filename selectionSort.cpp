#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n){
    int temp[n];
    for(int i=0;i<n;i++){
        int min=0;
        for(int j=1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        temp[i]=arr[min];
        arr[min]=INFINITY;
    }
    for (int x = 0; x < n; x++)
    {
        cout << temp[x] << " ";
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
    selectionSort(arr, n);
}