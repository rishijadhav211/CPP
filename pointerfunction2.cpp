#include <iostream>
using namespace std;

void fun_1()
{
    // fun_1 prints a statement to show that it has been called
    cout << "Function - 1 is called." << endl;
    return;
}

// A callback function with the name fun_2
void fun_2(void (*ptr)())
{
    // callback to function - 1
    ptr();
    cout << "Function - 2 is called." << endl;
    return;
}

int main()
{
    void (*ptr)() = &fun_1;

    // Calling fun_2 and passing the address of fun_1 as the parameter
    fun_2(ptr);

    return 0;
}