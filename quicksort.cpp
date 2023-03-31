#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];

    int j = low;
    for (int i = low; i < high; i++)
    {
        if (arr[i] <= pivot)
        {
            swap(arr[i], arr[j++]);
        }
    }
    swap(arr[j], arr[high]);

    return j;
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int p = partition(arr, low, high);
        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}

int main()
{
    int arr[] = {2, 5, 3, 4, 1};
    quickSort(arr, 0, 4);
    return 0;
}