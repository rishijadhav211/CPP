#include <iostream>

using namespace std;

double square_root(double number)
{
    int low = 0;
    int high = number;
    int mid = 0;

    while (low <= high)
    {
        mid = (low + high) / 2;
        double square = mid * mid;

        if (square == number)
        {
            return mid;
        }
        else if (square < number)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return mid;
}

int main()
{
    double number;
    cin >> number;

    double square_root_number = square_root(number);
    cout << "The square root of " << number << " is " << square_root_number << endl;

    return 0;
}