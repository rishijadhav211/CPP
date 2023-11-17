#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number = 0, i = 0, rem;

    // bin stores the binary number given as input.
    long long bin = 1001;

    while (bin != 0)
    {
        // Calculate the remainder of the dividing bin by 10.
        rem = bin % 10;
        bin /= 10;
        cout << rem << " * " << pow(2, i);
        number += rem * pow(2, i);
        cout << " " << number << endl;
        ++i;
    }
    cout << "Decimal equivalent of given binary number is: ";
    cout << number << endl;
    return 0;
}