#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cout << "Enter No. of Row";
    cin >> row;

    for (int i = row; i >= 1; i--)
    {
        int space = row - i;
        while (space--)
        {
            cout << "  ";
        }
        int k = 2 * i - 1;
        while (k--)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}