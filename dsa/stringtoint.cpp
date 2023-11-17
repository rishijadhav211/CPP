#include <iostream>
#include <string>

using namespace std;

int main()
{
    // String to int conversion
    string str = "12345";
    int num = stoi(str);
    cout << "The integer value of the string \"" << str << "\" is " << num << endl;

    // Char to int conversion
    char ch = '5';
    int n = ch - '0';
    cout << "The integer value of the character '" << ch << "' is " << n << " ; " << endl;

    // Int to string conversion
    int i = 12345;
    string str2 = to_string(i);
    cout << "The string value of the integer 12345 is \"" << str2 << "\"" << endl;

    // Char to string conversion
    char ch2 = '5';
    string str3 = string(1, ch2);
    str3 += ch2;
    cout << "The string value of the character '" << ch2 << "' is \"" << str3 << "\"" << endl;

    return 0;
}