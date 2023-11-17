#include <bits/stdc++.h>
using namespace std;

class first
{
public:
    int a = 10;
    first()
    {
        cout << "111111st constructor called" << endl;
    }
    first(int val)
    {
        cout << "1111st with argument called" << endl;
        a = val;
    }
};

class second
{
public:
    int b = 20;
    first f;
    second()
    {
        f = first(30);
        cout << "222222222nd constructor called" << endl;
    }
};
int main()
{
    second s;
    return 0;
}