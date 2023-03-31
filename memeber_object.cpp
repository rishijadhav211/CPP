#include <iostream>
using namespace std;

// creating first class
class first
{
public:
    // defining member variable
    int A = 1;
    first()
    {
        A = 999;
        cout << "called first constructor" << endl;
    }
    first(int c)
    {
        A = c;
        cout << "in constror" << A << endl;
        cout << "parameterized" << endl;
    }
};

// creating second class
class second
{
public:
    // defing member variable
    int B = 2;

    // creating object of first class as member object of first class
    first obj_first;
    second()
    {
        B = 5;
        obj_first = first(55);
    }
};

int main()
{

    // creating object of second class
    second obj_second;
    first f = first(4);
    cout << endl;
    // accessing element of first class using object of second class
    cout << "Value of A: ";
    obj_second.obj_first.A = 5;
    cout << obj_second.obj_first.A << endl;
    cout << f.A;

    return 0;
}
// #include <iostream>
// using namespace std;

// // creating first class
// class First
// {
// public:
//     string S = "Intial String";

//     // default constructor
//     First()
//     {
//         S = "Default Constructor";
//         cout << "first constructor called" << endl;
//     }

//     // parametrized Constructor
//     First(string s)
//     {
//         S = s;
//         cout << "parameterized" << endl;
//     }

//     // Copy Constructor
//     First(First &str)
//     {
//         S = str.S;
//     }
// };

// // creating third class
// class Second
// {
// public:
//     // creating member variables
//     int A = 1;
//     First obj_A;
//     First obj_B;

//     // defing default constructor
//     Second()
//     {
//         A = 2;
//         obj_A = First();
//         obj_B = First("Default value");
//     }

//     // defining parametrized constructor
//     Second(int a, First &obj)
//     {
//         A = a;
//         obj_A = obj;
//         obj_B = obj;
//     }

//     // defining intializer list
//     Second(int a, First &obj1, First &obj2) : A{a}, obj_A{obj1}, obj_B{obj2}
//     {
//         // no need to assign here
//     }
// };

// // function to print the values
// void Print(Second &obj)
// {

//     cout << "Value of A: " << obj.A << endl;
//     cout << "Value of obj_A String: " << obj.obj_A.S << endl;
//     cout << "Value of obje_B String: " << obj.obj_B.S << endl;
//     cout << endl;
// }

// int main()
// {

//     // creating object of first class
//     First A;              // default first constructor
//     First B("My string"); //

//     // creating objects of second class
//     Second obj1;
//     Second obj2(3, A);
//     Second obj3(4, A, B);

//     // printing the values
//     cout << "Print values for obj1: \n";
//     Print(obj1);
//     cout << "Print values for obj2: \n";
//     Print(obj2);
//     cout << "Print values for obj3: \n";
//     Print(obj3);
//     return 0;
// }
