#include <iostream>

using namespace std;

void generateSubarrays(int arr[], int n)
{
    // Iterate over all possible starting indices of the subarray.
    for (int i = 0; i < n; i++)
    {
        // Iterate over all possible ending indices of the subarray.
        for (int j = i; j < n; j++)
        {
            // Print the subarray.
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}

int main()
{
    // Create an array.
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Generate subarrays.
    generateSubarrays(arr, n);

    return 0;
}