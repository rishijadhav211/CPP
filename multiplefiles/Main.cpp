#include <iostream>
#include "vehicale.cpp"
#include "BindingExample.cpp"
using namespace std;

int main()
{
    vehicale v(1, 440);
    v.display();

    Second *t = new Third; // reference pointer of abstract class pointing toward the objec to third class
    t->display();
    return 0;
}
