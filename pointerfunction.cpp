#include <bits/stdc++.h>
using namespace std;

int add(int a, int b)
{
    return a + b;
}
int main()
{
    int (*ptr)(int, int);

    ptr = add;

    cout << ptr(5, 6);
    return 0;
}