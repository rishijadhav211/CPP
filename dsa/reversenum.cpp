#include <iostream>

using namespace std;

int reverse_number(int number)
{
    int reversed_number = 0;
    while (number > 0)
    {
        int remainder = number % 10;
        reversed_number = reversed_number * 10 + remainder;
        number = number / 10;
    }

    return reversed_number;
}

int main()
{
    int number;
    cin >> number;

    int reversed_number = reverse_number(number);
    cout << "The reversed number is " << reversed_number << endl;

    return 0;
}