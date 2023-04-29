#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, p;
    n = 4;
    p = 3;

    vector<int> A = {1, 3, 8, 9};
    vector<int> B = {15, 16, 17, 18};
    vector<int> C = {8, 9, 12, 18};

    // Sort the arrays in ascending order
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    sort(C.begin(), C.end());

    int count = 0;

    int i = 0, j = 0, k = 0;

    while (i < n && j < n && k < n)
    {

        int curr_max = max({A[i], B[j], C[k]});
        int curr_min = min({A[i], B[j], C[k]});

        if (curr_max - curr_min <= p)
        {
            count++;
            i++;
            j++;
            k++;
        }
        else
        {
            if (A[i] <= B[j] && A[i] <= C[k])
            {
                i++;
            }
            else if (B[j] <= A[i] && B[j] <= C[k])
            {
                j++;
            }
            else
            {
                k++;
            }
        }
    }

    cout << count << endl;
    return 0;
}
