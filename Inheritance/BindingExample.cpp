#include <bits/stdc++.h>
using namespace std;
// order of calling the constructors, method and destructor
class First
{
public:
    First()
    {
        cout << "first constructor called\n";
    }
    void display()
    {
        cout << "Displaying first\n";
    }
    ~First()
    {
        cout << "First distructor Called \n";
    }
};

class Second : public First
{
public:
    Second()
    {
        cout << "Second constructor called \n";
    }

    virtual void display()
    {
        cout << "Displaying second\n";
    }

    void secfunc()
    {
        cout << "calling function from second" << endl;
    }

    virtual void play() = 0;
    virtual ~Second()
    {
        cout << "Second distructor Called \n";
    }
};

class Third : public Second
{
public:
    Third()
    {
        cout << "Third constructor called \n";
    }

    void display()
    {
        cout << "Displaying Third\n";
    }

    void play()
    {
        cout << "play";
    }

     void thirdfunc()
    {
        cout << "calling function from third.." << endl;
    }
    ~Third()
    {
        cout << "Third distructor Called \n";
    }
};

int main()
{
    Second *s = new Third();
    s->display();
    s->secfunc();
   

    delete (s); // destructors called after delete

    return 0;
}