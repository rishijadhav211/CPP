#include <bits/stdc++.h>
using namespace std;

class parent
{
public:
    parent()
    {
        cout << "constructor called" << endl;
    }
    parent(int x)
    {
        cout << x << endl;
    }
    int getnum()
    {
        cout << "hello from parent";
        return 0;
    }
};

class child : public parent
{
public:
    parent p;
    child()
    {
        cout << "child constructor" << &p << endl;
    }

    int getnum1()
    {
        parent p(111);
        return 2;
    }
};
int main()
{
    // parent p;
    child c;
    cout << c.getnum1();
    return 0;
}