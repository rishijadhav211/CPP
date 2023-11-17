#include <bits/stdc++.h>
using namespace std;

int fun(int a, int b)
{
    if ((a & b) > (b - a) && (b & a) > (a - b))
    {
        b = b + 3 + a;
        b = a + 1;
        b = 1 + 1 + b;
        return fun(a, b + a);
    }
    return a - 1;
}
int main()
{
    cout << fun(4, 5);
    return 0;
}