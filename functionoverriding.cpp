#include <bits/stdc++.h>
using namespace std;
class parent
{
public:
    parent()
    {
        cout << "parent constructor" << endl;
    }
    virtual void display()
    {
        cout << "In Parent" << endl;
    }
    virtual ~parent()
    {
        cout << "parent destructor called!";
    }
};

class derived : public parent
{
public:
    derived()
    {
        cout << "derived class constructor" << endl;
    }
    void display()
    {
        cout << "In derived" << endl;
    }
    ~derived()
    {
        cout << "In derived distructor" << endl;
    }
};
int main()
{

    parent *p = new derived;
    p->display();
    delete (p);
    return 0;
}