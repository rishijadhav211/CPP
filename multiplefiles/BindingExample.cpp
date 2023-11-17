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

    virtual void play() = 0;
    ~Second()
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

    ~Third()
    {
        cout << "Third distructor Called \n";
    }
};

// int main()
// {
//     Second *s = new Third();
//     s->display();

//     delete (s); // destructors called after delete

//     return 0;
// }