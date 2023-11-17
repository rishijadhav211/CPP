#include <bits/stdc++.h>
using namespace std;

class deepcopy
{
public:
    int val;
    int *val2;

    deepcopy(int a, int b)
    {
        val = a;
        val2 = new int;
        *val2 = b;
    }

    deepcopy(deepcopy &other)
    {
        val = other.val;
        val2 = new int; // this is the imp change we assign new address;
        *val2 = *other.val2;
    }
};
int main()
{
    deepcopy d(33, 444);
    deepcopy d2 = d;
    *d2.val2 = 333;
    cout << *d.val2 << endl;
    cout << d.val << endl;
    cout << *d2.val2 << endl;
    cout << d2.val << endl;
}