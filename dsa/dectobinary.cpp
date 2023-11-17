#include <iostream>
using namespace std;

// Main function
int main()
{
    int binarynumber = 0, i = 1;
    // Given decimal number n=11.
    int remainder, n = 11;

    // While loop
    // Loop termination condition.
    while (n != 0)
    {
        remainder = n % 2;

        // Divide the number by 2.
        n = n / 2;
        cout << binarynumber << " + " << remainder << " * " << i;
        binarynumber = binarynumber + remainder * i;
        cout << " " << binarynumber << endl;

        // To increase the place value.
        i = i * 10;
    }
    cout << "Binary Representation of given number: ";
    // Printing the binary representation of the given decimal number
    cout << binarynumber << endl;
}
