#include <bits/stdc++.h>
using namespace std;
int common(int a, int b, int c)
{
    std::string numA = std::to_string(a);
    std::string numB = std::to_string(b);
    std::string numC = std::to_string(c);

    
    unordered_set<char> digitsSet;
    unordered_set<char> second;

    for (char digit : numA)
    {
        digitsSet.insert(digit);
    }

    for (char digit : numB)
    {
        if (digitsSet.count(digit))
        {
            second.insert(digit);
        }
    }

    for (char digit : numC)
    {
        if (second.find(digit) != second.end())
        {
            return digit - '0';
        }
    }

    return -1;
}

int main()
{
    int a = 426, b = 389, c = 071;
    cout << common(a, b, c);
    return 0;
}