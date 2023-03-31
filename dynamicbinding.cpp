#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    A()
    {
        cout << "constructor of a" << endl;
    }
    virtual void print()
    {
        cout << "in a class" << endl;
    }

    void display() const
    {
        cout << "const function";
    }
    virtual ~A()
    {
        cout << "distructor of A";
    }
};
class B : public A
{
    void print()
    {
        cout << "in bb class" << endl;
    }

    ~B()
    {
        cout << "disructor of B called" << endl;
    }
};

int main()
{
    A *a;

    const A aa;
    aa.display();
    cout << endl;
    a = new B();
    a->print();

    return 0;
}