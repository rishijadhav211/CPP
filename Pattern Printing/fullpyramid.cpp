#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cout << "Enter No. of Row\n";
    cin >> row;

    for (int i = 1; i <= row; i++)
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